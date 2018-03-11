// this function would clear all arrangment of today's date and also would change the state
void reset()
{
	table t;
	 struct dosdate_t d;
	_dos_getdate(&d);
	int day=d.day,month=d.month;
	arrange a;
	ifstream f("tarr.dat",ios::binary);
	ofstream m("temp.dat",ios::binary);
	while(f.read((char*)&a,sizeof(a)))
	{
		if(a.date.date!=day && a.date.month!=month)
		{
			m.write((char*)&a,sizeof(a));
		}
	}
	f.close();
	m.close();
	remove("tarr.dat");
	rename("temp.dat","tarr.dat");
	t.changestate();
	display();
	cout<<"\n\n Arrangment Reset ";
	getch();
	menu();
}

