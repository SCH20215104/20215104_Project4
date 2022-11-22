#include <iostream>

using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time() : hours(0), minutes(0) {}
	Time(int h, int m) : hours{ h }, minutes{ m } {}

	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}
};