#include<iostream>
using namespace std;
class employee
{
	string enm,des;
	float sal,da,hra;
	public:
		employee()
		{
			enm=des=" ";
			sal=da=hra=0;
		}
		employee(float dr,float hr)
		{
			cout<<"employee=";
			cin>>enm;
			cout<<"sallary=";
			cin>>sal;
			cout<<"designation=";
			cin>>des;
			da=sal*dr/100;
			hra=sal*hr/100;
		}
		int isgreater(employee obj)
		{
			if(sal>obj.sal)
			return 1;
			else
			return 0;
		}
		void show()
		{
			cout<<enm<<"\t"<<des<<"\t"<<sal<<"\t"<<da<<"\t"<<hra<<endl;
		}
};
int main()
{
	employee w(70,10);
	employee e(80,12);
	employee m(92,15); 
	employee max;
	w.show();
	e.show();
	m.show();
	max=w;
	if(e.isgreater(max))
	max=e;
	
	if(m.isgreater(max))
	max=m;
	m.show();
}
