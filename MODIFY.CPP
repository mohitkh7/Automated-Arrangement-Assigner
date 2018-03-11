// Modify Teacher Data
void modify()
{
	display();
	table t;
	int n,i,j,k=0,z=0;
	char in1,in2;
	ifstream f("teacher.dat",ios::binary);
	cout<<"\t\t\tModify Teacher Data ";
	cout<<"\n\nEnter Teacher Code whose Info To Be Modified : ";
	showteachercode();
	cin>>n;// teacher no.
	clearteachercode();
	f.read((char*)&t,sizeof(t));
	while(f)
	{
		if(t.code==n)
		{
			cout<<"\t\t\tTeacher Name : "<<t.name;
			k=1;
			break;
		}
		f.read((char*)&t,sizeof(t));
	}
	f.close();
	if(k==0)
		cout<<"\n\nTeacher Code Does Not Exist ";
	else
	{
		cout<<"\n\nModify :-\n 1.Basic Info\n 2.Time Table\n\t";
		in1=getch();
		if(in1=='1')
		{
			display();
			cout<<"Modify Following Basic Info :- \n 1. Name\n 2. Teacher's Post \n 3. Abbrevated Name\n 4. Mobile Number\n 5. Email Id\n 6. Date Of Birth\n\t\t";
			fstream f("teacher.dat",ios::binary|ios::in|ios::out);
			in2=getch();
			f.read((char*)&t,sizeof(t));
			while(f)
			{
				if(n==t.code)
				{

					t.modifybasic(in2);
					f.seekg(z*(sizeof(t)),ios::beg);
					f.write((char*)&t,sizeof(t));
					break;
				}
				f.read((char*)&t,sizeof(t));
				z++;
			}
			f.close();
			z=0;
			cout<<"\n Data Modified ";
		}
		else if(in1=='2')
		{
			display();
			cout<<"Modify Time Table in following way :-\n 1. OverAll\n 2. Day Wise \n 3. Period Wise \n 4. Particular Period\n\t\t\t";
			in2=getch();
			fstream f("teacher.dat",ios::binary|ios::in|ios::out);
			while(f.read((char*)&t,sizeof(t)))
			{
				if(t.code==n)
				{
					t.modifytime(in2);
					f.seekg(z*(sizeof(t)),ios::beg);
					f.write((char*)&t,sizeof(t));
					break;
				}
				z++;
			}
			f.close();
			cout<<"\n Data Modified ";
		}
		else
			cout<<"\n\n Invalid Input \n\tPlz Retry ";

	}
}



