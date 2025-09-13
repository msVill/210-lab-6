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
double* enterArrayData();
double* outputArrayData();
double* sumArray();

int main() {
    //Step 1: Create a double array w/SIZE var as index/size calc.:
    //Step 3: Get user input for array to calc. and returns the sum
    // to the calling program- main() through the pointer...?
    //step 2: Pass the array to the 3 other functions.
    cout << "Lab 6 starting point!" << endl;
    return 0;
}

