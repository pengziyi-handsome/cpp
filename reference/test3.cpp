#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6};
    int* const &ra =  arr;//引用必须被const修饰，因为arr是不能被改变的
    for(int i = 0; i < 10; i++)
    {
        cout << *(ra+i) << endl;
    }



    // int * &const rb = arr;   err↓
    //error: 'const' qualifiers cannot be applied to 'int*&'

    // for(int i = 0; i < 10; i++){
    //     cout << *(rb+i) << endl;
    // }


    int (&rarr)[10] = arr;
    cout << "sizeof(rarr) = " << sizeof(rarr) << endl;

    return 0;
}