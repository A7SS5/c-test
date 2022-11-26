#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> list1;
    int a;
    while(cin>>a)
    {
        list1.push_back(a);
    }
    auto result=count(list1.cbegin(),list1.cend(),21);
    cout<<result;
}