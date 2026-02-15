#include <iostream>
using namespace std;
//comsc 210 | Lab #6 | Martha Stephanie Villalta

const int SIZE = 5;

// Function Prototypes:
void enterArrayData(double *); // will receive a pointer of an array
void outputArrayData(double *);
double sumArray(double *);

int main() {
    double * ptr = nullptr; // we are creaitng a pointer variable
    ptr = new double[SIZE]; // allocating an unnamed memory location with size of SIZE (5).
    cout << "Data entry for the array:" << endl;
    enterArrayData(ptr); // passing the pointer variable as an argument to the functions.
    cout << "Outputting array elements: ";
    outputArrayData(ptr);
    cout << endl << endl;
    cout << "Sum of values: " << sumArray(ptr);
    cout << endl << endl;
    return 0;
}

void enterArrayData(double* ptrVar) { 
    for(int i = 0; i < SIZE; i++) { // iterate over/through each index of the array by SIZE val.
        cout << "\t> Element #" << i << ": ";
        cin >> *(ptrVar + i);
    }
    cout << "Data entry complete." << endl << endl;
}

void outputArrayData(double *ptrVar) {
    for(int i = 0; i < SIZE; i++) {
        cout << *(ptrVar + i) << " ";
    }
}

double sumArray(double *ptrVar) {
    double sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += *ptrVar;
    }

    return sum;
}