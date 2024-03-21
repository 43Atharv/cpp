#include<iostream>
using namespace std;
class abc
{
	public:
		abc()
		{
			cout<<"constructor called";
		}
		~abc()
		{
			cout<<"distructor";
		}
};

int main()
{
	abc a1;
	return 0;
}
