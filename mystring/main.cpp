#include <iostream>
#include "mystring.h"
using namespace std;
int main(){

    mystring ms;
    mystring ms1("china");

    ms.dump();
    ms1.dump();

    putchar(10);

    mystring ms2(ms1);//mystring ms2 = ms1; 一样
    ms2.dump();
    

  return 0;
}