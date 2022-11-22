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
    void pop_back(){if(empty()==true) return; data->pop_back();};
    private:
    shared_ptr<vector<string>> data;
};
int main()
{

}