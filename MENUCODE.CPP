// menu to show code
void menucode()
{
	back:
	display();
	cout<<"Show Codes :\n\n1.Class Wise\n2.Subject Wise\n3.Teacher Wise\n4.Back To Main Menu\n";
	int i;
	i=getch();
	switch (i)
	{
		case 49:
			showclass();
			break;
		case 50:
			showsub();
			break;
		case 51:
			showteacher();
			break;
		case 52:
			menu();
			break;
		default:
			cout<<"\nWrong Option "<<(char)2;
	}
	getch();
	goto back;
}