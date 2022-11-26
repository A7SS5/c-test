#include<vector>
#include<iostream>
using std::vector;
 typedef int func(int,int);
int add(int a,int b)
{
    std::cout<<a+b<<std::endl;
    return 0;
};
int del(int a,int b)
{
    std::cout<<a-b<<std::endl;
    return 0;
};
int mult(int a,int b)
{
    std::cout<<a*b<<std::endl;
    return 0;
};
int chu(int a,int b)
{
    std::cout<<a/b<<std::endl;
    return 0;
};
int  comp(int a,int b,func*c)
{
    c(a,b);
    return 0;
}
int main()
{
    func * temp=add;
    vector<func *>arr1={add,del,mult,chu};
    int a=4;
    int b=2;
    for(auto i:arr1)
    {
        comp(a,b,i);
    }
}