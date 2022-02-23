// Fraction class......
/* In this question we will add two fraction f1=f1+f2;
 and update the value of the sum in f1; */
 
 #include <iostream>
 using namespace std;
 
 class fraction{
 
 	 int numerator;
 	 int denominator;
 	 public:
 	 	
 	 	fraction( int numerator,int denominator){ // avoid to store garbage value initially....
 	 		this->numerator=numerator;
 	 		this->denominator=denominator;
		  }
 	 	void print() const {
 	 	 	cout<<numerator<<"/"<<denominator<<endl;
 	 	 	
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
		// multiplication overloading..............
		fraction operator*( fraction const & f2) const { //we r referring here const &  to avoid changes and 
		// making extra spaces .....
			int x=numerator*f2.numerator;
			int y=denominator* f2.denominator;
			fraction fnew(x,y);
			
			
			
			
			fnew.simplify();
			return fnew;
		}
		   
		   
		   
		   
		void add( fraction  const & f2){
		   	int lcm=this->denominator*f2.denominator;
		   	int x=lcm/this->denominator;
		   	int y=lcm/f2.denominator;
		   	int num = (x*this->numerator + y*f2.numerator);
		   	this->numerator=num;
		   	
		   	this->denominator=lcm;
		   	//cout<<" this->numerator"<<this->numerator<<endl;
		   	
		   	simplify();
		   }
		   
		   // addition overloading....................
		   
		   fraction  operator+( fraction  const & f2) const {
		   	int lcm=this->denominator*f2.denominator;
		   	int x=lcm/this->denominator;
		   	int y=lcm/f2.denominator;
		   	
		   	int num = x*this->numerator + (y*f2.numerator);
		
		   	fraction fnew(num,lcm);
		   	
		   	fnew.simplify();
		   	
		   	return fnew;
		   	
		   }
		   
		   // check equal or not equal......
		   bool operator==(fraction  const & f2) const {
		   	return (numerator == f2.numerator && denominator == f2.denominator);
		   	
		   }
		   
		
	
		   	
		   	
		   	
		   	
		   
 };
 int main(){
 	
 	fraction f1 (1,2);
 		fraction f2 (1,4);
 		//f1.add(f2);
 		//f1.print();
 		//f1.multiply(f2);
 		//f1.print();
 		
 		 //fraction f3=f1+f2;
 		// cout<<"f3:  add "<<endl;
 		 //f3.print();
 		 if(f1==f2){
 		 	cout<<"equal "<<endl;
		  }
		  else{
		  	cout<<" not equal"<<endl;
		  }
 		 
 		 fraction f4=f1*f2;
 		 cout<<" multiply : "<<endl;
 		 f4.print();
 	
 	
 	
 }
 
