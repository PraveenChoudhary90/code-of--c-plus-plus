#include <iostream>
using namespace std;
int max(int a, int b){

    if(a>b){
         return a;

    }
    else{
         return b;
    }
   
}
int main()
{
    int a,b;
    cout << "Enter the two numbers" <<"\n";
    cin >> a>>b;
    cout <<"max value=" <<  max(a,b);
}