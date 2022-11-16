#include<iostream>
#include<vector>
using std::vector;
int main()
{
    vector<int > list1;
    int i;
    while(std::cin>>i)
    {
        list1.push_back(i);        
    }
    for(auto q:list1)
    {
        std::cout<<q<<std::endl;
    }
}