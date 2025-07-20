#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 0;
    int sum = 0;

    cout<<"Enter the Number : ";
    cin>>N;

    while(i <= N){
        sum += i;
        i++;

    }

    cout<<"The Sum of First N Natural numbers is : "<<sum;


    return 0;
}