#include<iostream>
#include<vector>
#include<memory>
#include<string>
using namespace std;

class StrBlob
{
    public:
    using size_type= vector<string>::size_type;
    StrBlob():data(make_shared<vector<string>>()){};
    StrBlob(initializer_list<string> l):data(make_shared<vector<string>>(l)){};
    size_type size() const {return data->size();};
    bool empty()const { return data->size()==0?true:false;};
    void push_back(const string &t){data->push_back(t);};
    void check(size_type t,const string&msg)
    {
        if(t>=data->size())
        {
            throw out_of_range(msg);
        }
    }
    void pop_back(){
        check(0,"pop_back on empty");
        data->pop_back();
     };
     string &front()
     {
        check(0,"front on empty");
        return data->front();
     }
     string &back()
     {
         check(0,"back on empty");
        return data->back();
     }
    private:
    shared_ptr<vector<string>> data;
};
int main()
{
    StrBlob array1;
    cout<<array1.front();
    
}