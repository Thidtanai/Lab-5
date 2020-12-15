#include <iostream>
using namespace std;

int main(){
    int input = 1;
    int Even = 0, Odd = 0; 
    while (input != 0)
    {
        cout << "Enter an integer: ";
        cin >> input;
        if (input == 0)
        {
            break;
        }
        else if(input % 2 == 0){
            Even += 1;
        }
        else{
            Odd += 1;
        }
    }
    cout << "#Even numbers = " << Even <<"\n";
    cout << "#Odd numbers = " << Odd <<"\n";
    return 0;
}
