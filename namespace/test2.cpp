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

//�����ռ���ǽ�ȫ���������ٴ���������
namespace ONE{
    int x= 4;
    int y = 230;
}

namespace ANOTHER{
    int x = 5;
}


int main()
{
    //��һ�֣��ã��ڶ��֣����ã������֣�����
    {
        cout << ONE::x << endl;
        cout << ANOTHER::x << endl;
    }

    {
        using ONE::x;//using �ͷ�
        cout << x << endl;
        // using ANOTHER::x; ����ONE::x��ͻ
        //int x = 599;       ����ONE::x��ͻ
        //Ҳ����ʹ��using�ͷź󣬵�ǰ��������ֻ�ܴ���һ��x
    }

    {
        using namespace ONE;//��ǰ��������ʹ�����ONE�����ռ�
        cout  << x << "-----" << y;
    }


    
    return 0;
}