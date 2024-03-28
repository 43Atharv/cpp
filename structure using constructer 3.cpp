#include<iostream>
using namespace std;
struct worker
{
	int wno;
	string name;
	worker(int w1,string n1)
	{
		wno=w1;
		name=n1;
	}
	void disp()
	{
		cout<<wno<<"\t"<<name;
	}
};

int main()
{
	int w1;
	string n1;
	cout<<"enter the value of worker no and name"<<endl;
	cin>>w1>>n1;
	worker s1=worker(w1,n1);
	s1.disp();
	
	return 0;
}
