#include<iostream>
using namespace std;
struct stud
{
	int id;
	string name;
	stud(int i1,string n1)
	{
		id=i1;
		name=n1;
	}
	void disp()
	{
		cout<<id<<"\t"<<name;
	}
};

int main()
{
	int i1;
	string n1;
	cout<<"enter the value of id and n1"<<endl;
	cin>>i1>>n1;
	stud s1=stud(i1,n1);
	s1.disp();
	return 0;
}
