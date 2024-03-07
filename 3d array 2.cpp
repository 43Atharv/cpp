#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int arr[2][2][3];
	for(k=0;k<2;k++){
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>arr[k][i][j];
			}
		}
	}
	cout<<"array element are"<<endl;
	for(k=0;k<2;k++)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<arr[k][i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	
	return 0;
}
