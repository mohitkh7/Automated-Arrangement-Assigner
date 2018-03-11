// contain function to assign arrangment
// to check day of week
int dayofweek()
{
	int n;
	struct dosdate_t d;
	_dos_getdate(&d);
	n=d.dayofweek;
	if(n==0)
		n=5;
	return n;
}
// to change state of absent teacher
void absstate(int n)
{
	int day=dayofweek(),i,z=0;
	table t;
	fstream f("teacher.dat",ios::binary|ios::in|ios::out);
	while(f.read((char*)&t,sizeof(t)))
	{
		if(t.code==n)
			for(i=0;i<8;i++)
				t.state[i]=-2;
		f.seekg(z*(sizeof(t)),ios::beg);
		f.write((char*)&t,sizeof(t));
		z++;
	}
	f.close();
}
void absstate(int n,int start,int end)
{
	int day=dayofweek(),i,z=0;
	table t;
	start-=1;
	end-=1;
	fstream f("teacher.dat",ios::binary|ios::in|ios::out);
	while(f.read((char*)&t,sizeof(t)))
	{
		if(t.code==n)
			for(i=start;i<=end;i++)
				t.state[i]=-2;
		f.seekg(z*(sizeof(t)),ios::beg);
		f.write((char*)&t,sizeof(t));
		z++;
	}
	f.close();
}
void listteacher()
{
	display();
	table t;
	int a,b=0,c;
	cout<<"\n\n*List Of Absent Teacher : ";
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0;a<8;a++)
			if(t.state[a]!=-2)
				b=1;
		if(b==0)
			cout<<"\n"<<setw(20)<<t.code<<". "<<t.name;
	}
	f.close();
	ifstream m("teacher.dat",ios::binary);
	cout<<"\n\n*List Of Busy Teacher : ";
	while (m.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0,c=0;a<8;a++)
		{
			if(t.state[a]==-2)
				b=1;
			if(t.state[a]!=-2)
				c=1;
		}
		if(b==1 && c==1)
		{
			cout<<"\n"<<setw(20)<<t.code<<". "<<t.name<<" ( ";
			for(a=0;a<8;a++)
				if(t.state[a]==-2)
					cout<<a+1<<",";
			cout<<"\b )";
		}
	}
	m.close();
}
int checkabs(int n)
{
	table t;
	int a,b=0,c;
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0;a<8;a++)
			if(t.state[a]!=-2)
				b=1;
		if(b==0 && n==t.code)
			return 1;
	}
	f.close();
	ifstream m("teacher.dat",ios::binary);
	while (m.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0,c=0;a<8;a++)
		{
			if(t.state[a]==-2)
				b=1;
			if(t.state[a]!=-2)
				c=1;
		}
		if(b==1 && c==1 && t.code==n)
			return 1;
	}
	m.close();
	return 0;
}
int checkstate(int code,int per)
{
	table t;
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		if(t.code==code)
			if(t.state[per]==0)
				return 1;
	}
	f.close();
	return 0;
}
void  statechange(int code,int per)
{
	table t;
	int z=0;
	fstream f("teacher.dat",ios::binary|ios::in|ios::out);
	while(f.read((char*)&t,sizeof(t)))
	{
		if(t.code==code)
			t.state[per]=1;
		f.seekg(z*(sizeof(t)),ios::beg);
		f.write((char*)&t,sizeof(t));
		z++;
	}
	f.close();
}
// to check either any techer is absent or not .... return 1 if abs else
int noofabst()
{
	table t;
	int a,b=0,c;
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0;a<8;a++)
			if(t.state[a]!=-2)
				b=1;
		if(b==0)
			return 1;
	}
	f.close();
	ifstream m("teacher.dat",ios::binary);
	while (m.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0,c=0;a<8;a++)
		{
			if(t.state[a]==-2)
				b=1;
			if(t.state[a]!=-2)
				c=1;
		}
		if(b==1 && c==1)
		{
			return 1;
		}
	}
	m.close();
	return 0;
}
int autotno()
{
	table t;
	arrange arr;
	int a,b=0,c;
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0;a<8;a++)
			if(t.state[a]!=-2)
				b=1;
		if(b==0 && arr.isarrdone(t.code)!=1)
			return t.code;
	}
	f.close();
	ifstream m("teacher.dat",ios::binary);
	while (m.read((char*)&t,sizeof(t)))
	{
		for(a=0,b=0,c=0;a<8;a++)
		{
			if(t.state[a]==-2)
				b=1;
			if(t.state[a]!=-2)
				c=1;
		}
		if(b==1 && c==1 && arr.isarrdone(t.code)!=1)
		{
			return t.code;
		}
	}
	m.close();
	return 0;
}







