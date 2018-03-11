// intro  and end
void color(int txt,int bg)
{
	textbackground(bg);
	textcolor(txt);
}
void box(int &n)
{
	int x=1,y=1,j;
	x=n/100;
	y=n/320;
	if(n%200==0)
	{
		gotoxy(x,1);
		cout<<"*";
		gotoxy(80-x,25);
		cout<<"*";
		gotoxy(1,y);
		cout<<"*";
		gotoxy(80,24-y);
		cout<<"*";
		sound(n+3000,n+3200,20);
	}
	if(x==80)
		{
			clrscr();
			again:
				j=random(14)+2;
			if(j==6 ||j==8)
				goto again;
			color(0,j);
			n=101;
		}
}

void buffer(int i)
{
	int j,k,l;
	for(j=0;j<i;j++)
		for(k=0;k<i;k++)
			for(l=0;l<i;l++);
}
void msg()
{
	gotoxy(20,12);
	cout<<" TIME TABLE MANAGEMENT & ARRANGEMENT ASSIGNER ";
	gotoxy(35,14);
	cout<<" DESIGNED BY :- MOHIT KHANDELWAL";
	//gotoxy(35,16);
	//cout<<" Under Guidence of :- S. SHARMA ";
	gotoxy(1,24);
	cout<<" Press Any Key To Skip ";
//	cout<<"\n\n\n\n\n\n\n\n\n\n \t\t\t TIME TABLE MANAGEMENT & ARRANGEMENT ASSIGNER\n\n\n\t\t\t\t DESIGNED BY :- MOHIT KKHANDELWAL\n\n\n\t\t\t Under Guidence of :- S. SHARMA\n\n\n\n\n Press Any Key To Skip ";
}
void intro()
{
	 int n=8000,i,j,k;
	randomize();
//	sound(n+1000,n+1400,5);
	while(!kbhit())
	{
		n++;
		//sound(n+1000,n+1400,10);
		box(n);
		msg();
	}
	getch();
}