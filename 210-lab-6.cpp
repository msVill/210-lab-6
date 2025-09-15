/* Description: Create 3 functions (plus main, of course);
* enterArrayData() = receives dynamic double array and pops. it
w/vals. from user input.
* outputArray() - receives dynamic double array & outputs its data
on 1 line. (REMEMBER: JUST ONE)
* sumArray() - receives dynamic doube arr. Calcs., and returns the sum.
Will not output to console.
In main()- Dynamic mem. allocation, create a double arr., SIZE 5.
Use a -constant for integer literal. Pass the arr. to the 3 functions.

Comsc-210 | Lab #6 | Martha Stephanie Villalta
*/
#include <iostream>
using namespace std;

const int SIZE = 5;

//function prototypes
void enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
double sumArray(double* arr, int size);

int main() {
    double* ptr1 = nullptr; 
    ptr1 = new double[SIZE];

    enterArrayData(ptr1, SIZE);
    outputArrayData(ptr1, SIZE);
    double total = sumArray(ptr1, SIZE);
    
    cout << "Sum of values: " << total << endl;

    delete[] ptr1;
    ptr1 = nullptr;

    return 0;
}

    //Receives dynamic double array from main()
void enterArrayData(double* arr, int size) {
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < size; i++) {
        cout << " > Element #" << i << ": ";
        cin >> *(arr + i); //Pointer notation.
    }
}

void outputArrayData(double* arr, int size) {
    cout << "Outputting array elements: ";
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

double sumArray(double* arr, int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}