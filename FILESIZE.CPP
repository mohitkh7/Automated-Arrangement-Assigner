//this function is to tell the no of teacher data in file teacher.dat;
int filesize()
{
	ifstream f("teacher.dat",ios::binary);
	table t;
	int i,j,k=0;
	while(f)
	{
		f.read((char*)&t,sizeof(t));
		k++;
	}
	return --k;
}