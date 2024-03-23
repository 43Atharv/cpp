//claass CREATE
#include<iostream>
using namespace std;
class stud
	{
		public:
			int a,b;
			void input()
			{
				cout<<"enter the value a and b"<<endl;
				cin>>a>>b;
			}
			void add()
			{
				cout<<"addition is"<<a+b;
			}
	};
int main()
{
	stud s1;
	s1.input();
	s1.add();
	return 0;
}
