#include<iostream>
using namespace std;
class total
{
	public:
		int a,b;
		void input();
		void add();
};
void total::input()
{
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
}
void total::add()
{
	cout<<a+b;
}

int main()
{
	total s1;
	s1.input();
	s1.add();
	return 0;
}
