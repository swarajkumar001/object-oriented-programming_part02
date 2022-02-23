#include <iostream>
using namespace std;


class Student {
	static int totalStudents;		// total number of students present

	public:

	int rollNumber;
	int age;


	Student() {
		totalStudents++;
	}

	int getRollNumber() {
		return rollNumber;
	}

	static int getTotalStudent() {
		return totalStudents;  // static function doesn't contain this keyword 
		// only use in for static properties....
	}
	
};

int Student :: totalStudents = 0;	// initialze static data members


int main(){
	
Student s1,s2,s3,s4,s5,s6;
cout<<Student::getTotalStudent()<<endl;
	
}

