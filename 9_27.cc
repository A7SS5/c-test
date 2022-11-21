#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> list1={0,1,2,3,4,5,6,7,8,9};
   auto p=list1.before_begin();
   auto t=list1.begin();
   while(t!=list1.end())
   {
        if(*t%2!=0)
        {
            t=list1.erase_after(p);
        }
        else{
            p=t;
            t++;
    }
   }
   for(const auto&a:list1)
   {
        cout<<a<<" ";
   }
}