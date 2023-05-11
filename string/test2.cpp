#include<iostream>
using namespace std;
int main()
{
    int a = 23123;
    string s = to_string(a);//tostring
    cout << a << endl;
    cout << s << endl;

    string s1 = "123asda";//a123asda -> err   try catch(&)
    int b = stoi(s1);
    cout << b << endl;

    return 0;
}