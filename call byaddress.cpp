//call by address
#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b;
	cout<<"enter the value of a and b";
	cin>>a>>b;
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	cout<<"afer swaping a="<<*a<<"\tb="<<*b<<endl;
}
