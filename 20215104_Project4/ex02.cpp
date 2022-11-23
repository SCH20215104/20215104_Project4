#include <iostream>

using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time() : hours(10), minutes(59) {}

	~Time() {}

	Time(int h, int m) : hours{ h }, minutes{ m } {}

	void displayTime() {
		if (minutes == 60) {
			minutes = 0;
			++hours;
		}
		
		cout << hours << ": " << minutes << endl;
	}

	Time& operator++ () {
		++minutes;
		return *this;
	}
};

int main() {
	Time t;
	t.displayTime();
	++t;
	t.displayTime();
	++t;
	t.displayTime();
}