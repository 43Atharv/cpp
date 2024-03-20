#include<iostream>
using namespace std;
inline int cub(int t)
{
	return t*t*t;
}

int main()
{
	int a;
	cout<<"enter the value of A"<<endl;
	cin>>a;
	cout<<"spure of no is"<<cub(a);
	return 0;
}
