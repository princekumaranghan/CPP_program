#include<iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter year : ";
    cin >> year;

    if(year % 4 == 0 || year % 100 == 0 || year % 400 == 0 ){
        cout << " This year is liapyear ";
    }
    else
    {
        cout << "This year is Not liapyear ";
    }
    
    return 0;
} 