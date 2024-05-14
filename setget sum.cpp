#include<iostream>
using namespace std;
class add
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
			a=a1;
		}
		void setb(int b1)
		{
			b=b1;
		}
		void setc(int c1)
		{
			c=c1;
		}
};

int main()
{
	int a1,b1,c1;
	cout<<"enter the a,b,c value"<<endl;
	cin>>a1>>b1>>c1;
	add s1;
	s1.seta(a1);
	s1.setb(b1);
	s1.setc(c1);
	cout<<s1.geta()+s1.getb()+s1.getc();
	
	return 0;
}
