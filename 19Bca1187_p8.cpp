#include<iostream>
using namespace std;

class student
{
	int uid;
	char name[20];
	
	class address
	{
		int H_N;
		char city[20];
		public:
			void get_data()
			{
				cout<<"Enter address:";
				cin>>H_N>>city;
			}
			
			void print_data()
			{
				cout<<H_N<<city;
			}
	};
	
	address add1;
	
	public:
		void get_data()
		{
			cout<<"Enter Uid & Name:";
			cin>>uid>>name;
			add1.get_data();
		}
		
		void print_data()
		{
			cout<<"Default of\n";
			cout<<uid<<\n<<name;
			add1.print_data();
		}
};

int main()
{
	student s1;
	s1.get_data();
	s1.print_data();
	return 0;
}
