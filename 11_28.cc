#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> temp;
    temp["string"];
    auto f = temp.find("string");
    if (f == temp.end())
        cout << "not find" << endl;
    else
        cout << f->second << endl;
}