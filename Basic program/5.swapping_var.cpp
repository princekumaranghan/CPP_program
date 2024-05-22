#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout <<"Enter value of a : ";
    cin >> a;
    cout <<"Enter value of b : ";
    cin >> b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout <<"value of a : " << a << "\n";
    cout <<"value of b : " << b;

    return 0;

}