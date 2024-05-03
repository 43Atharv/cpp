#include<iostream>
using namespace std;
class a
{
	public:
		int a1,b1;
		void get()
		{
			cout<<"enter the value of a and b"<<endl;
			cin>>a1>>b1;
		}
};
class b:public a
{
	public:
		void add()
		{
			cout<<"addition is"<<a1+b1;
		}
};

int main()
{
	b b1;
	b1.get();
	b1.add();
	return 0;
}
