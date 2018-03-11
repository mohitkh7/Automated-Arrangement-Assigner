// show teacher code  and also to clear the scrren after input
void showteachercode()
{
	int curx=wherex(),cury=wherey();
	int i=0;
	table t;
	cout<<"\n\n";
	int posx=wherex(),posy=wherey();
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		gotoxy(posx,posy++);
//		f.read((char*)&t,sizeof(t));
		cout<<t.code<<". "<<t.name<<"\n";
		if(i==12)
			{
				posx+=40;
				posy=cury+2;
			}
		i++;
	}
	gotoxy(curx,cury);
	f.close();
}
void clearteachercode()
{
	int curx=wherex(),cury=wherey();
	int i;
	for(i=0;i<1500;i++)
		cout<<" ";
	gotoxy(curx,cury);
}
