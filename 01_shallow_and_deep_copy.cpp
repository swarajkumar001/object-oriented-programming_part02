
// in this content we will learn about deep and shallow copy
// lets make a student class and try to store the name and age of the student ....


#include <iostream>
using namespace std;
#include <cstring>
class student{
	int age;
	char *name;
	public:
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
};





int main(){
	
	char name[]="abcde";
	
student s1(20,name);
cout<<" s1: "<<endl;
s1.display();

name[4]='f';
student s2(20,name);
cout<<" s2: "<<endl;
s2.display();


cout<<" s1: again  "<<endl;
s1.display(); // here what we r seeing our s1'Names got changed.....


	
	
	
	
}
