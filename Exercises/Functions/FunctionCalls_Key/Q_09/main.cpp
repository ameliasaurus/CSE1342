//Exercise1_FunctionCalls_Key
//Question 9
/* 
	H. float sum(float numA, float numB, float numC);

	Write a function definition for function H.
 */

#include <iostream>

using namespace std;

float sum(float numA, float numB, float numC);

int main() {
	float myNum;
	myNum = sum(5.0, 3.0, 2.001675);
	myNum = sum(6.7, 4.0, 2.3);
	myNum = sum(67, 34.5, 93.2123);
	return 0;
}

// ANSWER
float sum(float numA, float numB, float numC) {
	float answer = numA + numB + numC;
	return answer;
}