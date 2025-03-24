#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"\n enter two no";
	cin>>num1>>num2;
	cout<<"\n before swapping:";
	cout<<"\n num1="<<num1<<"\t num2="<<num2;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"\n after swapping:";
	cout<<"\n num1 ="<<num1<<"\t num2="<<num2;
	return 0;
}