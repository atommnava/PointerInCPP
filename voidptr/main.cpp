#include <iostream>

using namespace std;

void printNumber(int *numberPtr){
    cout << *numberPtr << endl;
}

void printLetter(char *charPtr){
    cout << *charPtr << endl;
}

void print(void *ptr, char type){
    if (type == 'i') {
        cout << *((int*)ptr) << endl; 
    } else if (type == 'c') {
        cout << *((char*)ptr) << endl;
    }
}
int main(void){
    int number = 5; 
    char letter = 'A';
    //printNumber(&number);
    //printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');
    system("pause>0");
    return 0;
}