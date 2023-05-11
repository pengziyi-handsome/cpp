#include <iostream>
using namespace std;

//同名命名空间自动合并
//利于多人协同开发
namespace space1{
    int data1 = 2;
}
namespace space1{
    int data2 = 3;
}
int main()
{
    using namespace space1;
    cout << data1 << "----" << data2 << endl;
    return 0;
}