#include<iostream>
using namespace std;
class student
{
	string nm;
	int p,c,m,t;
	float per;
	
	public:
		void getstudent();
		void calculate();
		void showstudent();	
		int isgreater(student);
};
void student::getstudent()
{
	cout<<"enter the name of the student:";
	cin>>nm;
	cout<<"enter the marks of the 1st subject:";
	cin>>p;
	cout<<"enter the marks of the 2nd subject:";
	cin>>c;
	cout<<"enter the marks of the 3rd subject:";
	cin>>m;
}
void student::calculate()
{
	t=p+c+m;
	per=(float)t/3;
}
void student::showstudent()
{
	calculate();
	cout<<nm<<"\t"<<p<<"\t"<<c<<"\t"<<m<<"\t"<<t<<"\t"<<per<<endl;
}
int student::isgreater(student obj)
{
	if(t>obj.t)
	return 1;
	else
	return 0;
}
int main()
{
	student s[5],max;
	int i;
	for(i=0;i<5;i++)
	{
		s[i].getstudent();
	}
	for(i=0;i<5;i++)
	{
		s[i].showstudent();
	}
	max=s[0];
	for(i=1;i<=4;i++)
	if(s[i].isgreater(max))
	max=s[i];
	
	cout<<"Maximum"<<endl;
	max.showstudent();
	
}

