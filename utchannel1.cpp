#include<iostream>
#include<string>
#include<list>
using namespace std;
class Youtube
{
    string name;
    int subscribe;
	public:
	Youtube(string nm,int sub)
	{
		name=nm;
		subscribe=sub;
	}
};
class Mycollection
{
	public:
		list<Youtube> l1;
        operator+=(Youtube& channel1){
        	l1.push_back(channel1);
		} 

		
 };

int main()
{
	Youtube  yc1("dkte",1200);
	Youtube  yc2("cse",1000);
	Mycollection mc;
	mc+=yc1;
	return 0;
}
