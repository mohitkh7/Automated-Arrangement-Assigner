// delete a teacher
void del()
{
	ifstream f("teacher.dat",ios::binary);
	ofstream j("temp.dat",ios::binary);
	int n,i,k=0;
	table s;
	display();
	cout<<"\n\nEnter Teacher Code To be Deleted ";
	showteachercode();
	cin>>n;
	clearteachercode();
	while(f.read((char*)&s,sizeof(s)))
	{
		if(s.code!=n)
				j.write((char*)&s,sizeof(s));
		else
			k=1;
	}
	if(k==0)
		cout<<"\nTeacher Code Does Not Exist ";
	else
		cout<<"\nTeacher Code "<<n<<" deleted ";
	f.close();
	j.close();
	remove("teacher.dat");
	rename("temp.dat","teacher.dat");
}