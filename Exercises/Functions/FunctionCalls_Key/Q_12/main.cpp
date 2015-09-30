//Exercise1_FunctionCalls_Key
//Question 12
/* 
	I. void iWantCandy();
	
	a) Write a function definitition for function I.

	b) Write some code in which you call and appropriatelty utilize function I.
 */

#include <iostream>

using namespace std;

void iWantCandy();

int piecesOfCandy = 0;

int main() {
	piecesOfCandy = 100;
	iWantCandy(); //ANSWER B
	piecesOfCandy = 2;
	iWantCandy(); //ANSWER B
	piecesOfCandy = 9;
	iWantCandy(); //ANSWER B
	piecesOfCandy = 42;
	iWantCandy(); //ANSWER B
	return 0;
}

// ANSWER A
/* Note: function implementation can do anything.
	The important thing is that your function
	does not return anything (void return type)*/
void iWantCandy() {
	bool wantCandy = true;
	if (piecesOfCandy > 5 && wantCandy) {
		cout << "Candy for everyone!!!" << endl;
	} else {
		cout << "No more candy. Go eat a vegetable." << endl;
 	}
}