#include<iostream>
using namespace std;
class student
{
    float a,b,c;
    public:
    student()                                           //Default constructor
    {
        cout<<"19BCA1187"<<endl;
    }
    student(int x,int y,int z)                         //parameterized constructor
    {
        cout<<"Enter marks of three subjects:"<<endl; //Taking inputs from user 
        cin>>x>>y>>z;
        a=x;
        b=y;
        c=z;
    }
    void percentage()                                //Function for calculating percentage
    {
        float d=(a+b+c)/3;
        cout<<"percentage:"<<d<<endl;
    }
    student(student&s3)                             //Copy constructor
    {
        a=s3.a;
        b=s3.b;
        c=s3.c;
    }
    void total()                                   //Function For calculating total
    {
        int t=a+b+c;
        cout<<"Total Marks:"<<t<<endl;
    }
    ~student()                                    //Destructor
    {
        cout<<"End of Program"<<endl;
    }
};
int main()                                       //Main function
{
    int x,y,z;
    student s1,s2(x,y,z);
    s2.percentage();                            //calling function
    student s3(s2);                            //passing  the values of s2 to s3
    s3.total();                                //calling function
    return 0;
}
