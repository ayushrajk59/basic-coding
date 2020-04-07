#include<iostream>
using namespace std;

void test(int x)
{		
	try
	{
		if(x==1)
		{
			throw (1);
		}
		
		else if(x==0)
		{
			throw ('x');
		}
		
		if(x==-1)
		{
			throw (2.5);
		}
	}
	
  catch(char c)
   {
	cout<<"Character Exception";
   }
  
  catch(int i)
   {
	cout<<"Integer Exception";
   }
  
  catch(float f)
   {
	cout<<"Float Exception";
   }	
}

	int main()
{
	int i;
	cout<<"Enter number: ";
	cin>>i;
	
	cout<<"i=0";
	test(0);
	
	cout<<"i=1";
	test(1);
	
	cout<<"i=-1";
	test(-1);
}

	

