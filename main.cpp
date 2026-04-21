#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int *ptr = &n;
    cout << &n << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;

    int v;
    int *ptr2 = &v;
    *ptr2 = 7;
    cout << "v = " << v << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr2 = " << ptr2 << endl;

    return 0;
}

