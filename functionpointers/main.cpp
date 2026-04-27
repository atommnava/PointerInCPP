#include <iostream>

using namespace std;

int getNumber(){
    return 5;
}

int main(void){
    int(*funcPtr)() = getNumber;

    cout << funcPtr();
    
    return 0;
}