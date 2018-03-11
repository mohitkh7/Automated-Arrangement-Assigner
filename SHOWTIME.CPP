// to show the timetable teacher wise
void showtimet()
{
	display();
	ifstream f("teacher.dat",ios::binary);
	table t;int n,k=0;
	cout<<"\nEnter Teacher Code ";
	showteachercode();
	cin>>n;
	clearteachercode();
	f.read((char*)&t,sizeof(t));
	while(f)
	{
		if(n==t.code)
		{
			t.showtimet();
			k=1;
		}
	f.read((char*)&t,sizeof(t));
	}
	if(k==0)
		cout<<" Teacher Code Does Not Exist ";
}
// to show the timetable class wise
void showtimec()
{
	display();
	ifstream f("teacher.dat",ios::binary);
	table t;int n,k=0;
	cout<<"\nEnter class Code ";
	cin>>n;
	f.read((char*)&t,sizeof(t));
	while(f)
	{
		if(n==t.code)
		{
			t.showtimet();
			k=1;
		}
	f.read((char*)&t,sizeof(t));
	}
	if(k==0)
	{
		cout<<" Teacher Code Does Not Exist ";
		getch();
	}
}