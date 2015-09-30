//Exercise1_FunctionCalls_Key
//Question 11
/* 
	E. int truncateDecimal(float decimal);

	Write some code in which you call and appropriately utilize function E.
 */

#include <iostream>

using namespace std;

int truncateDecimal(float decimal);

int main() {
	float decimal = 2.7451;
	int noDecimal = truncateDecimal(decimal); // ANSWER
	int rational = 0;
	rational = truncateDecimal(3.141592653589); // ANSWER
	return 0;
}

int truncateDecimal(float decimal) {
	int num = (int) decimal;
	return num;
}