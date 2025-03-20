#include<iostream>
using namespace std;
class item
{
	private:
		int ic,qty;
		string inm;
		float pr;
		
	public:
		void getitem()
		{
			cout<<"Enter the code of the item:";
			cin>>ic;
			cout<<"Enter the name of the item:";
			cin>>inm;
			cout<<"Enter the quantity of the item:";
			cin>>qty;
			cout<<"Enter the price of the item:";
			cin>>pr;
		}
		void showitem()
		{
			//cout<<ic<<"/t"<<inm<<"/t"<<qty<<"/t"<<pr<<"/t";
			cout<<"Item code is:"<<ic<<endl;
			cout<<"Item name is:"<<inm<<endl;
			cout<<"Item quantity is:"<<qty<<endl;
			cout<<"Item price is:"<<pr<<endl;
		}
			
		
};
int main()
{
	item obj[5];
	int i;
	for(i=0;i<=4;i++)
	{
	obj[i].getitem();
	}
	for(i=0;i<=4;i++)
	{
		obj[i].showitem();
	}
	
	return 0;
}
