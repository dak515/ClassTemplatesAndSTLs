#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

class Student {
public:
	Student() { }
	Student(string netID, string name, int age, char
		gender) {
		this->netID = netID;
		this->name = name;
		this->age = age;
		this->gender = gender;
	}
	//Getters
	string GetID() const { return netID; }
	string GetName() const { return name; }
	int GetAge() const { return age; }
	char GetGender() const { return gender; }
	//Setters
	void SetID(string netID) {
		this->netID = netID;
	}
	void SetName(string name) { this->name = name; }
	void SetAge(int age) { this->age = age; }
	void SetGender(char gender) {
		this->gender =
			gender;
	}
	void print() {
		cout << "ID: " << netID
			<< " Name: " << name
			<< " Age: " << age
			<< " Gender: " << gender << endl;
	}
private:
	string netID;
	string name;
	char gender;
	int age;
};

bool compare_nocase(Student& a, Student& b)
{
	string first = a.GetName();
	string second = b.GetName();
	unsigned int i = 0;
	while ((i<first.length()) && (i<second.length()))
	{
		if (tolower(first[i])<tolower(second[i])) return true;
		else if (tolower(first[i])>tolower(second[i])) return false;
		++i;
	}
	return (first.length() < second.length());
}

int main() {

	list<Student> stu;
	list<Student>::iterator it;

	stu.push_back(Student("dak515", "Dhvani", 19, 'F'));
	stu.push_back(Student("sak515", "Shvani", 20, 'M'));
	stu.push_back(Student("gak515", "Ghvani", 21, 'F'));
	stu.push_back(Student("pak515", "Phvani", 20, 'M'));

	for (it = stu.begin(); it != stu.end(); ++it){
		(*it).print();
	}
	cout << endl;
	stu.sort(compare_nocase);

	for (it = stu.begin(); it != stu.end(); ++it){
		(*it).print();
	}

	
	system("pause");
	return(0);
} 
