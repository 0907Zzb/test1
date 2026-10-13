#include <iostream>
using namespace std;
int main()
{
   int a=10;
   int b=20;
   cout<<!a<<endl;
   //非a即为假
   cout<<!!a<<endl;
   //非非a即为真
   cout<<(a&&b)<<endl;
   //并列关系
   int c=0;
   int d=10;
   cout<<(c&&d)<<endl;
   cout<<(c||d)<<endl;
   //或的关系
   return 0;
}