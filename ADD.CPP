// add new Teacher
void add()
{
	display();
	table t;
	ofstream f(("teacher.dat"),ios::app|ios::binary);
	t.write();
	f.write((char*)&t,sizeof(t));
	f.close();
}