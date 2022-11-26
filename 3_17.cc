#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
int main()
{
    vector<string> list1;
    string temp;
    while(std::cin>>temp)
    {
        list1.push_back(temp);
    }
    for (auto &q:list1)
    {
        for (auto &p:q)
        p=toupper(p);
    }
    for (auto p:list1)
    {
        std::cout<<p<<" ";
    }

    std::cout<<"1234"<<std::endl;
}