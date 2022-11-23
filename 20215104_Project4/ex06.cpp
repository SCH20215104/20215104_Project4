#include <iostream>

using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Bomb : public Weapon {
public:
	void load() {
		cout << "��ź�� �����մϴ�." << endl;
	}
};

class Gun : public Weapon {
public:
	void load() {
		cout << "���� �����մϴ�." << endl;
	}
};

int main() {
	Bomb b;
	Gun g;
	Weapon* weapon[3] = {&g, &b, &b};
	g.load();
	b.load();
	b.load();
}