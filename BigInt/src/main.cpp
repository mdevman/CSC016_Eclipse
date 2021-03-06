
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
  BigInt bi1(str1);
  cout << "bi1 = ";
	bi1.displayArray();
  // copy constructors
  BigInt bi2(bi1);
  cout << "bi2(bi1)" << endl;
  cout << "bi2 = ";
	bi2.displayArray();
  BigInt bi3 = bi1;
	cout << "bi3 = bi1" << endl;
  cout << "bi3 = ";
	bi3.displayArray();
  // assignment operator
  bi1 = bi2;
	cout << "bi1 = bi2" << endl;
	  cout << "bi1 = ";
	bi1.displayArray();
	  cout << "bi2 = ";
	bi2.displayArray();

	//cout << "bi1 == bi2 -> " << (bi1 == bi2) << endl;
	//cout << "bi1 > bi2 -> " << (bi1 > bi2) << endl;
	//cout << "bi5 > bi2 -> " << (bi5 > bi2) << endl;

  // IO operations
	cout << "Please enter a value for bi2 : " << endl;
  cin >> bi2;
	cout << "cin>>bi2 = " << endl;
  	//cout << "bi2 = ";
	bi2.displayArray();
	cout << "cout << bi1 ... ";
  cout << bi1;
  cout << "bi1 = ";
	bi1.displayArray();
	//std::cout<<"bi1 = " << bi1.displayArray() << endl;

  // math operations
  //BigInt bi4 = bi1 + bi2 - bi3;
  	cout << "bi1 = ";
	bi1.displayArray();
	cout << " + " << endl;
  	cout << "bi2 = ";
	bi2.displayArray();
  BigInt bi4 = bi1 + bi2;
  bi4.displayArray();

	cout << "bi2 = ";
	bi2.displayArray();
	cout << " - " << endl;
  	cout << "bi3 = ";
	bi3.displayArray();
	//BigInt bi6 = bi4 - bi3;
	BigInt bi6 = bi2 - bi3;
	bi6.displayArray();

  // relational operations
  if(bi1>bi2)
  {
	cout << "bi1 = ";
    cout<<bi1;
  }
  else
  {
	cout << "bi2 = ";
    cout<<bi2;
  }

	cout << "bi1 = ";
	bi1.displayArray();
	cout << " * " << endl;
	cout << "bi2 = ";
	bi2.displayArray();
  BigInt bi7 = bi1 * bi2;
	bi7.displayArray();

	//~bi1;
	//~bi2;
	//~bi3;
	//~bi4;
	//~bi5;

  return 0;
}

