#include<iostream>
using namespace std;
struct stud
{
	int id;
	string name;
}s1;
int main()
{
	s1.id=101;
	s1.name="abc";
	cout<<s1.id;
	cout<<s1.name;
	return 0;
}
