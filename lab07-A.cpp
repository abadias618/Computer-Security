/**********************************************************************
* Program:
*   Lab 07, Memory Organization
*   Brother Wilson, CSE453
*
* Authors:
*   Timothy Bohman
*   Alex Johnson
*   John Batty
*   Abdias Baldiviezo Aguilar
*
* Summary:
*
* Sources:
*
*************************************************************************/

#include <iostream>
using namespace std;
const int global = 98765;

int main () {

    int localVariable = 123456;
    cout << "STACK:\n" << &localVariable << endl;

    int * heapPointer = new int;
    cout << "HEAP:\n" << (void *)heapPointer << endl;

    const int constant = 234567;
    cout << "CODE: \n" << &global << endl;

    cout << "\n" << (void*) &main << "\n";

}

