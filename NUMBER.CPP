/*class Number
{
	int teacherNo;
	public :
		void SetNo();
		int ReadNo();
};
void Number::SetNo()
{
	ifstream f("number.dat",ios::binary);
	Number No;
	f.read((char*)&No,sizeof(No));
	No.teacherNo++;
	f.close();
	ofstream m("number.dat",ios::binary);
	m.write((char*)&No,sizeof(No));
	m.close();
}
int Number::ReadNo()
{
	ifstream f("number.dat",ios::binary);
	Number No;
	f.read((char*)&No,sizeof(No));
	return ++No.teacherNo;
} */
class Number
{
	int teacherNo;
	public :
		void SetNo();
		int ReadNo();
};
void SetNo()
{
	ifstream f("c:\time\data\number.txt",ios::in);
	int teacherNo;
	f>>teacherNo;
	teacherNo++;
	f.close();
	ofstream m("c:\time\data\number.txt",ios::out);
	m<<teacherNo;
	m.close();
}
void SetNo(int teacherNo)
{
	ofstream f("number.txt",ios::out);
	f<<teacherNo;
	f.close();
}
int ReadNo()
{
	ifstream f("number.txt",ios::in);
	int teacherNo;
	f>>teacherNo;
	return ++teacherNo;
}
