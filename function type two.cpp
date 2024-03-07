//function type 2
//without returntype with parameter
#include<iostream>
using namespace std;
void add(int,int);
int main()
{
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	cout<<a+b;
}
