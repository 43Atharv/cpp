#include<iostream>
using namespace std;
class employee
{
	public:
	int id,salary;
	string name;
	static float inter;
	employee(int i1,string n1,int s1)
	{
		this->id=i1;
		this->name=n1;
		this->salary=s1;
	}
	void disp()
	{
		cout<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<inter<<endl;
	}
};
float employee::inter=9.5;
int main()
{
    string n1;
	//string bn;
	//string at;
    int b;
    int sal;
	cout<<"enter the name of account holder"<<endl;
	cin>>n1;
	/*cout<<"enter the bank name"<<endl;
	cin>>bn;
	cout<<"enter the account type"<<endl;
	cin>>at;*/
	cout<<"enter the id"<<endl;
	cin>>b;
	cout<<"enter the sal";
	cin>>sal;
	employee e1=employee(b,n1,sal);
	e1.disp();
	return 0;
}
