/*
	Learning about deep copy

	Shallow copy = copies only the pointer.
	When at least one of the data member type
	in class is pointer type, then deep copy
	is necessary, that copies what is pointed to.

	This program gives error.
	This program shows what kind of error one
	can face when deep copy is not followed.

	Oyashi
	01/12/2017
*/

#include <iostream>
#include "Chapter_9_ClassesObjects\HeaderFiles\charstack.h"

using namespace std;

int main() {
	CharStack first;
	first.push('A');
	first.push('B');

	CharStack second = first;

	first.push('C');
	second.push('Z');

	cout << first.pop() << endl;
}