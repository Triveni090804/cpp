#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int array [7]={5,10,15,20,25,4,2};
	cout<<"\n given array is:";
	for(i=0;i<7;i++)
	cout<<"\n\t"<<array[i];
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if (array [j]< array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1]= temp;
			}
		}
	}
	cout<<"\n sorted array is :";
	for(i=0;i<7;i++)
	cout<<"\n\t"<<array[i];
	return 0;
}
