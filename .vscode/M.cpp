#include <iostream>
using namespace std;
int main()
{
   int a=10;
   int b=3;
   cout<<a%b<<endl;
   //取模运算本质就是求余数
   //两个小数不可以取模运算
   ++a;
   cout<<"a="<<a<<endl;
   //前置递增先加一后表达运算
   b++;
    cout<<"b="<<b<<endl;
    //后置递增先表达运算后加一
    int c=5;
    int d=++c*10;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    int e=5;
    int f=e++*10;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;
    return 0;
}