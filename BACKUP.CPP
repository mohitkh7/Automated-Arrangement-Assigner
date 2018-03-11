void backup()
{
	display();
	table t;
	char ch;
	cout<<"\n\n1.To Backup Data\n2.To Retrieve Backup Data\n";
	ch=getch();
	if(ch=='1')
	{
		ifstream org("teacher.dat",ios::binary);
		ofstream copy("tbackup.dat",ios::binary);
		while(org.read((char*)&t,sizeof(t)))
		{
			copy.write((char*)&t,sizeof(t));
		}
		cout<<"\n\nFile Backed Up ";
		org.close();
		copy.close();
	}
	else if(ch=='2')
	{
		ifstream back("tbackup.dat",ios::binary);
		ofstream dest("teacher.dat",ios::binary);
		while(back.read((char*)&t,sizeof(t)))
		{
			dest.write((char*)&t,sizeof(t));
		}
		cout<<"\n\nData Retrieved ";
		dest.close();
		back.close();
	}
	else
		cout<<"\n\n Invalid Input .....try again";
	getch();
	menu();
}


