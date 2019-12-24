#include<iostream>
using namespace std;

class ParentClass
{
	public:
		    void One()
		{
	       cout<<"Public method from Parent "<<endl;
		}  
		
	private:
		void Two()
		{
			cout<<"Private method from parent"<<endl;
		}
	protected:
	    void Three()
		{
			cout<<"Protected method from parent"<<endl;
	    }
			 
};

class DerivedClass:public ParentClass
{
	public:
		void sample()
		{
			Three();
			cout<<"Sample from derived class "<<endl;
		}
};

main()
{
	
	DerivedClass derived;
	derived.One();
	derived.sample();
}
