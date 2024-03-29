#include<iostream>
using namespace std;
class stud
{
	public:
		int a;
		int get()
		{
			return a;
		}
		void seta(int a1)
		{
			a=a1;
		}
};

int main()

{
	int a1;
	cout<<"enter the value of  a1"<<endl;
	cin>>a1;
	stud s1;
	s1.seta(a1);
	cout<<s1.get();
	return 0;
}
