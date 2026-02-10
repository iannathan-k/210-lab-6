#include <iostream>

using namespace std;

// COMSC-210 | Lab 6 | Ian Kusmiantoro

const int SIZE = 5;

int main() {
    double* array = new double[SIZE];
    enterArrayData(array);
    outputArrayData(array);

    double sum = sumArray(array);
    cout << "Sum of values: " << sum;

    return 0;
}

void enterArrayData(double* ptr) {
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "\t> Element #" << i << ": ";
        cin >> *(ptr + i);
    }
    cout << "Data entry complete." << endl;
}

void outputArrayData(double* ptr) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr + i);
    }
    cout << endl;
}

double sumArray(double* ptr) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(ptr + i);
    }

    return sum;
}