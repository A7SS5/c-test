#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
    list<int>oringin={1,2,3,4,5,6,7,8,9,10};
    deque<int>odd,even;
    for(const auto &a:oringin)
    {
        if(a%2==0)
        {
            even.emplace_back(a);
        }
        else odd.emplace_back(a);
    }
     for(const auto &a:odd)
     {
        cout<<a<<" ";
     }
      for(const auto &a:even)
      {
        cout<<a<<" ";
      }
}