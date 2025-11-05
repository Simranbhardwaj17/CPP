// Pointer- pointer is a variable which is used for storing the address of data.

//Based on this, Var r of 2 types: 
// 1. Data Var - store data
// 2. Address var - store add of a var

#include<iostream>
using namespace std;

int main(){
  int x = 10;
  // int* p = &x;   // Declaration and initialization in one line.
  int* p;  // Declaration: 'p' is declared as a pointer to an integer
  p = &x;  // Initialization/Assignment: 'p' is assigned the memory address of 'x'

  cout << x << endl; //10
  cout << &x << endl; //0x61ff0c
  cout << p << endl; //0x61ff0c
  cout << &p << endl; //0x61ff08  ret hexadecimal add
  cout << *p << endl; //10  it will be displaying the data where P is pointing, so P iS pointing at 200 at that add.10 is there, so 10.

  return 0;
}


// Important Considerations:
// Type Matching: The data type of the pointer must match the data type of the variable it points to.
// Dangling Pointers: Avoid using uninitialized pointers or pointers that point to memory that has been deallocated (dangling pointers), as this can lead to crashes or unpredictable behavior.
// Dereferencing (cout << *p): To access the value stored at the address a pointer holds, use the dereference operator (*) before the pointer variable name.
// Ex:-  int value = *p; // value will be 10 (p point to int type data)