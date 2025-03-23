#include<iostream>
using namespace std;
class myfirst
{
	int a,b,c;
	public:
		myfirst()
		{
			cout<<"Two Integers=";
			cin>>a>>b;
		}
		~myfirst()
		{
			c=a+b;
			cout<<"c="<<c;
		}
		
};
int main()
{
	myfirst obj;
}