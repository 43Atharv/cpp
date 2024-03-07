//call by value
#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a ,b;
	cout<<"enter value of a and b"<<endl;
	cin>>a>>b;
	swap(a,b);
	return 0;
}
void swap( int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"after swaping a="<<a<<endl;
	
}

