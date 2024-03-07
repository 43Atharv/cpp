//funtion type 3
//with return type and with parameter
#include<iostream>
using namespace std;
int add();
int main()
{
	cout<<add();
	return 0;
}
int add()
{

int a,b;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
return a+b;
}
