#include<iostream>
using namespace std;
class sample
{
	int a;
	static int x;
	public:
		void getdata()
		{
			cout<<"a=";
			cin>>a;
			x++;
		}
		void showdata()
		{
			cout<<"a="<<a<<"\n"<<"x"<<x<<endl;
		}
		static void show()
		{
			cout<<"x="<<x;
		}
		
};
int sample::x;
int main()
{
	sample obj1,obj2;
	sample::show();
	obj1.getdata();
	obj2.getdata();
	obj1.showdata();
	obj2.showdata();
	}