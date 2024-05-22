#include<iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Enter value of a :";
    cin >> a;
    cout << "Enter value of b :";
    cin >> b;
    cout << "Enter value of c :";
    cin >> c;

    if(a < b){
        cout << " A is a smallest ";
    }
    else if (b < c){
        cout << " B is a smallest ";
    }
    else {
        cout << " c is a smallest ";
    }
    
    return 0;
} 