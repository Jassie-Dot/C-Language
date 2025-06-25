/*
    The C++ standard libraries provies an extensive set of input/output capabilities which we will see in subsequent chapters. This chapter will discuss very basic and most common I/O operations required for C++ programming.

    C++ I/O occurs in streams, which are sequence of bytes. If bytes flow from device like keybord,adisk,or network connection to main memory, this is called input operation and if bytes flow from main memory to a device like a display screen, a printer, a disk drive, or a network connection, etc., this is called output operation.
*/

#include<iostream>
/*
    This file defines the cin,cout,cerr and clog objects, which correspond to the standart input stream, the standard output stream, the un-buffered dstandard error stream 
*/
#include<iomanip>
/*
    This file declares service useful for performing formatted I/O with so-called parameterized stream manipulators, such as setw and setprecision.  
*/
#include<fstream>
/*
    This file declares service for user-controlled file processing. We will discuss about it in detail in file and stream related chapter
*/
//#include<bits/stdc++.h>
///*
//    This is a GCC-specific header file that includes most of the standard C++ library headers. It's convenient for competitive programming but not standard C++ and can lead to larger compilation times.
//*/