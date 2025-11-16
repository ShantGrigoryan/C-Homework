#include "CPU.h"
using namespace std;
void CPU::seter() {
	
	cout << "Enter CPU name - ";
	cin >> name;
	
	cout << "Enter CPU HZ - ";
	cin >> hajax;
	
	cout << "Enter CPU core count - ";
	cin >> core;


}

void CPU::geter() {
	cout << "CPU name is - " << name << ", " << hajax <<
		"HZ and, " << core << " core";
}