#include <iostream>
using namespace std;

int main() {
    int N = 12345;
    int rev = 0;
    
    while (N > 0){
        rev = rev*10 + N%10;
        N = N/10;
    }
    cout<<"The Reversed Number is "<<rev;

    return 0;
}