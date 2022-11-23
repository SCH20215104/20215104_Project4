#include <iostream>

using namespace std;

class Weapon {
public:
	virtual void load() = 0;
};

class Bomb : public Weapon {
public:
	void load() {
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}
};

class Gun : public Weapon {
public:
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
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