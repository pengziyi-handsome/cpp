#include <iostream>
using namespace std;
int main()
{
    FILE * pf = fopen("data.txt","r+");
    if(pf == NULL)
    {
        cout << "open err" << endl;
        exit(-1);
    }
    string s;
    char buf[1024];


    while(fgets(buf,1024,pf))
    {
        s= buf;
        cout << s;
    }

    return 0;
}