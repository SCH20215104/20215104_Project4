#include <iostream>

using namespace std;

template <typename T>
class Circle {
	T x, y, r;
public:
	Circle(double x1, double y1, double r1):x(x1), y(y1), r(r1) {

	}

	double area() {
		return r * r * 3.14;
	}
};

int main() {

	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}