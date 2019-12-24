//person->employee->manager

#include<iostream>
using namespace std;

class Person
{
	public:
		int i;
		char n[20],g[5];
		void person()
		{cout<<"Name of person:";
		 cin>>n;
		 cout<<"salary:";
		 cin>>i;
		 cout<<"gender:";
		 cin>>g;
			 //i=20;
			 //cout<<"i value from Person"<<endl;
			
		}
};


class Employee:public Person
{
	public:
		char role[20];
		int j;
		void employee()
		{
		cout<<"Designation:";	
		cin>>role;
		cout<<"Experience:";
	    cin>>j;
		cout<<"The designation of "<<n<< " is:" <<role<<endl;
		}
}; 

class Manager:public Employee
{
	public:
		void manager()
		{ 
		if (j>15)
		{
			cout<<n<<" is eligible as manager"<<endl;
		}
		else
		{
			cout<<n<<" cannot be a manager"<<endl;
		}
			
		}
};

main()
{
	Manager mg;
	mg.person();
	mg.employee();
	mg.manager();
}
