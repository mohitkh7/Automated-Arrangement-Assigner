// arrangment menu
void assignarr();
void arrangment()
{
	display();
	int n,i,start,end;
	char ch;
	table t;
	if(checkdatechange()==1)
		t.changestate();
	if(noofabst()!=0)
		listteacher();
	top1:
	cout<<"\n\n Is Any Teacher Is Absent Today (y/n) : ";
	ch=getch();
	if(ch=='y' || ch=='Y')
	{
		while(ch=='y' || ch=='Y')
		{
			display();
			cout<<"\t\t\tArrangement Assigner ";
			cout<<"\n\nEnter Code Of Absent Teacher ";
			showteachercode();
			cin>>n;
			clearteachercode();
			if(n<1 || n>filesize())
			{
				cout<<"\t\t\t InValid Teacher Code ";
				getch();
				display();
				goto top1;
			}
			cout<<"\t\t\t\t";t.namebycode(n);
			absstate(n);
			cout<<"\n Is Any Else Teacher is Absent Today (y/n) : ";
			ch=getch();
		}
	}
	top:
	cout<<"\n\n Is Any Teacher Is Busy Today (y/n) : ";
	ch=getch();
	if(ch=='y' || ch=='Y')
	{
		while(ch=='y' || ch=='Y')
		{
			display();
			cout<<"\t\t\tArrangment Assigner ";
			cout<<"\n\nEnter Code Of Busy Teacher ";
			showteachercode();
			cin>>n;
			clearteachercode();
			if(n<1 || n>filesize())
			{
				cout<<"\t\t\tInvalid Teacher Code ";
				getch();
				display();
				goto top;
			}
			cout<<"\t\t\t\t";t.namebycode(n);
			cout<<"\n From Period : ";
			cin>>start;
			if(start<1 ||start>8)
				start=1;
			cout<<"\n Upto Period : ";
			cin>>end;
			if(end<1 || end>8)
				end=8;
			absstate(n,start,end);
			cout<<"\n Is Any Else Teacher is Busy Today (y/n) : ";
			ch=getch();
		}
	}
	if(noofabst()!=0)
	{
		display();
		listteacher();
		cout<<"\n\nAssign Arrangment :\n1.Right Now\n2.Later";
		ch=getch();
		if(ch=='1')
			assignarr();
		if(ch=='2')
			cout<<"\n You May Assign Arrangment Later ";
	}
	else
		cout<<"\n\n No Absent Teacher Yet Registered ";
}
void assignarr()
{
	display();
	arrange a;
	int n;
	if(noofabst()==0)
		goto end;
	else
		listteacher();
	cout<<"\n\n Assign Arrangment : \n1. Manually \n2. Automatically";
	char ch;
	ch=getch();
    if(ch=='1')
    {
	cout<<"\n\n Enter Teacher Code :  ";
	cin>>n;
	if(checkabs(n)==0)
		cout<<"\t\t\tInvalid Code ";
	else if(a.isarrdone(n)==1)
		cout<<"\t\tArrangement Already Assigned ";
	else
	{
		table t;
		ifstream f("teacher.dat",ios::binary);
		while(f)
		{
			f.read((char*)&t,sizeof(t));
			if(t.code==n)
			{
				cout<<"\t\t\t";
				t.namebycode(n);
				t.arrangment();
			}
		}
	}
    }
    if(ch=='2')
    {
	int no=0;
	int n=autotno();
	while(n!=0)
	{
		cout<<"\n\n Assigning Arrangment ";
		table t;
		ifstream f("teacher.dat",ios::binary);
		while(f)
		{
			f.read((char*)&t,sizeof(t));
			if(t.code==n)
			{
				t.autoarrangement();
				no++;
			}
		}
		n=autotno();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bArrangement Assigned ";
	}
	if(no!=0)
	{
		//cout<<" \n\n Arrangment Assigned \n\n";
		getch();
		viewarr();
		getch();
	}
	else
		cout<<" \n\n Arrangment Already Assigned ";

    }
	end:
	if(noofabst()==0)
	cout<<"\n\n Absent Teacher Till Not Registered.\n\n Register First ";
}
