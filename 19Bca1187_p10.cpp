#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{

char a[200];
ofstream out;
out.open("ab.txt",ios::out);
cout<<"Enter the Sentence:";
cin.getline(a,200);
out<<a<<endl;
out.close();

char b;
int count=0;
ifstream in;
in.open("ab.txt",ios::in);

while(!in.eof())
{ in.get(b);
if(b=='A')
{
count++; }
}
cout<<count;

in.close();

}
