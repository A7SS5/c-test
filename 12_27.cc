#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<set>
#include <memory>
#include <fstream>
#include<sstream>
using namespace std;
class TextQuery
{

   
    public:
     friend ostream& print(ostream &out,pair<string,set<int>>  page,TextQuery qo);
    TextQuery(ifstream &infile)
    {
        string temp;
        string str1;
        int line=1;
        while(infile)
        {
             getline(infile,temp);
             text.push_back(temp);
             istringstream temp1(temp);
             while(temp1>>str1)
             {
                data[str1].insert(line);
             }
             line++;
        }
    }
    pair<string,set<int>> query(const string &str)
    {
        auto p=data.find(str);
       if(p==data.end())
       {
            return {"",{}};
       }
       else{
        return *p;
       }
    }
    private:
        vector<string >text;
        map<string,set<int>> data;

};
ostream& print(ostream &out,pair<string,set<int>>  page,TextQuery qo)
{
    auto p=page.second;
    auto c=p.begin();
    while (c!=p.end())
    {
        cout<<"line :"<<*c-1<<" ";
        cout<<qo.text[*(c++)-1]<<endl;
    }
    return out;
}
void runQueries(ifstream &infile)
{
    TextQuery tq(infile);

    while (true)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")
            break;

        print(cout, tq.query(s),tq) << endl;
    }
}

int main()
{
    ifstream infile;
    infile.open("text1");
    runQueries(infile);
    return 0;
}