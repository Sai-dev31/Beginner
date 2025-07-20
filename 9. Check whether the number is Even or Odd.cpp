#include <iostream>
using namespace std;

int main() {
    int Number;

    cout<<"Enter the Number to check whether it's even or odd : ";
    cin>>Number;

    if (Number%2 == 0){
        cout<<"The Number is Even"<<endl;

    }
    else{
        cout<<"The Number is Odd"<<endl;
    }

    return 0;
}