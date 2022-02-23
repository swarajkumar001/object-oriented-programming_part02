// Fraction class......
/* In this question we will add two fraction f1=f1+f2;
 and update the value of the sum in f1; */
 
 // CONSTANT FUNCTION :- which doesnt change any property of the curent object
 
 
 
 #include <iostream>
 using namespace std;
 
 class fraction{
 
 	 int numerator;
 	 int denominator;
 	 public:
 	 	
 	 	
 	 	// make the function costant which doesn't change the current property of the object...
		   
 	 	 fraction(){
 	 	 	 cout<<" constructor called !!!"<<endl;
		   }
 	 	fraction( int numerator,int denominator){ // to avoid to store garbage value initially....
 	 		this->numerator=numerator;
 	 		this->denominator=denominator;
		  }
 	 	void print ()const {
 	 	 	cout<<numerator<<"/"<<denominator<<endl;
 	 	 	
		   }
		   int get_num ()const {
		   	return numerator;
		   }
		   int get_deno() const {
		   	return denominator;
		   }
		   void set_num(int n)  {
		   	this->numerator=n;
		   	
		   } // we can not make the function constant who is going to change
		    //the value of the proprty of thr current cobject...
		   void set_deno(int d){
		   	this->denominator=d;
		   }
		   
		   
		void simplify(){
			int gcd=1;
			int j=min(this->numerator,this->denominator);
			for(int i=1;i<=j;i++){
				if(this->numerator%i==0&&this->denominator%i==0){
					gcd=i;
				}
			}
			//cout<<" gcd : "<<gcd<<endl;
			this->numerator=this->numerator/gcd;
			this->denominator=this->denominator/gcd;
			
			
		}   
		
		void multiply( fraction const & f2){ //we r referring here const &  to avoid changes and 
		// making extra spaces .....
			numerator=numerator*f2.numerator;
			denominator=denominator* f2.denominator;
			simplify();
		}
		   
		   
		   
		   
		void add( fraction  const & f2){
		   	int lcm=this->denominator*f2.denominator;
		   	int x=lcm/this->denominator;
		   	int y=lcm/f2.denominator;
		   	
		   	this->numerator=x*this->numerator +y *f2.numerator;
		   	this->denominator=lcm;
		   	//cout<<" this->numerator"<<this->numerator<<endl;
		   	
		   	simplify();
		   	
		   	
		   	
		   	
		   	
		   }
 };
 
 
 
 
 
 
 int main(){
 	fraction f1(10,2); 
 	fraction const f3;
 	f3.get_num();
 	f3.set_num(12);
 	
	
 
 	
 	
 	
 	
 	
 }
