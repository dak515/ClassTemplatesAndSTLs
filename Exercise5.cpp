/* #include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>
#include <map>
#include <iterator>

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


	map<string, Student> students_map;
	Student s1("dak515", "Dhvani", 19, 'F');
	Student s2("sak515", "Shvani", 20, 'M');
	Student s3("gak515", "Ghvani", 21, 'F');
	Student s4("pak515", "Phvani", 20, 'M');

	students_map.insert(pair<string, Student>(s2.GetName(), s2));
	students_map.insert(pair<string, Student>(s1.GetName(), s1));
	students_map.insert(pair<string, Student>(s4.GetName(), s4));
	students_map.insert(pair<string, Student>(s3.GetName(), s3));

	map<string, Student>::iterator it;

	for (it = students_map.begin(); it != students_map.end(); ++it){
		cout<< it->first << endl;
	}


system("pause");
return(0);
} */