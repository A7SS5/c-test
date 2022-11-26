#include<iostream>
#include<string>
#include<memory>
using namespace std;
int main()
{ 
    string str1;
    string str2;
    cin>>str1>>str2;
    unique_ptr<char[]> sstr(new char [str1.size()+str2.size()+1]);
    decltype(str1.size()) i=0;
    for (;i<str1.size();i++)
    {
        sstr[i]=str1[i];
    }
    for(;i<str1.size()+str2.size();i++)
    {
        sstr[i]=str2[i-str1.size()];
    }
    sstr[i]='\0';
    cout<<sstr[0];
}