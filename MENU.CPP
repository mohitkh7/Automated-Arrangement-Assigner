void menu()
{
	back:
	display();
	cout<<"Menu:\n\n1.Admin Login\n2.Show Arrangment\n3.Show Time Table\n4.Show Codes\n5.Backup Or Retrieve Data\n6.Reset Arrangment\n7.Exit\n";
	int i;
	i=getch();
	if(i==49)
		admin();
	if(i==50)
		viewarr();
	if(i==51)
		menutime();
	if(i==52)
		menucode();
	if(i==53)
		backup();
	if(i==54)
		reset();
	if(i==55)
		exit(0);
	if(i<49 || i>55)
	{
		cout<<"\nWrong Option "<<(char)2;
		sound(200,400,40);
	}
	getch();
	goto back;
}