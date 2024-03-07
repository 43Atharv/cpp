//function
//4. withreturn type with prametre
#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<add(a,b);
	return 0;
}
int add(int a,int b)
{
	
	return a+b;
}
