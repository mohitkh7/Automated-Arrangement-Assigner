// admin
void admin()
{
	table time;
	display();
	//change();
	password();
	top:
	display();
	cout<<"Menu :\n1. Add Teacher Info\n2. Modify Teacher's Data \n3. Delete a Teacher From Data Base\n4. Register Absent Teacher \n5. Assign Arrangement\n6. Change Admin Password\n7. Back To Main Menu\n";
	int i;
	i=getch();
	switch(i)
	{
		case 49:
			//add();
			cout<<"\nContact Program Developer ";
			break;
		case 50:
			modify();
			break;
		case 51:
			//del();
			cout<<"\n Contact Program Developer ";
			break;
		case 52:
			arrangment();
			break;
		case 53:
			assignarr();
			break;
		case 54:
			change();
			break;
		case 55:
			menu();
			break;
		default:
			cout<<"\nWrong Option "<<(char)2;
			sound(200,400,30);
	}
	getch();
	goto top;
}