#include<iostream>
using namespace std;
class sum
{
	public:
		int a,b,c;
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
		int getc()
		{
			return c;
		}
		void seta(int a1)
		{
			a=a1
		}
		void setb(int b1)
		{
			b=b1
		}
		void setc(int c1)
		{
			c=c1
		}
}

int main()
{
	int a1,b1,c1;
	cout<<"enter the a,b,c value";
	cin>>a1>>b1>>c1;
	s1.geta(a1);
	s1.getb(b1);
	s1.getc(c1);
	cout<<s1.geta();
	cout<<s1.getb();
	cout<<s1.getc();
	return 0;
}
