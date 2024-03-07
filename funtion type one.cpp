//funtion type 1 
//without retruntype without parameter
#include<iostream>
using namespace std;
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<a+b;
}
