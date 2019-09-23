#include <iostream>
int main()
{
int a=0;
int b=0;
std::cout<<"Please enter two integers\n";
std::cin>>a>>b;
if (a<b)
std::cout<<"max("<<a<<","<<b<<")is "<<b<<"\n";
else
std::cout<<"max("<<a<<","<<b<<")is "<<a<<"\n";
return 0;
}
