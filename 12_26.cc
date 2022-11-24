#include<iostream>
#include<string>
#include<memory>
using namespace std;
int main()
{
    allocator<string> a;
    auto p=a.allocate(100);
    auto q=p;
    string str1;
    while(cin>>str1)
    {
        a.construct(q++,str1);
    }
    while(q!=p)
    {
        cout<<*(q-1);
        a.destroy(--q);
    }
    a.deallocate(p,100);
}