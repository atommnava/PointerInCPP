#include <iostream>

using namespace std;

int getMin(int numbers[], int size){
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size){
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int minimo(int arreglo[], int tamanio){
    int min = arreglo[0];
    for (int i = 1; i < tamanio; i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }
    return min;
}

void getMinAndMax(int numbers[], int size, int *min, int *max){
    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
    }
}

int main(void){
    int numbers[5] = {5,4,-2,29,6};
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    /*
    cout << "Min is: " << getMin(numbers, 5) << endl;
    cout << "Min is: " << minimo(numbers, 5) << endl;
    cout << "Max is: " << getMax(numbers, 5) << endl;*/

    cout << "Min con función Void: " << min << endl;
    cout << "Max con función Void: " << max << endl;
    system("pause>0");
    return 0;
}