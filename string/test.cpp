#include <iostream>

using namespace std;

int main()
{
    //compare
    //strlen  strcat  strcmp  strcpy
    string s = "Great Wall";//10个字符
    cout << s.size() << endl;//strlen

    // string s1 = " in China";
    // s += s1;
    // cout << s <<endl;//strcat


    string s3  = "Great Wall";
    if(s == s3)//strcmp
        cout << "==" << endl;
    else
        cout << "!=" << endl;

    

    string s4;
    s4 = s3;//strcpy
    cout << s4 << endl;

    return 0;
}


#if 0
int main()
{
    //x86(64bit)sizeof(string)
    string s;
    cout << "sizeof(string) = " << sizeof(string) << endl;//32
    cout << "sizeof(s)      = " << sizeof(s) << endl;     //32


    //initialization
    string s1 = "china";
    string s2("america");
    cout << s1 << " \t " << s2 << endl;
    s2 = "france";
    cout << s2 << endl;


    //input
    string aString;
    // cin >> aString; //空格会终止输入
    // cout << aString << endl;
    getline(cin,aString);
    cout << aString << endl;
    return 0;
}
#endif