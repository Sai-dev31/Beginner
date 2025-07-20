#include <iostream>
using namespace std;

int main() {
    int Year;

    cout<<"Enter the year to check : ";
    cin>>Year;

    if ((Year%4 == 0 && Year%100 != 0 )||(Year%400 == 0)){
        cout<<"The Entered Year is a Leap Year";
    
    }
    else{
        cout<<"The Entered Year is Not a Leap Year";
    }
    return 0;
}