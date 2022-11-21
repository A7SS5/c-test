#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    vector<double> list1;
    double a;
    while(cin>>a)
    {
        list1.push_back(a);
    }
    auto add=accumulate(list1.begin(),list1.end(),0.0);   
    cout<<add<<endl;
}