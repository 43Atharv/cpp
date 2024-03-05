#include<iostream>
#include<iomanip>
using namespace std;

class Movie
{
	string name;
	float at_price;
	float ct_price;
	int adult;
	int child;
	
	
	
	
	public:
	      void getData()
	      {
	      	cout<<"movie name:";
	      	cin>>name;
	      	
	      	cout<<"enter the adult member:"<<endl;
	      	cin>>adult;
	      		
	      	cout<<"enter the child member:"<<endl;
	      	cin>>child;
		  }
          
          	cout<<"movie name:"<<name<<endl;
          	
          int ticket()
          {
          	cout<<"total amount for adult"<<adult*at_price<<endl;
          	
          	cout<<"total amonut for child"<<child*ct_price<<endl;
          	
          }
          
		  
};

int main()
{
	Movie m;
    m.getData();
    m.ticket();
}
	
