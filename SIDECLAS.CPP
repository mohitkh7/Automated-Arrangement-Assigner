void clear(int x,int y);
void classside(int z)
{
	int end=23;
	int curx=wherex(),cury=wherey();
	gotoxy(65,2);
	int posx=wherex(),posy=wherey();
	clear(posx,posy);
	//cout<<"x: "<<posx<<"y: "<<posy;
	gotoxy(posx,posy);
	cout<<" Class Code";
	gotoxy(posx,posy+1);
	if(z==0)
		cout<<"| 0. Free ";
	if(z==14)
		end=15;
	//cout<<"\n"<<getx()<<" "<<gety();
	for(int i=1;i<end;i++)
	{
		gotoxy(posx,posy+i+1);
		cout<<"| "<<i<<". Cl "<<classshort[i]/*<<" ("<<classshort[i]*/;
	}
	gotoxy(curx,cury);
}
void clear(int x,int y)
{
	int curx=wherex(),cury=wherey();
	gotoxy(x,y);
	cout<<"              ";
	for(int i=1;i<24;i++)
	{
		gotoxy(x,y+i);
		cout<<"               ";
	}
	gotoxy(curx,cury);
}
void subjectside()
{
	int curx=wherex(),cury=wherey();
	gotoxy(65,2);
	int posx=wherex(),posy=wherey();
	clear(posx,posy);
	gotoxy(posx,posy);
	//cout<<"x: "<<posx<<"y: "<<posy;
	cout<<" Subject Code";
	//cout<<"\n"<<getx()<<" "<<gety();
	for(int i=1;i<21;i++)
	{
		gotoxy(posx,posy+i);
		cout<<"| "<<i<<"."<<subshort[i]/*<<" ("<<classshort[i]*/;
	}
	gotoxy(curx,cury);
}
void freeside(int per)
{
	int curx=wherex(),cury=wherey();
	gotoxy(65,2);
	int posx=wherex(),posy=wherey();
	clear(posx,posy);
	gotoxy(posx,posy);
	cout<<" Teacher Code";
	gotoxy(posx,++posy);
	cout<<"| 0. Self";
	table t;
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		if(t.state[per]==0)
		{
			gotoxy(posx,++posy);
			cout<<"| "<<t.code<<"."<<" "<<t.abb;
		}
	}
	f.close();
	gotoxy(curx,cury);
}


