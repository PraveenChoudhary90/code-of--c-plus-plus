#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int colum = 3;
    for(int i = 1;i<=row;i++)
    {
    for(int j = 1;j<=colum;j++)
    {
        cout << "*" << "\t";
    }
    cout << "\n" ;
    }
    return 0;
}