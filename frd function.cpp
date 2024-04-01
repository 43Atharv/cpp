#include<iostream>
using namespace std;
class a
{
	public:
		int x=10;
		void setx(int i)
		{
			x=1;
		}
friend class b;
};
class b
{
	public:
		void disp(a&a1)
		{
			cout<<a1.x;
		}
};

int main()
{
	a a1;
	b b1;
	b1.disp(a1);
	return 0;
}
