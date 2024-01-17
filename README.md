# Object-Oriented-Programming

Class-Object
-
`
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
	Student student1("Nadim", "Ahamed", 20); 
	student1.getStudentDetails(); 

	return 0; 
} 

`
