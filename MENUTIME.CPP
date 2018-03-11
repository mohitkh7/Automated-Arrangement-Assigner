// user menu
void menutime()
{
	table time;
	back:
	display();
	cout<<"Show Time Table :\n\n1.Class Wise\n2.Teacher Wise\n3.Day Wise\n4.Back To Main Menu\n";
	int i;
	i=getch();
	switch (i)
	{
		case 50:
			showtimet();
			break;
		case 49:
			time.showtimec();
			break;
		case 51:
			showtimed();
			break;
		case 52:
			menu();
			break;
		default:
			cout<<"\nWrong Option "<<(char)2;
	}
	if(i!=51)
		getch();
	goto back;
}