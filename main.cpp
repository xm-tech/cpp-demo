#include <algorithm>
#include <iostream>
#include <pthread.h>
#include <string>

using namespace std;

class Person {
    private:
	string name;
	int age;

    public:
	Person(string name, int a) {
		this->name = name;
		this->age = a;
		cout << "person{name:" << this->name << ", age:" << this->age
		     << "} created\n";
	}

	~Person();

	// member func declare
	int getAge();
	void setAge(int a);
	void output();
};

int Person::getAge() { return age; }

void Person::setAge(int a) { age = a; }

void Person::output() {
	cout << "name:" << this->name << ",age:" << this->getAge() << "\n";
}

Person::~Person() {
	cout << "person{name:" << this->name << ", age:" << this->age << "} recycled\n";
}

int main() {
	Person p = Person("maxm", 39);
	p.output();
	p.setAge(35);
	p.output();
	return 0;
}

