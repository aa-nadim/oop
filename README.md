# Object-Oriented-Programming

Class-Object
-
```
#include <iostream> 
using namespace std; 

class Student{ 
private: 
	string name; 
	string surname; 
	int rollNo; 

public: 
	Student(string studentName, string studentSurname, int studentRollNo){ 
		name = studentName; 
		surname = studentSurname; 
		rollNo = studentRollNo; 
	} 

	void getStudentDetails(){ 
		cout << "The name of the student is " << name << " " << surname << endl; 
		cout << "The roll no of the student is " << rollNo << endl; 
	} 
}; 

int main() { 
	Student student1("Abdul", "Awal", 26); 
	student1.getStudentDetails(); 

	return 0; 
}

OUTPUT:
	The name of the student is Abdul Awal
	The roll no of the student is 26
```

Encapsulation
-
```
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

OUTPUT:
	Name: John Doe
	Age: 30
	Name: Abdul Awal Nadim
	Age: 26
```
