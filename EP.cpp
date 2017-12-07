/*++

FTI Group 21317

Module Name:
	EP.cpp

Abstract:
	Entry point this program

Author:
	KIRAY

--*/

#include <iostream>
#include <windows.h>

#include "MulDiv.h"
#include "SumSub.h"

using namespace std;

void main() {
	int a = 0, b = 0, c = 0;
	int menu = 0;

	cout << "Calculator 1337" << endl;

	cout << "Choose action: \n\t1) Add\n\t2) Sub\n\t3) Mul\n\t4) Div" << endl;
	cin >> menu;

	__try {
		switch(menu) {
			case 1:
				cout << "Summation.\nPlease input two numbers: " << endl;
				cin >> a; cin >> b;
				c = Sum(a, b);
				cout << c << endl;
				break;
			case 2:
				cout << "Subtraction.\nPlease input two numbers: " << endl;
				cin >> a; cin >> b;
				c = Sub(a, b);
				cout << c << endl;
				break;
			case 3:
				cout << "Multiply.\nPlease input two numbers: " << endl;
				cin >> a; cin >> b;
				c = Mul(a, b);
				cout << c << endl;
				break;
			case 4:
				cout << "Diviation.\nPlease input two numbers: " << endl;
				cin >> a; cin >> b;
				c = Div(a, b);
				cout << c << endl;
				break;
		}
	} __except(1) {
		MessageBox(NULL, "Exception detect!", "Err", MB_ICONERROR);
	};

	system("pause");
}