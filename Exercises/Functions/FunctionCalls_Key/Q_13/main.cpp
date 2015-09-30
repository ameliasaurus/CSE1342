//Exercise1_FunctionCalls_Key
//Question 13
/* 
	B. int getTemperature();

	a) Write a function definition for function B.

	b) Write some code in wich you call and appropriately use function B.
 */

#include <iostream>

using namespace std;

int getTemperature();

int main() {
	int currentTemperature = getTemperature(); // ANSWER B
	return 0;
}

// ANSWER A
int getTemperature() {
	int temperature = 600;
	return temperature;
}