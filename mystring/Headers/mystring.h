#ifndef MYSTRING_H
#define MYSTRING_H


class mystring{
public:
    // mystring();
    // mystring(char* s);
    mystring(const char*s = nullptr);
    mystring(const mystring & other);
    ~mystring();
    void dump();

private:
    char* _str;

};

#endif