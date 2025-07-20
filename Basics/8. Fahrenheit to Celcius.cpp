#include <iostream>
using namespace std;

int main() {
    float Fahrenheit;
    float Celcius;

    cout<<"Enter the value of Fahrenheit : ";
    cin>>Fahrenheit;

    Celcius = (Fahrenheit - 32)*5/9;
    cout<<"The Value of Celcius for the given Fahrenheit is : "<<Celcius;

    return 0;
}