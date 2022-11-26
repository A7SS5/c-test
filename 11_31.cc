#include<stdio.h>
#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    multimap<string,string> athors;
   athors.insert({"dengpeng","book1"});
   athors.insert(pair<string,string>("dengpeng","book2"));
   athors.emplace(pair<string,string>("dengpeng","book3"));
    cout<<athors.count("dengpeng")<<endl;
    auto t=athors.equal_range("dengpeng");
    auto e=t.second;
    auto s=t.first;
    athors.erase(s,e);
    cout<<athors.count("dengpeng")<<endl;
}