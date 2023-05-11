#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char (*p)[7] = new char[3][7];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 7; j++)
            cout << *(*(p+i)+j);
        putchar(10);
    }
    return 0;
}

#if 0
int main()
{
    char (*p)[7] = new char[3][7];
    ifstream  afile;
    afile.open("word.txt", ios::in );
    for(int i = 0; i < 3; i++)
    {
        afile >> *(p+i);
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; i < 7; j++)
        {
            cout << *(p+i);
        }
        putchar(10);
    }
    delete []p;
    afile.close();
    return 0;
}
#endif
int func()
{
    int *p = new int(10);
    cout << *p << endl;
    return 0;
}