#include <iostream>
#include<vector>
using namespace std;
struct X
{
    X() { cout << "X()" << endl; };
    X(const X &) { cout << "X(const X&)" << endl; };
    ~X() { cout << "~()"; } ;
    X &operator=(const X &rhs) { cout << "operator=";return *this; };
};
void test1(X a)
{
    
};
int main()
{
    X fst;
    X &snd = fst;
    X third=snd;
    fst=third;
    test1(fst);
}