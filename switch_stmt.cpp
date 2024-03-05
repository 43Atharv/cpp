//switch stmt
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	switch(a)
	{
		case 'a':
			cout<<"char is A";
			break;
		case 'b':
		     cout<<"char is B";
			 break;
		case 'c':
		     cout<<"char is C";
			 break;
			 default:
			 cout<<"invalid";	 	
	}
	return 0;
}
