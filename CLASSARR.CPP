// class of arrangment
class arrange
{
	public:
		struct d
		{
			int date,month,year,day;
		}date;
		int orgcode;
		int orgperiod;
		int orgclass;
		int orgsub;
		int asscode;
		void notearr(int code,int per,int oclass,int osub,int ass)
		{
			//struct date d;
			//getdate(&d);
			arrange a;
			struct dosdate_t d;
			_dos_getdate(&d);
			a.date.year=d.year;
			a.date.date=d.day;
			a.date.month=d.month;
			a.date.day=d.dayofweek;
			a.orgcode=code;
			a.orgperiod=per;
			a.orgclass=oclass;
			a.orgsub=osub;
			a.asscode=ass;
			ofstream f("tarr.dat",ios::binary|ios::app);
			f.write((char*)&a,sizeof(a));
			f.close();
		}
		void showarr()
		{
			table t;
			cout<<"\n\n ";
			cout<<date.date<<"/"<<date.month<<setw(20);
			t.namebycode(orgcode);
			cout<<setw(10)<<orgperiod+1<<setw(10)<<classshort[orgclass]<<setw(10)<<subshort[orgsub]<<setw(20);
			t.namebycode(asscode);
		}
int isarrdone(int n)// a fun to check whether arr of that t is assigned for today return 1 if assigned
{
	arrange a;
	struct dosdate_t d;
	_dos_getdate(&d);
	int day=d.day,month=d.month;
	ifstream f("tarr.dat",ios::binary);
	while(f)
	{
		f.read((char*)&a,sizeof(a));
		if(day==a.date.date && month==a.date.month && n==a.orgcode)
			return 1;
	}
	f.close();
	return 0;
}



};
