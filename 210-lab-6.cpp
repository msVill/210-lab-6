#include <iostream>
using namespace std;
// function: enterArrayData() - receives a dynamic double array
// populates it with user entered data.
// function: outputArrayData() - receives a dynamic double array
// outputs the data of the double array to the console 
// function: sumArray() - receives a dynamic double array
// calculates and returns its sum. No output.
// IN MAIN: use dynamic memory allocation
// create array of doubles - size 5. use a constant
// Pass the array to the 3 function to populate, output, and sum the array.
// use pointer notaiton over array.

const int SIZE = 5;

// Function Prototypes:
void enterArrayData(double *);
void outputArrayData(double *);
double sumArray(double *);

int main() {
    double * ptr = nullptr; // we are creaitng a pointer variable
    ptr = new double[SIZE]; // allocating an unnamed memory location with size of SIZE (5).
    cout << "Data entry for the array: " << endl;
    enterArrayData(ptr);

    return 0;
}

void enterArrayData(double* ptrVar) { // Okay, so if this function needs to allocate user input into the arra, then how can I do that?
    for(int i = 0; i < SIZE; i++) {
        cout << "> Element #" << i << ": ";
        cin >> *(ptrVar + i);
    }
}

void outputArrayData(double *ptrVar) {
    for(int i = 0; i < SIZE; i++) {
        cout << *ptrVar << " ";
    }
}

// double sumArray() {
// }