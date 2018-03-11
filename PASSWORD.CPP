// password
void encrypt(char s[]);
void decrypt(char s[]);
void enter(char str[20])
{
	char ch;
	int i;
	for(i=0;;i++)
	{
		ch=getch();
		if(ch!='\r')
			{
				str[i]=ch;
				cout<<"*";
				sound(5000,5200,30);
			}
		else
			goto out;
	}
	out:
	str[i]='\0';
}
void change()
{
	ofstream r("password.dat",ios::binary);
	char s[20],re[20];
	retry:
	display();
	cout<<"\n Enter New Password ";
	enter(s);
	cout<<"\n\n Re Confirm Password ";
	enter(re);
	if((strcmp(s,re))==0)
	{
		encrypt(s);
		r<<s;
		cout<<"\n\n Password Succesfully Changed ";
		sound(1000,3000,10);
	}
	else
	{
		cout<<"\nPassword MisMatch\n\tPlz Retry ";
		sound(200,400,30);
		getch();
		goto retry;
	}
	r.close();
}
void password()
{
	char str[20],pass[20];
	int i,k=0;
	back:
	display();
	cout<<"\nEnter Password ";
	enter(str);
	ifstream f("password.dat",ios::binary);
	f>>pass;
	decrypt(pass);
	i=strcmp(pass,str);
	if(i==0)
		cout<<"\n\n\n Succesful Login !!";
	else
		{
			cout<<"\nfailed....Retry"<<(char)2;
			sound(200,400,60);
			getch();
			k++;
			if(k>2)
				menu();
			goto back;
		}
	sound(0,2500,20);
	f.close();
}
void encrypt(char s[])
{
	int i,j;
	i=strlen(s);
	for(j=0;j<i;j++)
	{
		s[j]=int(s[j])+50;
	}
	s[++j]='\0';
}
void decrypt(char s[])
{
	int i,j;
	i=strlen(s);
	for(j=0;j<i;j++)
	{
		s[j]=int(s[j])-50;
	}
	s[++j]='\0';
}
