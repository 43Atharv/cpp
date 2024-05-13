//parameter
#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		stud(int a1,int b1)
		{
			a=a1;
			b=b1;
			
		}
		void disp()
		{
			cout<<"addition is"<<a+b;
		}
};
int main()
{
	int a,b;
	cout<<"enter the value of a and b";
	cin>>a>>b;
	stud s1=stud(a,b);
	s1.disp();
	return 0;
}
