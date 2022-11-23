#include <iostream>

using namespace std;

class Employee {
protected:
	string name;
	int salary;
public:
	Employee(string n, int s) : name(n), salary(s) {
		this->name = n;
		this->salary = s;
	};

	~Employee() {};

	string getName() {
		return name;
	}

	void setName(string s) {
		name = s;
	}

	int getSalary() {
		return salary;
	}

	void setName(int n) {
		salary = n;
	}

	void computeSalary() {}

	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << salary << endl;
	}
};

class Manager : public Employee {
protected:
	int bonus;
public:

	Manager(string n, int s, int b) : Employee(n, s) {
		this->bonus = b;
	}

	~Manager() {}

	int getBonus() {
		return bonus;
	}

	void setBonus(int n) {
		bonus = n;
	}

	int computeSalary() {
		return salary + bonus;
	}

	void print() {
		Employee::print();
		cout << "���ʽ�: " << bonus << endl;
		cout << "����: " << computeSalary() << endl;
	}
};

int main() {
	Manager s("��ö��", 200, 100);
	s.print();
	return 0;
}