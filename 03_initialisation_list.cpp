#include <iostream>
using namespace std;
class student{
	
	public: 
	int age;
	int const rollnumber;
	int &x;
	
	
	student(int age,int rollnumber) : age/*[ this->age]*/(age),rollnumber(rollnumber) ,x(this->age)   { //initialization list for constant 
	// and non constant variable.....
	
		///this-age=age;
		//this->rollnumber=rollnumber;
	}
	
	// we can also write 
	/*
	student(int age,int rollnumber) : age(age),rollnumber(rollnumber)   {

	}
	
	
	*/
	
	void display(){
		cout<<" rollnumber : "<<rollnumber<< " age : "<<age<<endl;
		
	}
};







int main(){
	student s1(12,34);
	s1.display();
	
}
