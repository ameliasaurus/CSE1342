//Exercise1_FunctionCalls_Key
//Question 10
/* 
	D. void setRectLength(int length);

	a) Write some code that declares an variable, rectLength, and initalizes it to 0. rectLength should have an integer data type.

	b) Now, write a function defitition for function D, where the value passed to the function becomes the new value of rectLength. Assume that rectLength is a global variable.

	c) In the same program, write some code in which you appropriately call function D.
 */

#include <iostream>

using namespace std;

void setRectLength(int length);

int rectLength = 0; // ANSWER A

int main() {
	setRectLength(50); //	ANSWER C
	setRectLength(39); //	ANSWER C
	return 0;
}

// ANSWER B
void setRectLength(int length) {
	rectLength = length;
}