#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int > temp;
    auto a=temp.begin();
    for( ;a!=temp.end();a++)
    {
        if(*a==5)
        break;
    }
    temp.erase(a,temp.end());
    for (auto &t:temp)
    cout<<t<<" ";
}