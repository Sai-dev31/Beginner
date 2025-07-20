#include <iostream>
using namespace std;

int main() {
    char Character;

    cout<<"Enter the Character : ";
    cin>>Character;

    if ( Character == 'a' ||Character == 'e'||Character == 'i'||Character == 'o'||Character == 'u'){
        cout<<"The Given Character is Vowel";
    }
    else {
        cout<<"The Given Character is Consonant";
    }

    return 0;
}