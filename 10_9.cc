#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void elimDups(vector<string>& a)
{
    sort(a.begin(),a.end());
    auto end_t=unique(a.begin(),a.end());
    a.erase(end_t,a.end());
}
int main()
{
    vector<string> arr;
    string t;
    while(cin>>t)
    {
        arr.push_back(t);
    }
    elimDups(arr);
    for(const auto &temp:arr)
    {
        cout<<temp<<" ";
    }
}