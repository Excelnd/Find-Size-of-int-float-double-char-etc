// Find Size of int float double char.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Size of Char is " << sizeof(char) << " Byte" << endl;
	cout << "Size of int is " << sizeof(int) << " Bytes" << endl;
	cout << "Size of double is " << sizeof(double) << " Bytes" << endl;
	cout << "Size of float is " << sizeof(float) << " Bytes" << endl;
	cout << "Size of signed int is " << sizeof(signed int) << " Bytes" << endl;


    return 0;
}

