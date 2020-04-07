#include<iostream>
#include<string>
using namespace std;

int main()
{
	int sum=0;
	int  *myarray=NULL;
	myarray=new int[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>myarray[i];
	}
		cout<<"myarray value=";
	
		for(int i=0;i<5;i++)
		{   
		sum=sum+myarray[i];
		}
		
		cout<<sum;
	    delete[]myarray;
}
