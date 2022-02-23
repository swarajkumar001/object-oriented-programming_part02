#include <iostream>
using namespace std;
 class student{
 	 public:
 	 	int rollnumber;
 	 	int age ;
 	 	static int totalstudents; // this is the propert of the class so we r making it as a static..
 	 	// in fact static property belongs to the class......
 	 	
 	 	//if we want aas we creating the number of the students our  totalstudents got increased
 	 	// constructor will help us ....
 	 	student(){
 	 		totalstudents++;
		  }
 	 	
 	 	
 	 	
 	 	
 	
 	
 };
 // we have to initialize static memeber out of the class.....
 //how??
 // return_data_type class_name scope_resolution_operator_static_memeber_name;
 
 int student :: totalstudents=0; // initialisation of the static memeber classs....
 
 
 
 int main(){
 	student s1;
 	student s2,s3,s5,s6;
 	cout<<student :: totalstudents<<endl;
 	
 	
 	
 }
