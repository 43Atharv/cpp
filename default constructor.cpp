#include<iostream>
using namespace std;
class stud
{
	public:
		int a,b;
		stud()
		{
			cout<<"enter the value of a and b"<<endl;
			cin>>a>>b;
		}
		void disp()
		{
			cout>>a>>"\t">>b;
		}
		
};

int main()
{
	stud s1=stud();
	s1.disp();
	return 0;
}
