#include <iostream>

using namespace std;

int main(void){
    int luckyNumbers[5];
    cout << luckyNumbers << endl; // OUTPUT: SAME ADDR
    cout << &luckyNumbers[0] << endl; // OUTPUT: SAME ADDR
    cout << *(luckyNumbers+2) << endl; 

    for (int i = 0; i < 5; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << *(luckyNumbers + i) << endl;
    }
    system("pause>0");
    return 0;
}