#include<iostream>
using namespace std;
inline float div_num(float a,float b)
{
	return (a/b);
}
int main()
{
	float x,y,z;
	cout<<"two numbers=";
	cin>>x>>y;
	z=div_num(x,y);
	cout<<"Answer="<<z<<endl;
}
