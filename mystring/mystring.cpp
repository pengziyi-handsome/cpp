#include <iostream>
#include "mystring.h"
#include <string.h>
// mystring::mystring(){
//     _str = new char;
//     *_str = '\0';
// }

// mystring::mystring(char* s){
//     int len = strlen(s);
//     _str = new char[len + 1];
//     strcpy(_str,s);
// }

mystring::mystring(const char*s){//默认参数只在声明处书写
    if(s==nullptr){
        _str = new char[1]; //[1]是为了和[strlen(s)+1]都可以用delete[]_str析构
        *_str = '\0';
    }else{
        _str = new char[strlen(s) + 1];
        strcpy(_str,s);
    }
}

mystring::mystring(const mystring & other){
    this->_str = new char[strlen(other._str) + 1];
    strcpy(this->_str,other._str);
}

void mystring::dump(){
    std::cout << _str;
}

mystring::~mystring(){
    delete[] _str;
}