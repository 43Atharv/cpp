//if else if
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value "<<endl;
	cin>>n;
	if(n<0||n>100)
	{
		cout<<"wrong number"<<endl;
	}
	else if (n>=0&&n<50)
	{
		cout<<"fail"<<endl;
	}
	else if (n>50 && n<60)
	{
		cout<<"grade is D"<<endl;
	}
	else if (n>60&&n<70)
	{
		cout<<"grade is C"<<endl;
	}
	else if (n>70&&n<80)
	{
		cout<<"grade is B"<<endl;
	}
	else if (n>80&&n<90)
	{
		cout<<"grade is A"<<endl;
	}
	else if (n>90&&n<100)
	{
		cout<<"grade is AA"<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}

	return 0;
}
