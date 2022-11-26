#include<iostream>
using namespace std;
class A{
    public:
    friend void print(A t);
    private: int p=1;
};
void print(A t)
{
    cout<<t.p<<endl;
}
int main()
{
    A temp;
    print(temp);
}