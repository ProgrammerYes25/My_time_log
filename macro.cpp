#include "Header.h"

bool macro::pickMacro2(string choice) {
	if (choice == "1") {
		macro::changeWindow();
		return true;
	}
	else {
		cout << endl;
		cout << endl;
		cout << "                                                         �ٽ� �Է����ּ���" << endl;
		macro::changeWindow();
		return false;
	}
}
bool macro::pickMacro4(string choice) {
	if (choice == "1" || choice == "2" || choice == "3" || choice == "4") {
		macro::changeWindow();
		return true;
	}
	else {
		cout << endl;
		cout << endl;
		cout << "                                                         �ٽ� �Է����ּ���" << endl;
		macro::changeWindow();
		return false;
	}
}
void macro::changeWindow(){
	Sleep(500);
	system("cls");
}
string macro::input() {
	string start;
	cout << "                         " << "                                     �Է�:"; cin >> start;
	return start;
}
