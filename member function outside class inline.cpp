#include<iostream>
using namespace std;
class sample
{
	float a,b;
	public:
		void get(float,float);
		void swap();
		void show();
};
inline void sample::get(float x,float y)
{
	a=x;
	b=y;
}
inline void sample::swap()
{
	float temp;
	temp=a;
	a=b;
	b=temp;
}
inline void sample::show()
{
	cout<<"a="<<a<<"b="<<b<<endl;
}
int main()
{
	sample obj;
	obj.get(27.3,63.5);
	obj.show();
	obj.swap();
	obj.show();
	return 0;
}
