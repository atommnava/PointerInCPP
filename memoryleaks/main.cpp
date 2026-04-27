#include <iostream>

using namespace std;

void myFunc(){
    int *ptr = new int[5];
    ptr[2] = 10;
    cout << "Hi, I Am = " << ptr[2];
    delete[]ptr;
}

int main(void){
    myFunc();
    return 0;
}