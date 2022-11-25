#include <iostream>
#include <string>
#include <set>
using namespace std;
class Message;class Folder;
class Folder
{
public:
    void addMsg(const Message *m)
    {
        messages.insert(m);
    }
    void remMsg(const Message *m)
    {
        messages.erase(m);
    }

private:
    set<const Message *> messages;
};
class Message
{
private:
    set<Folder *> folders;
    string contents;
    void add_to_Folders(const Message &);
    void remove_from_Folders();

public:
    friend class Folder;
    Message(const string &str = "") : contents(str){};
    Message(const Message &);
    Message &operator=(const Message &);
    ~Message();
    void save(Folder &);
    void remove(Folder &);
};
void Message::add_to_Folders(const Message &m)
{
    for (auto f : m.folders)
    {
        f->addMsg(this);
    }
}
void Message::remove_from_Folders()
{
    for (auto f : folders)
    {
        f->remMsg(this);
    }
}
Message::~Message()
{
    remove_from_Folders();
}
void Message::save(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg((this));
}
Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);
}
Message &Message::operator=(const Message &m)
{
    this->remove_from_Folders();
    contents = m.contents;
    folders = m.folders;
    this->add_to_Folders(m);
    return *this;
}
int main()
{   
}