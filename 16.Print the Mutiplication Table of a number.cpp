#include <iostream>
using namespace std;

int main() {
    int Number;
    int EndNumber;
    int i = 1;

    cout<<"Enter the Number for the Multiplication Table: ";
    cin>>Number;

    cout<<"Enter the Number to which table must run: ";
    cin>>EndNumber;

    while (i <= EndNumber){
        cout<<Number<<" x "<<i<<" = "<<Number*i<<endl;
        i++;
    }

    return 0;
}