#include <iostream>
#include <memory>
#include <string>
using namespace std;
class HasPtr
{
private:
    string *str;
    int i;
    size_t *ptr;

public:
    friend void del(HasPtr t);
    HasPtr(const string &s = string()) : str(new string(s)), i(0), ptr(new size_t(1)){};
    HasPtr(const HasPtr &rhs): str(rhs.str),i(rhs.i),  ptr(rhs.ptr)
    {
        (*ptr)++;
    };
    HasPtr &operator=(HasPtr &rhs)
    {  
        (*rhs.ptr)++;
         if ((*ptr)--)
        {
        }
        else{
            delete ptr;
            delete str;
        }
        str=rhs.str;
        i=rhs.i;
        ptr=rhs.ptr;

        return *this;
        
    }
    ~HasPtr()
    {
        if ((*ptr)--)
        {
        }
        else{
            delete ptr;
            delete str;
        }
    };
    void print()
    {
        cout<<"str: "<<*str<<endl;
        cout<<"i: "<<i<<endl;
        cout<<"ptr :"<<*ptr<<endl;
        cout<<endl;
    }
};
void del(HasPtr t)
{
    t.print();
}
int main()
{
    HasPtr temp1("dengpeng");
    HasPtr temp2("dengjing");
    temp2=temp1;
    temp1.print();
    temp2.print();
}