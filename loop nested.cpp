//nest
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the element a"<<endl;
	cin>>a;
	if(a<10)
	{
		if(a<5)
		{
			cout<<"A is between 0 to 5"<<endl;
			
		}
		else
		{
		   cout<<"A is between 5 to 10"<<endl;
	      
		}
	}
	else
	{
		if(a<20)
		{
			cout<<"A is between 11 to 20"<<endl;
		}
		else
		{
			cout<<"A is greter than 20"<<endl;
		}
	}
	
	
	return 0;
}
