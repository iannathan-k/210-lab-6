#include <iostream>

using namespace std;

// COMSC-210 | Lab 6 | Ian Kusmiantoro

const int SIZE = 5;

void enterArrayData(double* ptr);

void outputArrayData(double* ptr);

double sumArray(double* ptr);

int main() {
    double* array = new double[SIZE];
    enterArrayData(array);
    outputArrayData(array);

    double sum = sumArray(array);
    cout << "Sum of values: " << sum << endl;

    delete[] array;

    return 0;
}

// enterArrayData() populates each element through the console
// arguments: double* ptr to the array
// returns: none
void enterArrayData(double* ptr) {
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "\t> Element #" << i << ": ";
        cin >> *(ptr + i); // Using pointer notation method
    }
    cout << "Data entry complete." << endl;
}

// outputArrayData() outputs the array in a single line
// arguments: double* ptr to the array
// returns: none
void outputArrayData(double* ptr) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

// sumArray() sums the array and returns the value
// arguments: double* ptr to the array
// returns double sum
double sumArray(double* ptr) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(ptr + i);
    }

    return sum;
}