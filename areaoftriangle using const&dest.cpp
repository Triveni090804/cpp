#include<iostream>
using namespace std;
class triangle
{
	float bs,ht,a;
	public:
		triangle(float b,float h)
		{
			bs=b;
			ht=h;
		}
		void calculate()
		{
			a=0.5*bs*ht;
		}
		void showarea()
		{
			calculate();
			cout<<"area="<<a<<endl;
		}
};
int main()
{
	triangle t(4,2);
	t.showarea();
	
}
