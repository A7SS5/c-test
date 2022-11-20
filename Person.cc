#include<iostream>
#include<string>
using std::string;
class Person{
    string name;
    string address;
    string getname ()const;
     string getaddress()const;
    string getname ()const
    {
        return name;
    }
    string getaddress()const
    {
        return address;
    }
};
int main()
{
    
}