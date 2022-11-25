#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    Employee(const string &a):name(a),id(num++){}
    Employee(){}
    private:
    string name;
    int id;
    static int num;
};
int main()
{

}