#include <iostream>
using namespace std;
int main()
{
    int a =2;
    int b =5;
    if(a++,--b,--a){
        cout << --a;
    }
    else{
        cout << b++;
    }
}