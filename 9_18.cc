#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    string temp;
    list<string> deque1;
    while(cin)
    {
        cin>>temp;
        deque1.push_back(temp);
    }
    for(auto a:deque1)
    {
        cout<<a<<" ";
    }
}