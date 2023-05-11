#include <iostream>
using namespace std;
/*
    namespace spacename{
        gloable varies;
        function;
        struct type;
        other namespace;
    }
*/

//命名空间就是将全局作用域再次命名划分
namespace ONE{
    int x= 4;
    int y = 230;
}

namespace ANOTHER{
    int x = 5;
}


int main()
{
    //第一种，用；第二种，少用；第三种，禁用
    {
        cout << ONE::x << endl;
        cout << ANOTHER::x << endl;
    }

    {
        using ONE::x;//using 释放
        cout << x << endl;
        // using ANOTHER::x; 报错，ONE::x冲突
        //int x = 599;       报错，ONE::x冲突
        //也就是使用using释放后，当前作用域下只能存在一个x
    }

    {
        using namespace ONE;//当前作用域下使用这个ONE命名空间
        cout  << x << "-----" << y;
    }


    
    return 0;
}