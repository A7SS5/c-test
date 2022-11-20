#include<iostream>
#include<string>
using std::string;
class screen
{
    public:
    typedef std::string::size_type pos;
    screen()=default;
     screen(pos h,pos w,char c=' '):height(h),width(w),contents(c,1){};
    private:
    pos cursor=0;
    pos height=0;
    pos width=0;
    std::string contents="";

};
int main()
{
    
}