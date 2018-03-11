// show subject code
void showsub()
{
	int i;
	display();
	for(i=1;i<22;i++)
	{
		cout<<setw(3)<<i<<"."<<setw(20)<<subcode[i]<<setw(5)<<"("<<subshort[i]<<")"<<"\n";
	}
}
void showclass()
{
	int i;
	display();
	for(i=1;i<24;i++)
	{
		cout<<"\n"<<setw(3)<<i<<"."<<setw(20)<<classcode[i]<<setw(8)<<" ("<<classshort[i]<<")";
	}
}
void showteacher()
{
	display();
	ifstream f("teacher.dat",ios::binary);
	table t;
	while(f.read((char*)&t,sizeof(t)))
	{
		cout<<endl<<setw(5)<<t.code<<setw(5)<<t.abb<<setw(20)<<t.name;
	}
	f.close();
}