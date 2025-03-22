#include<iostream>
using namespace std;
class person
{
	string name,cityname;
	int age;
  public:
  	void get();
  	void isgreater(person);
  	void show();
};
void person::get()
{
	cout<<"enter the name of the person"<<endl;
	cin>>name;
	cout<<"enter the city name of the person"<<endl;
	cin>>cityname;
	cout<<"enter the age of the person"<<endl;
	cin>>age;
}
int person::isgreater(person obj)
{
	if (age>obj.age)
		return 1;
	else
		return 0;
	
}
void person::show()
{
	cout<<name<<"\t";
}
int main()
{
	person p[5];
	int i,j,tmp;
	for(i=0;i<=4;i++)
	p[i].get();
	for(i=0;i<=4;i++)
	p[i].show();
	
	for (i=0;i<=3;i++)
	{
		for (j=i+1;j<=4;j++)
		{
			if(p[i].isgreater(p[j]))
			{
				tmp=p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
		}
	}
		for(i=0;i<=4;i++)
	p[i].show();
	
}
