#include "Computer.h"
using namespace std;

void Computer::set() {
	
	CPU::seter();
	cout << "Enter display name ";
	
	cin >> display;
	
	cout << "Enter RAM GB - ";
	
	cin >> ram;
	
	cout << "Enter SSD GB - ";

	cin >> ssd;

}

void Computer::get() {
	CPU::geter();

	cout << "Computer display name is - " << display << ", " << 
		ram <<
		"GB ram and, " << ssd << " GB";
}
