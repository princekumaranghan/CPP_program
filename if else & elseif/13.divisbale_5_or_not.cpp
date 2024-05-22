#include<iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter value of a :";
    cin >> a;

    if(a % 5 != 0){
        cout << " Not Divisble value ";
    }
    else
    {
        cout << " Divisble value ";
    }
    
    return 0;
} 