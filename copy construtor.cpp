#include<iostream>
using namespace std;
class abc
{
	public:
		int a,b;
		abc(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		aba(abc&a1)
		{
			a=a1.a;
			b=a1.b;
		}
		void disp()
		{
			cout<<a<<"\t"<<b;
		}
};
int main()
{
	abc a1(10,20);
	abc a2(a1);
	a2.disp();
	return 0;
}
