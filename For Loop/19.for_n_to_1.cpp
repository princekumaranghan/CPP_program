#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter max limit : ";
    cin >> n;
    for(int i=n; i>=1; i--){
        cout << i << "\t";
    }
    return 0;
} 