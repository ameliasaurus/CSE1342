//Exercise1_FunctionCalls_Key
//Question 8
/* 
	F. bool equal(float numA, float numB);	

	Write a function definition for function F.
 */

#include <iostream>

bool equal(float numA, float numB);

using namespace std;

int main() {
	bool happyDance;
	happyDance = equal(3.0, 2.5);
	happyDance = equal(4.003, 4.003);
	happyDance = equal(4.003, 4.0035);
	return 0;
}

// ANSWER
bool equal(float numA, float numB) {
	float a = numA;
	float b = numB;
	bool equal = false;
	if (numA == numB) {
		equal = true;
	} else {
		equal = false;
	}
	return equal;
}