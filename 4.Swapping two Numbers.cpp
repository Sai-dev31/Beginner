#include <iostream>
using namespace std;

int main() {
    int Number1;
    int Number2;
    int Temp_Variable;

    cout<<"Enter Number 1 : ";
    cin>>Number1;
    cout<<"Enter Number 2 : ";
    cin>>Number2;

    cout<<"Before Swapping First Number - "<<Number1<<", Second Number - "<<Number2<<endl;

    Temp_Variable = Number1;
    Number1 = Number2;
    Number2 = Temp_Variable;

    cout<<"After Swapping First Number - "<<Number1<<", Second Number - "<<Number2;

    return 0;
}