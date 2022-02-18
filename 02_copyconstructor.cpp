// Copy constructor always doo shaloow copy and to avoid shallow copy we have to make
//changes in our copy constructor....




#include <iostream>
using namespace std;
#include <cstring>
class student{
	int age;
	
	public:
	char *name;	
		student(int age, char *name){
			this->age=age;
//			 here this is following shallow copy ....... 
//			 to avoid this we should make it as deep copy
//			this->name=name;


          // deep copy ....here we r making copy of the name ..so what cahnge in main ..it is 
          // not going to reflect....
          
          this->name=new char[strlen(name)+1]; //creating new charcter array.....
          strcpy(this->name,name); // copy 

		}
		
		void display(){
			cout<<" name of the student : "<< name<<" , "<<"age of the student : "<<age<<endl;
		}
		
			Student(Student s) {
		    // shallow copy is going on ....
			cout<<" copy constructor called !!!"<<endl;
			this->age=s.age;
			
			//this->name=s.name;
			this->name=new char[strlen(name)+1]; //creating new charcter array.....
          strcpy(this->name,s.name); // copy 
			
			
			
		}
		
		
		
};





int main(){
	
	char name[]="abcdefgh";
	
student s1(20,name);
cout<<" s1: "<<endl;
s1.display();

student s2(s1);
s2.name[0]='X';
cout<<" s1: "<<endl;
s1.display(); // here whar we r seeing our name of s1 got changed.....
//  becoz copy constructor always perform shaloow copy we should make changes in in the copy constructor
  
cout<<" s2: "<<endl;
s2.display();





	
	
	
	
}
