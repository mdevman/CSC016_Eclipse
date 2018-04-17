
#include "BigInt.h"

#include <iostream>
using namespace std;



int main()
{
  // conversion constructor with string of digit initialization (see QA)
  string str = "1254213456768432";
  BigInt bi5(str);
	bi5.displayArray();

  // explicit constructor with num of digits
  string str1 = "3452552";
  BigInt bi1(10, str1);
	bi1.displayArray();
  // copy constructors
  BigInt bi2(bi1);
	bi2.displayArray();
  BigInt bi3 = bi1;
	bi3.displayArray();
  // assignment operator
  bi1 = bi2;
	bi1.displayArray();
	bi2.displayArray();

  // IO operations
  cin>>bi2;
	bi2.displayArray();
  cout<<bi1;
	//std::cout<<"bi1 = " << bi1.displayArray() << endl;
	
  // math operations
  //BigInt bi4 = bi1 + bi2 - bi3;
  BigInt bi4 = bi1 + bi2;
	bi4.displayArray();

  // relational operations
  if(bi1>bi2) 
    cout<<bi1;
  else
    cout<<bi2;
	
	//~bi1;
	//~bi2;
	//~bi3;
	//~bi4;
	//~bi5;

  return 0;
}

