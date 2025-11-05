Pointers use - to efficiently manage memory by allowing direct memory manipulation, improving performance, and enabling dynamic data structures. 
They are essential for operations like passing large amounts of data to functions without copying, allocating memory at runtime, and building complex data structures like linked lists and trees.

|    heap          |
|    stack         |  -(ptr is inside it)
|    code section  |  -(prog is inside it)

Modifying variables outside their scope: Pointers enable a function to change the value of a variable that is defined in another part of the program by passing the variable's address.

A program can directly only get access of code section and stack 
can't get access of heap, so with help of ptr in stack, it get access of heap.

How a file on disk can be accessed by a prog (not directly) with help of ptr (file ptr)
File handling: Pointers are used in file operations to manage file pointers and data streams. 

To access network connection, prog use ptr 

Monitor, Keyboard, printer all r accessed by a prog with help of ptr(like cin, cout these internally use ptr)

Efficient data handling: Pointers are used to pass arrays and strings to functions efficiently, as only the address is passed, not the entire data

Improved performance: Accessing data via its memory address is often faster than copying the entire data, especially for large structures. 

Dynamic memory allocation: Pointers allow you to allocate and release memory while a program is running, which is necessary when you don't know the memory requirements in advance.

Polymorphism: In object-oriented programming, pointers (or references) are necessary for polymorphism, allowing you to work with objects of different types through a common interface. 


In Java, C#, no ptr so can't access these devices directly through ur prog use JVM or Common lang runtime 
So, no system prog is done using Java, C#
Using C/C++, we can develop device drivers, operating system coz of ptr