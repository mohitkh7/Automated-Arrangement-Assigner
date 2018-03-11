// a function to show timetable day wise
void showtimed()
{
	top:
	display();
	int n,k=0,i;
	table t;
	cout<<"Enter Day For Which You want to see timetable : \n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n\t\t";
	cin>>n;
	if(n<1 || n>6)
	{
		cout<<"\n Incorrect Day Entered\n\t\tPlz Re Enter ";
		getch();
		goto top;
	}
	n=n-1;
	ifstream f("teacher.dat",ios::binary);
	again:
	display();
	char day[][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	cout<<"\t\t\tTime Table For "<<day[n]<<"\n";
	cout<<"Code"<<setw(7)<<"Name"<<setw(8)<<"1st"<<setw(8)<<"2nd"<<setw(8)<<"3rd"<<setw(8)<<"4th"<<setw(8)<<"5th"<<setw(8)<<"6th"<<setw(8)<<"7th"<<setw(8)<<"8th"<<"\n";
	while(f.read((char*)&t,sizeof(t)))
	{
		t.showtimed(n);
		k++;
		if(k%6==0)
		{
			cout<<"\n\nFor Exit Press ESC, To View Next 6 Teacher Press Any Other Key ";
			char ch;
			ch=getch();
			if(ch==27)
				goto out;
			else
				goto again;
		}
	}
	if(k==0)
		cout<<"\n\n No Teacher Found In DataBase ";
	getch();
	out:
}
