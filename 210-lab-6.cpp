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
double * enterArrayData();
void outputArrayData(double *);
double * sumArray();

int main() {
    double * ptr = nullptr;
    ptr = new double;
    

    return 0;
}

double * enterArrayData() {
    double *arr1 = nullptr;
    arr1 = new int[SIZE];
    for(int i = 0; i < SIZE; i++) {
        arr1[i] = ;
    }
    return arr1;
}

void outputArrayData(double *) {

}

double * sumArray() {

    return 
}