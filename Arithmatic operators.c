#include <iostream>

using namespace std;

class abc
{
private:
    int a,b;
public:
    int add,sub,mul;
    float div;
    void getdata()
    {
        cout<<"Enter two numbers:";
        cin>>a>>b;
    }
    void fun1()
    {
        add=a+b;
    }
    void fun2()
    {
        sub=a-b;
    }
    void show()
    {
       cout<<"Add:"<<add<<endl<<"Sub:"<<sub<<endl<<"Mul:"<<mul<<endl<<"Div:"<<div;
    }
    void fun3();
    void fun4();
};
void abc::fun3()
{
    mul=a*b;
};
void abc::fun4()
{
    div=a/b;
};
int main()
{
    abc ob1;
    ob1.getdata();
    ob1.fun1();
    ob1.fun2();
    ob1.fun3();
    ob1.fun4();
    ob1.show();
    return 0;
}