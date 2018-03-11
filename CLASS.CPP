// class
/*char subcode [][20]={" Free Period "," Physics "," Chemistry "," Biology "," Computer "," Hindi "," English "," Buisness Studies "," Accounts "," Economics "," Mathematics "," Social Science "," Sanskrit "," Science "," Games "," Arts "," Music "," General Studies "," SUPW "," Environment "," Library","CCA"};
char subshort[][20]={" Free"," Phy"," Chem"," Bio"," Comp"," Hin"," Eng"," BS "," Acc"," Eco"," Math"," SST"," Sans"," Sci"," Game"," Art"," Mus"," GS "," WE "," Env"," Lib","CCA"};
char classcode[][20]={" "," Class I "," Class II "," Class III "," Class IV "," Class V "," Class VI "," Class VII "," Class VIII "," Class IX "," Class X "," Class XI Sc "," Class XII Sc "," Class XI Com "," Class XII Com "," Class XI Hin "," Class XII Hin "," Class XI CS "," Class XII CS "," Class XI Math "," Class XII Math "," Class XI Bio "," Class XII Bio "," All Class "};
char classshort[][10]={" ","1","2","3","4","5","6","7","8","9","10"," 11S"," 12S"," 11C"," 12C"," 11H"," 12H","11Cs","12Cs"," 11M"," 12M"," 11B"," 12B"," All"};*/
void period(int j)
{
	switch(j)
	{
		case 0:
			cout<<" 1st Period ";
		case 1:
			cout<<" 2nd Period ";
	}
}
class table
{
	public:
	int code;
	char name[40];
	private:
	int present;
	char post[30];
	public:
	char abb[10];
	private:
	char subject[20];
	int arr[6][8];
	int sub[6][8];
	public:
	int state[8];
	private:
	int preference[30];
	int mobno;
	char email[20];
	struct birth{
		int d,m;
	}dob;
	public:
		void day(int i)
		{
			switch(i)
			{
				case 0:
					cout<<" Monday ";
					break;
				case 1:
					cout<<" Tuesday ";
					break;
				case 2:
					cout<<" Wednesday ";
					break;
				case 3:
					cout<<" Thursday ";
					break;
				case 4:
					cout<<" Friday ";
					break;
				case 5:
					cout<<" Saturday ";
			}
}
void write()
{
			int i,j,k,z=0,a;
			char ch;
			code=ReadNo();
			cout<<"\nEnter Teacher Info For Code : "<<code;
			cout<<"\nEnter Teacher's Name : ";
			gets(name);
			cout<<"\nEnter Teacher's Post : ";
			gets(post);
			cout<<"\nEnter Teacher Abbrevated Name : ";
			gets(abb);
			cout<<"\nEnter Mobile No : ";
			cin>>mobno;
			cout<<"\nEnter Email Id : ";
			gets(email);
			cout<<"\nEnter Date Of Birth ";
			cin>>dob.d;
			cout<<"\nEnter Month Of Birth ";
			cin>>dob.m;
			top:
			/*cout<<"\n Enter Teacher's Subject Code : ";
			int m;
			cin>>m;
			if(m==0)
			{
				showsub();
				goto top;
			}
			strcpy(subject,subcode[m]);
			cout<<"\t\t\t\t"<<subject; */
			for (i=0;i<6;i++)
			{
				for(j=0;j<8;j++)
				{

					again:
					int m;
					if(i==2 && j==7)
					{
						arr[i][j]=23;
						sub[i][j]=21;
						cout<<"\n\n "<<j+1<<" period on ";day(i);cout<<" is CCA Period ";
						goto last;
					}
					classside(0);
					cout<<"\nEnter Class where to attend "<<j+1<<" Period on ";
					day(i);
					cout<<" : ";
					cin>>m;
					if(m>22 || m<0)
						goto again;
					if(m!=0);
						cout<<"\t\t\t\t\t"<<classcode[m];
					arr[i][j]=m;
					back:
					//subjectside();
					//posx=wherex();posy=wherey();
					subjectside();
					//gotoxy(posx,posy);
					if(arr[i][j]==0)
					{
						m=0;cout<<endl;
					}
					else
					{
						cout<<"\nEnter Subject Code : ";
						cin>>m;
						if(m>20 || m<1)
							goto back;
					}
					cout<<"\t\t\t\t\t"<<subcode[m];
					sub[i][j]=m;
					last:
				}
			}
			SetNo();
			cout<<"\nInformation and Time Table of "<<name<<" stored ";
}
void showtimet()
{
	display();
	cout<<"Teacher Name : "<<name<<setw(20)<<"Post : "<<post<<"\n\n";
	cout<<setw(10)<<"1st"<<setw(8)<<"2nd"<<setw(8)<<"3rd"<<setw(8)<<"4th"<<setw(8)<<"5th"<<setw(8)<<"6th"<<setw(8)<<"7th"<<setw(8)<<"8th";
	int i,j,k,l,o;
	char z[]={"MonTueWedThuFriSat"};
	for(k=0;k<6;k++)
	{
		o=k;
		cout<<"\n\n"<<setw(10);
		for(i=o*3,o=i;i<o+3;i++)
			cout<<z[i]<<setw(7);
		for(j=0;j<8;j++)
		{
			//if(arr[k][j]!=23)
				cout<<classshort[(arr[k][j])];
			cout<<setw(8);
		}
		cout<<"\n"<<"  ";
		for(j=0;j<8;j++)
			cout<<setw(8)<<subshort[(sub[k][j])];
	}
}
void showtimec()
{
	top:
	display();
	int n, i,j,k,l,o;
	table t;
	char z[]={"MonTueWedThuFriSat"};
//	ifstream f("teacher.dat",ios::binary,ios::in);
	cout<<"Enter Class Code : ";
	classside(14);
	cin>>n;
	if(n<1 || n>14)
	{
		clrscr();
		goto top ;
	}
	clear(65,2);
	if(n>10)
	{
		showtimespec(n);
		goto end;
	}
	//cout<<"Teacher Name : "<<name<<setw(20)<<"Post : "<<post<<"\n\n";
	cout<<setw(10)<<"1st"<<setw(8)<<"2nd"<<setw(8)<<"3rd"<<setw(8)<<"4th"<<setw(8)<<"5th"<<setw(8)<<"6th"<<setw(8)<<"7th"<<setw(8)<<"8th";
	for(k=0;k<6;k++)
	{
		o=k;
		cout<<"\n\n"<<setw(10);
		for(i=o*3,o=i;i<o+3;i++)
			cout<<z[i]<<setw(7);
		for(j=0;j<8;j++)
		{
			ifstream f("teacher.dat",ios::binary);
			int z;
			while(f.read((char*)&t,sizeof(t)))
			{
				if(t.arr[k][j]==n)
					cout<<subshort[(t.sub[k][j])];
				if(t.arr[k][j]==23 && z==0)
					cout<<subshort[(t.sub[k][j])];
				z++;
			}
			z=0;
			cout<<""<<setw(8);
			f.close();
		}
		cout<<"\n"<<setw(9);
		for(j=0;j<8;j++)
		{
			ifstream f("teacher.dat",ios::binary);
			while(f.read((char*)&t,sizeof(t)))
				if(t.arr[k][j]==n)
					cout<<t.abb;
			cout<<""<<setw(8);
			f.close();
		}
	}
	end:
}
void showtimed(int d)
{
	int i,j,k,l,o;
	cout<<"\n";
	cout<<setw(3)<<code<<setw(7)<<abb<<setw(9);
	for(i=0;i<8;i++)
	{
		cout<<classshort[(arr[d][i])]<<setw(8);
	}
	cout<<""<<setw(16);
	for(i=0;i<8;i++)
		cout<<subshort[(sub[d][i])]<<setw(8);
}
void modifybasic(char ch)
{
	display();
	char Mname[40];
	cout<<"\t\t\tMODIFY";
	cout<<"\n Teacher Code : "<<code;
	cout<<" \t\tTeacher Name : "<<name;
	switch (ch){
		case '1' :
			//cout<<"\n\n Teacher Name : "<<name;
			cout<<"\n\n Enter Modified Name : ";
			gets(Mname);
			strcpy(name,Mname);
			break;
		case '2' :
			cout<<"\n\n Teacher Post : "<<post;
			cout<<"\n Enter Modified Post : ";
			gets(post);
			//strcpy(post,Mpost);
			break;
		case '3':
			cout<<"\n\n Teacher Abbrevated Name  : "<<abb;
			cout<<"\n Enter Abbrevated Name : ";
			gets(abb);
		   //	strcpy(abb,Mabb);
			break;
		case '4':
			cout<<"\n\n Teacher Mobile Number : "<<mobno;
			cout<<"\n Enter Modified Mobile Number : ";
			cin>>mobno;
			//mobno=Mmobno;
			break;
		case '5':
			cout<<"\n\n Teacher Email Id : "<<email;
			cout<<"\n Enter Modified Email Id : ";
			gets(email);
			//strcpy(email,Memail);
			break;
		case '6':
			cout<<"\n\n Teacher Birth Date : "<<dob.d<<"\\"<<dob.m;
			cout<<"\n Teacher Modified Birth Date : \n"<<setw(20)<<"Date : ";
			cin>>dob.d;
			cout<<""<<setw(20)<<"Month : ";
			cin>>dob.m;
			//dob.d=Md;
			//dob.m=Mm;
			break;
		default :
			cout<<"\n\n Incorrect Input ";
		}
}
void modifytime(char ch)
{
	display();
	int i,j,k,m,z,n;
	cout<<"\t\t\t\tMODIFY";
	cout<<"\nTeacher Code : "<<code<<"\tTeacher Name : "<<name;
	switch (ch){
		case '1':
			for (i=0;i<6;i++)
			{
				for(j=0;j<8;j++)
				{

					again1:
					if(i==2 && j==7)
					{
						arr[i][j]=23;
						sub[i][j]=21;
						cout<<"\n\n "<<j+1<<" period on ";day(i);cout<<" is CCA Period ";
						goto last1;
					}
					classside(0);
					cout<<"\nEnter Class where to attend "<<j+1<<" Period on ";
					day(i);
					cout<<" : ";
					cin>>m;
					if(m>22 || m<0)
						goto again1;
					if(m!=0);
						cout<<"\t\t\t\t\t"<<classcode[m];
					arr[i][j]=m;
					back1:
					//subjectside();
					//posx=wherex();posy=wherey();
					subjectside();
					//gotoxy(posx,posy);
					if(arr[i][j]==0)
					{
						m=0;cout<<endl;
					}
					else
					{
						cout<<"\nEnter Subject Code : ";
						cin>>m;
						if(m>20 || m<1)
							goto back1;
					}
					cout<<"\t\t\t\t\t"<<subcode[m];
					sub[i][j]=m;
					last1:
				}
			}
			break;
		case '2':
			top2:
			cout<<"\nEnter Day For Which You want to Edit Timetable : \n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n\t\t";
			cin>>n;
			if(n<1 || n>6)
			{
				cout<<"\n Incorrect Day Entered\n\t\tPlz Re Enter ";
				getch();
				goto top2;
			}
			n=n-1;
			char day[][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
			cout<<"\n\t\t\tPrevious Time Table For "<<day[n]<<"\n\n";
			cout<<setw(10)<<"1st"<<setw(8)<<"2nd"<<setw(8)<<"3rd"<<setw(8)<<"4th"<<setw(8)<<"5th"<<setw(8)<<"6th"<<setw(8)<<"7th"<<setw(8)<<"8th"<<endl;
			cout<<""<<setw(10)<<classshort[arr[n][0]]<<setw(8)<<classshort[(arr[n][1])]<<setw(8)<<classshort[(arr[n][2])]<<setw(8)<<classshort[arr[n][3]]<<setw(8)<<classshort[arr[n][4]]<<setw(8)<<classshort[arr[n][5]]<<setw(8)<<classshort[arr[n][6]]<<setw(8)<<classshort[arr[n][7]]<<endl;
			cout<<setw(10)<<subshort[sub[n][0]]<<setw(8)<<subshort[sub[n][1]]<<setw(8)<<subshort[sub[n][2]]<<setw(8)<<subshort[sub[n][3]]<<setw(8)<<subshort[sub[n][4]]<<setw(8)<<subshort[sub[n][5]]<<setw(8)<<subshort[sub[n][6]]<<setw(8)<<subshort[sub[n][7]];
			getch();
			cout<<"\n\n Enter Modified Data : ";
			i=n;
				for(j=0;j<8;j++)
				{

					again2:
					if(i==2 && j==7)
					{
						arr[i][j]=23;
						sub[i][j]=21;
						cout<<"\n\n "<<j+1<<" period on ";day[i];cout<<" is CCA Period ";
						goto last2;
					}
					classside(0);
					cout<<"\nEnter Class where to attend "<<j+1<<" Period : ";
					cin>>m;
					if(m>22 || m<0)
						goto again2;
					if(m!=0);
						cout<<"\t\t\t\t\t"<<classcode[m];
					arr[i][j]=m;
					back2:
					//subjectside();
					//posx=wherex();posy=wherey();
					subjectside();
					//gotoxy(posx,posy);
					if(arr[i][j]==0)
					{
						m=0;cout<<endl;
					}
					else
					{
						cout<<"\nEnter Subject Code : ";
						cin>>m;
						if(m>20 || m<1)
							goto back2;
					}
					cout<<"\t\t\t\t\t"<<subcode[m];
					sub[i][j]=m;
					last2:
				}
			break;
		case '3':
			top3:
			cout<<"\nEnter Period For Which You want to Edit Timetable : \n1.Ist Period\n2.IInd Period\n3.IIIrd Period\n4.IVth Period\n5.Vth Period\n6.VIth Period\n7.VIIth Period\n8. VIIIth Period\t\t";
			cin>>n;
			if(n<1 || n>8)
			{
				cout<<"\n Incorrect Period Entered\n\t\tPlz Re Enter ";
				getch();
				goto top3;
			}
			k=n-1;
			cout<<"\n\n"<<setw(16)<<"Mon"<<setw(8)<<"Tue"<<setw(8)<<"Wed"<<setw(8)<<"Thu"<<setw(8)<<"Fri"<<setw(8)<<"Sat";
			cout<<"\n\n "<<n<<" Period"<<setw(7)<<classshort[arr[0][k]]<<setw(8)<<classshort[arr[1][k]]<<setw(8)<<classshort[arr[2][k]]<<setw(8)<<classshort[arr[3][k]]<<setw(8)<<classshort[arr[4][k]]<<setw(8)<<classshort[arr[5][k]]<<setw(8);
			cout<<"\n"<<setw(16)<<subshort[sub[0][k]]<<setw(8)<<subshort[sub[1][k]]<<setw(8)<<subshort[sub[2][k]]<<setw(8)<<subshort[sub[3][k]]<<setw(8)<<subshort[sub[4][k]]<<setw(8)<<subshort[sub[5][k]]<<setw(8);
			getch();
			back3:
			cout<<"\n\n Modify Time Table : ";
			classside(0);
			cout<<"\nEnter Class where to attend "<<n<<" Period : ";
			cin>>m;
			if(m<0 || m>22)
				goto back3;
			if(m!=0)
				cout<<"\t\t\t\t\t"<<classcode[m];
			again3:
			subjectside();
			if(m!=0)
			{
				cout<<"\nEnter Subject Code : ";
				cin>>z;
				if(z>20 || z<1)
					goto again3;
			}
			else
				z=m;
			cout<<"\t\t\t\t\t"<<subcode[z];
			for (i=0;i<6;i++)
			{
				if(i==2 && k==7);
				else
				{
					arr[i][k]=m;
					sub[i][k]=z;
				}
			}
			cout<<"\n\n Modified Time Table : ";
		       /*	cout<<"\n\n"<<setw(10)<<"Mon"<<setw(8)<<"Tue"<<setw(8)<<"Wed"<<setw(8)<<"Thu"<<setw(8)<<"Fri"<<setw(8)<<"Sat";
			cout<<"\n\n"<<setw(4)<<n<<" Period"<<arr[0][k]<<setw(8)<<arr[1][k]<<setw(8)<<arr[2][k]<<setw(8)<<arr[3][k]<<setw(8)<<arr[4][k]<<setw(8)<<arr[5][k]<<setw(8)<<arr[6][k]<<setw(8)<<arr[7][k];
			cout<<"\n"<<setw(10)<<sub[0][k]<<setw(8)<<sub[1][k]<<setw(8)<<sub[2][k]<<setw(8)<<sub[3][k]<<setw(8)<<sub[4][k]<<setw(8)<<sub[5][k]<<setw(8)<<sub[6][k]<<setw(8)<<sub[7][k];*/
			cout<<"\n\n"<<setw(16)<<"Mon"<<setw(8)<<"Tue"<<setw(8)<<"Wed"<<setw(8)<<"Thu"<<setw(8)<<"Fri"<<setw(8)<<"Sat";
			cout<<"\n\n "<<n<<" Period"<<setw(7)<<classshort[arr[0][k]]<<setw(8)<<classshort[arr[1][k]]<<setw(8)<<classshort[arr[2][k]]<<setw(8)<<classshort[arr[3][k]]<<setw(8)<<classshort[arr[4][k]]<<setw(8)<<classshort[arr[5][k]];
			cout<<"\n"<<setw(16)<<subshort[sub[0][k]]<<setw(8)<<subshort[sub[1][k]]<<setw(8)<<subshort[sub[2][k]]<<setw(8)<<subshort[sub[3][k]]<<setw(8)<<subshort[sub[4][k]]<<setw(8)<<subshort[sub[5][k]]<<setw(8);
			break;
		case '4':
			top:
			cout<<"\nEnter Day For Which You want to Edit Timetable : \n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n\t\t";
			cin>>n;
			if(n<1 || n>6)
			{
				cout<<"\n Incorrect Day Entered\n\t\tPlz Re Enter ";
				getch();
				goto top;
			}
			n=n-1;
			back4:
			cout<<"\nEnter Period For Which You want to Edit Timetable : \n1.Ist Period\n2.IInd Period\n3.IIIrd Period\n4.IVth Period\n5.Vth Period\n6.VIth Period\n7.VIIth Period\n8. VIIIth Period\t\t";
			cin>>k;
			if(k<1 || k>8)
			{
				cout<<"\n Incorrect Period Entered\n\t\tPlz Re Enter ";
				getch();
				goto back4;
			}
			k=k-1;
			if(n==2 && k==7)
				cout<<"CCA Period Can Not Be Modified ";
			else
			{
			char day[][20]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
			cout<<"\n"<<k+1<<" Period On ";
			cout<<day[n];
			cout<<" is in class "<<classcode[arr[n][k]]<<", of "<<subcode[sub[n][k]];
			getch();
			again4:
			cout<<"\n\n Modify Time Table : ";
			classside(0);
			cout<<"\nEnter Class where to attend "<<k+1<<" Period : ";
			int m,z;
			cin>>m;
			if(m<0 || m>22)
				goto again4;
			if(m!=0)
				cout<<"\t\t\t\t\t"<<classcode[m];
			back:
			subjectside();
			if(m!=0)
			{
				cout<<"\nEnter Subject Code : ";
				cin>>z;
				if(z>20 || z<1)
					goto back;
			}
			else
				z=m;
			cout<<"\t\t\t\t\t"<<subcode[z];
				arr[n][k]=m;
				sub[n][k]=z;
			cout<<"\n\nNow Onwards "<<k+1<<" period "<<"on "<<day[n]<<" would be in "<<classcode[arr[n][k]]<<" of "<<subcode[sub[n][k]];
			}
			cout<<"\n Want To Edit More ";
			char moh;
			cin>>moh;
			if(moh=='y')
				goto top;
			break;
		default:
			cout<<"\n\n Invalid Input ";
	}

}
void showtimespec(int n)
{
	char subcode [][20]={" Free Period "," Physics "," Chemistry "," Biology "," Computer "," Hindi "," English "," Buisness Studies "," Accounts "," Economics "," Mathematics "," Social Science "," Sanskrit "," Science "," Games "," Arts "," Music "," General Studies "," SUPW "," Environment "," Library","CCA"};
	char subshort[][20]={"Fr","Ph","Ch","Bi","CS","Hi","En","BS","Ac","Ec","Ma","SST"," Sans"," Sci","Ga","Ar","Mu","GS","WE"," Env","Lb","CCA"};
	char classcode[][20]={" "," Class I "," Class II "," Class III "," Class IV "," Class V "," Class VI "," Class VII "," Class VIII "," Class IX "," Class X "," Class XI Sc "," Class XII Sc "," Class XI Com "," Class XII Com "," Class XI Hin "," Class XII Hin "," Class XI CS "," Class XII CS "," Class XI Math "," Class XII Math "," Class XI Bio "," Class XII Bio "," All Class "};
	char classshort[][10]={" ","1","2","3","4","5","6","7","8","9","10"," 11S"," 12S"," 11C"," 12C"," 11H"," 12H","11Cs","12Cs"," 11M"," 12M"," 11B"," 12B"," All"};
	int i,j,k,l,o,n1,n2,n3,n4,check;
	int x=0,y;
	table t;
	if(n==11)
		{n1=15;n2=17;n3=19;n4=21;}
	if(n==12)
		{n1=16;n2=18;n3=20;n4=22;}
	if(n==13)
		{n1=15;n2=19;n3=n4=-1;}
	if(n==14)
		{n1=16;n2=20;n3=n4=-1;}
//	ifstream f("teacher.dat",ios::binary,ios::in);
	//cout<<"Teacher Name : "<<name<<setw(20)<<"Post : "<<post<<"\n\n";
	cout<<setw(10)<<"1st"<<setw(9)<<"2nd"<<setw(9)<<"3rd"<<setw(9)<<"4th"<<setw(9)<<"5th"<<setw(9)<<"6th"<<setw(9)<<"7th"<<setw(9)<<"8th";
	char z[]={"MonTueWedThuFriSat"};
	for(k=0;k<6;k++)
	{
		o=k;
		cout<<"\n\n"<<setw(10);
		for(i=o*3,o=i;i<o+3;i++)
			cout<<z[i]<<setw(7);
		for(j=0;j<8;j++)
		{
			ifstream f("teacher.dat",ios::binary);
			while(f)
			{
				f.read((char*)&t,sizeof(t));
				if(t.arr[k][j]==n || t.arr[k][j]==n1 || t.arr[k][j]==n2 || t.arr[k][j]==n3 || t.arr[k][j]==n4 )
					x++;
			}
			f.close();
			if(j!=0)
				cout<<""<<setw((4-x)*3);
			ifstream m("teacher.dat",ios::binary);
			while(m)
			{
				m.read((char*)&t,sizeof(t));
				if(t.arr[k][j]==n || t.arr[k][j]==n1 || t.arr[k][j]==n2 || t.arr[k][j]==n3 || t.arr[k][j]==n4 )
					{
					cout<<subshort[(t.sub[k][j])]<<"|";
					/*x=wherex();y=wherey();
					gotoxy(x-8,y);*/
					}
				if(t.arr[k][j]==23 && check==0)
					cout<<"\b\b"<<subshort[(t.sub[k][j])];
				check++;
			}
			cout<<"\b";
		     //	gotoxy(x+4,y);
		     //cout<<""<<setw((3-x)*4);
			m.close();
			x=0;check=0;y=0;
		}
		cout<<" ";
		cout<<"\n"<<setw(10);
		for(j=0;j<8;j++)
		{
			ifstream f("teacher.dat",ios::binary);
			while(f)
			{
				f.read((char*)&t,sizeof(t));
				if(t.arr[k][j]==n || t.arr[k][j]==n1 || t.arr[k][j]==n2 || t.arr[k][j]==n3 || t.arr[k][j]==n4 )
				{
					if(t.code==15)
						y++;
					x++;
				}
			}
			f.close();
			if(j!=0 && y==0)
				cout<<""<<setw((4-x)*3);
			if(y!=0 && x!=1)
				cout<<""<<setw((4-x)*3-1);
			if(x==1 && y!=0)
				cout<<""<<setw((4-x)*3);
			ifstream m("teacher.dat",ios::binary);
			while(m)
			{
				m.read((char*)&t,sizeof(t));
				if(t.arr[k][j]==n || t.arr[k][j]==n1 || t.arr[k][j]==n2 || t.arr[k][j]==n3 || t.arr[k][j]==n4 )
					{
					cout<<t.abb<<"|";
					/*x=wherex();y=wherey();
					gotoxy(x-8,y);*/
					}
				check++;
			}
			cout<<"\b";
		     //	gotoxy(x+4,y);
		     //cout<<""<<setw((3-x)*4);
			m.close();
			x=0;check=0;y=0;
		}
		cout<<" ";
		/*for(j=0;j<8;j++)
		{
			ifstream f("teacher.dat",ios::binary);
			for(int z=0;z<filesize()-2;z++)
			{
				f.read((char*)&t,sizeof(t));
				if(t.arr[k][j]==n)
					cout<<t.abb<<"\\";
			}
			cout<<"\b";
			cout<<""<<setw(8);
			f.close();
		} */
	}
}
void namebycode(int n)
{
	ifstream f("teacher.dat",ios::binary);
	table t;
	int i;
	if(n==0)
		cout<<"Self Study";
	while(f)
	{
		if(t.code==n)
		cout<<t.name;
		f.read((char*)&t,sizeof(t));
	}
}
void whoisfree(int day,int per)
{
	table t;
	ifstream f("teacher.dat",ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		//f.read((char*)&t,sizeof(t));
		if(t.state[per]==0)
			cout<<"\n"<<t.code<<". "<<t.name;
	}
	f.close();
}
void changestate()
{
	int n,i,z=0;
	table t;
	n=dayofweek();
	fstream f("teacher.dat",ios::binary|ios::in|ios::out);
	while(f.read((char*)&t,sizeof(t)))
	{
	       //	f.read((char*)&t,sizeof(t));
		if(t.code==1)
			for(i=0;i<8;i++)
				t.state[i]=-1;
		else
			for(i=0;i<8;i++)
				t.state[i]=t.arr[n][i];
		f.seekg(z*(sizeof(t)),ios::beg);
		f.write((char*)&t,sizeof(t));
		z++;
	}
	f.close();
}
void arrangment()
{
	display();
	int n,j,ass;
	arrange a;
	n=weekday();
	cout<<"\nToday's Period Of "<<name<<" :- \n\n";
	cout<<"  "<<setw(2)<<"1st"<<setw(8)<<"2nd"<<setw(8)<<"3rd"<<setw(8)<<"4th"<<setw(8)<<"5th"<<setw(8)<<"6th"<<setw(8)<<"7th"<<setw(8)<<"8th"<<endl;
	cout<<"  "<<setw(2)<<classshort[arr[n][0]]<<setw(8)<<classshort[(arr[n][1])]<<setw(8)<<classshort[(arr[n][2])]<<setw(8)<<classshort[arr[n][3]]<<setw(8)<<classshort[arr[n][4]]<<setw(8)<<classshort[arr[n][5]]<<setw(8)<<classshort[arr[n][6]]<<setw(8)<<classshort[arr[n][7]]<<endl;
	cout<<subshort[sub[n][0]]<<setw(8)<<subshort[sub[n][1]]<<setw(8)<<subshort[sub[n][2]]<<setw(8)<<subshort[sub[n][3]]<<setw(8)<<subshort[sub[n][4]]<<setw(8)<<subshort[sub[n][5]]<<setw(8)<<subshort[sub[n][6]]<<setw(8)<<subshort[sub[n][7]];
	getch();
	cout<<endl;
	for(j=0;j<8;j++)
	{
		if(arr[n][j]!=0 && state[j]==-2)
		{
			back:
			cout<<"\nAssign Arrangment For "<<j+1<<" Period in class "<<classshort[arr[n][j]]<<" : "<<endl;
			freeside(j);
			cout<<"Enter Teacher Code : ";
			cin>>ass;
			if(ass!=0)
			{
				if(checkstate(ass,j)==1)
				{
					cout<<"\t\t\t";
					namebycode(ass);
					statechange(ass,j);
				}
				else
				{
					cout<<"\t\t\tInvalid Code ";
					goto back;
				}

			}
			else
				cout<<"\t\t\tSelf Study";
			a.notearr(code,j,arr[n][j],sub[n][j],ass);
		}
	}
}
void autoarrangement ()
{
	int n,j,ass;
	arrange a;
	n=weekday();
	int list1[]={19,20,21,22,23,24,25,0};
	int list2[]={11,12,13,14,15,16,17,18,0};
	int list3[]={2,3,4,5,6,7,8,9,11,12,13,15,16,17,0};
	int list4[]={2,3,5,6,7,8,9,15,16,18,0};
	int list5[]={3,4,5,9,15,16,18,0};
	for(j=0;j<8;j++)
	{
		int t[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},var=0,as;
		if(arr[n][j]!=0 && state[j]==-2)
		{
			back:
			/*cout<<"\nAssign Arrangment For "<<j+1<<" Period in class "<<classshort[arr[n][j]]<<" : "<<endl;
			freeside(j);
			cout<<"Enter Teacher Code : ";
			cin>>ass;*/
			for (int i=0;i<25;i++)
			{
				if(arr[n][j]<=5)
					as=list1[i];
				else if(arr[n][j]<=8)
					as=list2[i];
				else if(arr[n][j]<=10)
					as=list3[i];
				else if(arr[n][j]==11||arr[n][j]==12||arr[n][j]==12||arr[n][j]==12||arr[n][j]==15||arr[n][j]==16||arr[n][j]==17||arr[n][j]==18||arr[n][j]==19||arr[n][j]==20||arr[n][j]==21||arr[n][j]==22)
					as=list4[i];
				else
					as=list5[i];
				if(as==0)
				       break;
				else
					if(checkstate(as,j)==1)
					{
					   t[var++]=as;//statechange(ass,j);
					}
			}
			if(var==0)
				ass=0;
			else
			{
				randomize();
				i=random(j);
				ass=t[i];
			}
			a.notearr(code,j,arr[n][j],sub[n][j],ass);
		}
	}
}

};


