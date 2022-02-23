


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
		   
//		   void operator++(){
//		   numerator=numerator+	denominator;
//		   simplify();
//		   
//		   }
//		 pre-increment 
         fraction& operator++(){
		   numerator=numerator+	denominator;
		   simplify();
		   return *this;
		   }
		   
		   // post increment...
		   fraction operator++(int){
		   	 
		   		fraction fnew(numerator, denominator);
		   	numerator=numerator+denominator;
		   	
		   	
		
		   	fnew.simplify();
		   	simplify();
		   	return fnew;
		   	
		   	 // Note:- we can not nesting on post increment operator..
		   }
		   
		   
		   // overloading of += operator ....
		    fraction& operator+=(fraction  const & f2){
		    	int lcm=this->denominator*f2.denominator;
		   	int x=lcm/this->denominator;
		   	int y=lcm/f2.denominator;
		   	int num = (x*this->numerator + y*f2.numerator);
		   	this->numerator=num;
		   	
		   	this->denominator=lcm;
		   	//cout<<" this->numerator"<<this->numerator<<endl;
		   	
		   	simplify();
		   	
		   	return *this;
		   	
			}
		   
		   
		   
		   
		   
		     
	};	
	int main(){
		fraction f1(10,2);
		fraction f2(18,2);
		f1+=f2;
		f1.print();
		f2.print();
	}
	
		   	
		   	
		   	
		   	
		   
 
