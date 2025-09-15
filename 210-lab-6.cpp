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
void enterArrayData();
void outputArrayData();
double* sumArray();

int main() {
    double* ptr1 = nullptr; 
    ptr1 = new double[SIZE];

    //Pass the array to the 3 other functions.
    void enterArrayData(double* arr, int size);
    void outputArrayData(double* arr, int size);
    double sumArray(double* arr, int size);
    
    cout << "Lab 6 starting point!" << endl;
    return 0;
}

    //Receives dynamic double array from main()
double* enterArrayData(double* arr, int size) {
    //Need to receive user input for array
    //and populates the array w/the values.
    //To cycle through the array and populate it w/data,
    //it needs a loop function. Like in example code.
    for(int i = 0; i < size; i++) {
        cout << "> Element #" << i << ": ";
        cin >> *(arr + i);
        double total = sumArray(ptr1, SIZE);
    }
}

double* outputArrayData(double* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

double* sumArray(double* arr, int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}