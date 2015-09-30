//Exercise1_FunctionCalls_Key
//Question 14
/* 
	a) Declares and initalizes the following variables:
			i) rectLength
			ii) rectHeight
			iii) cubeSideLength
		b) Defines, calls, and properly utilizes the following functions. Note: All functions should have parameters.
			i) setRectLength, of return type void
			ii) setRectHeight, of return type void
			iii) setCubeSideLength, of return type void
			iv) calculateArea, of return type float
			v) calulateVolume, of return type int
			vi) greaterThan42, of return type bool
 */

#include <iostream>

using namespace std;

float rectWidth = 0; //ANSWER AI
float rectHeight = 0; //ANSWER AII
float cubeSideLength = 0; //ANSWER AIII

void setRectWidth(float newRectWidth);
void setRectHeight(float newRectHeight);
void setCubeSideLength(float newCubeSideLength);
float calculateArea(float width, float height);
int calculateVolume(float width, float height, float depth);
bool greaterThan42(int num);

int main() {
	setRectWidth(50.98); //ANSWER BI
	setRectHeight(12.43); //ANSWER BII
	setCubeSideLength(45.67); //ANSWER BIII
	float rectArea = calculateArea(rectWidth, rectHeight); //ANSWER BIV
	int cubeVolume = calculateVolume(cubeSideLength, cubeSideLength, cubeSideLength); //ANSWER BV
	int compare = 30;
	bool greaterThanLife = greaterThan42(compare); //ANSWER BVI
	compare = 89;
	greaterThanLife = greaterThan42(compare); //ANSWER BVI
	return 0;
}

// ANSWER BI
void setRectWidth(float newRectWidth) {
	rectWidth = newRectWidth;
}

// ANSWER BII
void setRectHeight(float newRectHeight) {
	rectHeight = newRectHeight;
}

// ANSWER BIII
void setCubeSideLength(float newCubeSideLength) {
	cubeSideLength = newCubeSideLength;
}

// ANSWER BIV
float calculateArea(float width, float height) {
	float area = width * height;
	return area;
}

// ANSWER BV
int calculateVolume(float width, float height, float depth) {
	int volume = (int) (width * height * depth);
	return volume;
}

// ANSWER BVI
bool greaterThan42(int num) {
	return (num > 42);
}
