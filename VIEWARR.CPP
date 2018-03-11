// to view arrangement
void viewarr()
{
	char con;
	int td,tm,ty,tw,z=0,y=0;
	struct dosdate_t d;
	_dos_getdate(&d);
	td=d.day;tm=d.month;ty=d.year;tw=d.dayofweek;
	arrange a;
	int per,cl,t;
	display();
	cout<<"View Arrangement as : ";
	cout<<"\n\n1. All\n2. Period Wise\n3. Class Wise\n4. Abs. Teacher Wise\n5. Assigned Teacher Wise\n6. Previous Date \n7. Back To Main Menu\n\n";
	con=getch();
	if(con=='7')
		menu();
	if(con<'1' || con>'7')
	{
		cout<<" Wrong Option "<<(char)2;
		getch();
		menu();
	}
	display();
	ifstream f("tarr.dat",ios::binary);
	while(f.read((char*)&a,sizeof(a)))
	{
		if(con=='1' && a.date.date==td && a.date.month==tm && a.date.year==ty)
		{
			if(z==0)
			{
				display();
				cout<<setw(45)<<"Arrangement";
				cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
			}
			a.showarr();
			z++;
		}
		if(con=='2' && a.date.date==td && a.date.month==tm && a.date.year==ty)
		{
			if(y==0)
			{
				a2:
				cout<<"\n\n Enter Period : ";
				cin>>per;
				if(per<1 || per>8)
					goto a2;
				y++;
				per-=1;
			}
			if(a.orgperiod==per)
			{
				if(z==0)
				{
					display();
					cout<<setw(45)<<"Arrangement";
					cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
				}
				a.showarr();
				z++;
			}
		}
		if(con=='3' && a.date.date==td && a.date.month==tm && a.date.year==ty)
		{
			if(y==0)
			{
				a3:
				cout<<"\n\n Enter Class : ";
				classside(14);
				cin>>cl;
				if(cl<1 || cl>22)
					goto a3;
				y++;
			}
			if(a.orgclass==cl)
			{
				if(z==0)
				{
					display();
					cout<<setw(45)<<"Arrangement";
					cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
				}
				a.showarr();
				z++;
			}
		}
		if(con=='4' && a.date.date==td && a.date.month==tm && a.date.year==ty)
		{
			if(y==0)
			{
				a4:
				cout<<"\n\n Enter Absent Teacher Code : ";
				showteachercode();
				cin>>t;
				if(t<1 || t>25)
					goto a4;
				y++;
			}
			if(a.orgcode==t)
			{
				if(z==0)
				{
					display();
					cout<<setw(45)<<"Arrangement";
					cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
				}
				a.showarr();
				z++;
			}
		}
		if(con=='5' && a.date.date==td && a.date.month==tm && a.date.year==ty)
		{
			if(y==0)
			{
				a5:
				cout<<"\n\n Enter Assigned Teacher Code : ";
				showteachercode();
				cin>>t;
				if(t<1 || t>25)
					goto a5;
				y++;
			}
			if(a.asscode==t)
			{
				if(z==0)
				{
					display();
					cout<<setw(45)<<"Arrangement";
					cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
				}
				a.showarr();
				z++;
			}
		}
		if(con=='6')
		{
			if(y==0)
			{
				cout<<" Enter Date : ";
				cin>>td;
				cout<<" Enter Month : ";
				cin>>tm;
				/*cout<<" Enter Year : ";
				cin>>ty;*/
				y++;
			}
			if(a.date.date==td && a.date.month==tm)
			{
				if(z==0)
				{
					display();
					cout<<setw(45)<<"Arrangement";
					cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
				}
				a.showarr();
				z++;
			}
		}
		if(z%9==8)
		{
			getch();
			display();
			cout<<setw(45)<<"Arrangement";
			cout<<"\n\n"<<setw(5)<<"Date"<<setw(20)<<"Name"<<setw(10)<<"Period"<<setw(10)<<"Class"<<setw(10)<<"Subject"<<setw(20)<<"Teacher";
		}
		       //	getch(); // to let view arrangment in brackets
	}
	if(z==0)
		cout<<"No Such Arrangment";
	getch();
	viewarr();
}


