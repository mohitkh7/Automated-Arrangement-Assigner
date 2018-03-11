// to manage date
void date(int &td,int &tm,int &ty,int & tw)
{
	struct dosdate_t d;
	_dos_getdate(&d);
	td=d.day;tm=d.month;ty=d.year;tw=d.dayofweek;
}
int weekday()
{
	struct dosdate_t d;
	_dos_getdate(&d);
	int week=d.dayofweek;
	week=(week)-1;
	if(week<0)
		week=5;
	return week;
}
void changedate()
{
	ofstream f("tdate.txt");
	struct dosdate_t d;
	_dos_getdate(&d);
	int day=d.day;
	int month=d.month;
	f<<day<<"\n"<<month;
	f.close();
}
int checkdatechange()
{
	ifstream f("tdate.txt");
	struct dosdate_t d;
	_dos_getdate(&d);
	int day=d.day,month=d.month;
	int fday,fmonth;
	f>>fday;
	f>>fmonth;
	if(fday==day && fmonth==month)
		return 0;
	else
		changedate();
	return 1;
}


