#include <iostream>
using namespace std;

int main() {
    int Number1 = 31;
    int Number2 = 27;
    int Number3 = 07;

    if (Number1 > Number2){
        if(Number1 > Number3){
            cout<<Number1<<" is the greatest among the 3";
        }
        else{
            cout<<Number3<<" is the greatest among the 3";
        }
    }

    else{
        if(Number2 > Number3){
            cout<<Number2<<" is the greatest among the 3";
        }
        else{
            cout<<Number3<<" is the greatest among the 3";
        }

    }

    return 0;
}