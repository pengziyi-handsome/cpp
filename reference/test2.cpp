#include <iostream>
using namespace std;
int main(){
    //这个可以，ra rra a 都是平级关系
    int a = 19;
    int &ra = a;
    int &rra = ra;

    //但是，不存在二级引用，引用的引用无
    // int && ra = ra;   //err


    // 也不存在引用数组
    // int& rarr[10];   //err

    return 0;
}