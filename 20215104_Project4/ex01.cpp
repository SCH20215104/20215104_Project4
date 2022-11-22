#include <iostream>

using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) {
		cout << "상자의 길이: " << l << endl;
		cout << "상자의 너비: " << w << endl;
		cout << "상자의 높이: " << h << endl;
		cout << "상자의 부피: " << getVolume() << endl;
		cout << endl;

	}
	double getVolume(void) {
		return length * width * height;
	}
};

bool operator< (Box a, Box b) {
	return a.getVolume() < b.getVolume();
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20);
	cout << boolalpha;
	cout << (a < b);
}