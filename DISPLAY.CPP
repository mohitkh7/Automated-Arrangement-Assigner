// Display
void display()
{
	clrscr();
	cout<<"\t\tTime Table Management & Arrangment Assigner ";
	cout<<"\n";
	struct dostime_t t;
	_dos_gettime(&t);
	struct dosdate_t d;
	_dos_getdate(&d);
	printf("Date : %d/%d/%d   ",d.day,d.month,d.year);
	char z[]={"SunMonTueWedThuFriSat"};
	int i;
	int o=d.dayofweek;
	for(i=o*3,o=i;i<o+3;i++)
		cout<<z[i];
	cout<<"                                           ";
	printf("Time : %d:%d\n\n",t.hour,t.minute);
}