#include <iostream>

using namespace std;

int main(void){
    int rows, cols;
    cout << "Enter Rows And Cols: " << endl;
    cin >> rows >> cols;
    int **table = new int*[rows];

    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }
    table[1][2] = 88;

    for (int i = 0; i < rows; i++) {
        delete[]table[i];
    }
    delete[] table;
    table = NULL;
    return 0;
}