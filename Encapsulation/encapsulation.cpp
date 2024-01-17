#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string name, int age) {
        this->name = name;
        this->age = age;
	}
	void setName(string name) {
        this->name = name;
	}
	string getName() {
        return name;
	}
	void setAge(int age) {
        this->age = age;
	}
	int getAge() {
        return age;
	}
};

int main() {
    Person person("John Doe", 30);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    person.setName("Abdul Awal Nadim");
    person.setAge(26);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}

