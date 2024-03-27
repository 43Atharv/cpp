#include<iostream>
using namespace std;
class stud
{
	public:
		int id;
		string name;
		void get()
		
		{
			cout<<"enter the id and name";
			cin>>id>>name;
		}
		void put()
		{
			cout<<"id="<<id<<"\t name="<<name<<endl;
		}
};

int main()
{
	stud s1[5];
	cout<<"enter the detials of 5 students";
	for(int i=0;i<5;i++)
	{
		s1[1].get();
	}
	cout<<"details of 5 students \n"<<endl;
	for(int i=0;i<5;i++)
	{
		s1[i].put();
	}
	return 0;
}
