#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    int product = 1;

    cout<<"Enter the Number : ";
    cin>>N;

    while(i <= N){
        product *= i;
        i++;

    }

    cout<<"The Factorial of the number is : "<<product;


    return 0;
}