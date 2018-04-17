#ifndef BIGINT_H_
#define BIGINT_H_

#include<iostream>
#include <string>

class BigInt
{
public:
   BigInt(unsigned int numOfDigits=DefaultNumOfDigits, const std::string &str="");
   BigInt(const BigInt &bi);
   BigInt(const std::string &str);
   BigInt &operator =(const BigInt &bi);
   int getNumDigits() const { return m_numDigits; }
   void setNumDigits(int numDigits);
   int getSize() const { return m_digitArraySize; }
   bool isPositive() const { return  m_isPositive; }
   char operator[](int index) const { return m_digitArray[index]; }
   char &operator[](int index) { return m_digitArray[index]; }
   // arithmetic operators
   BigInt operator + (const BigInt &rhs) const;
   BigInt operator - (const BigInt &rhs) const;
   BigInt operator * (const BigInt &rhs) const;
   BigInt operator / (const BigInt &rhs) const;
   // relational operators
   bool operator==(const BigInt& rhs) const;
   bool operator!=(const BigInt& rhs) const;
   bool operator<(const BigInt& rhs) const;
   bool operator<=(const BigInt& rhs) const;
   bool operator>(const BigInt& rhs) const;
   bool operator>=(const BigInt& rhs) const;
   ~BigInt();
	void displayArray();
private:
    // private utility functions
    void allocateDigitArray(unsigned int size, bool init=true);
    void initializeDigitArray(unsigned int size, bool blHasString);
    void freeDigitArray();
    // A static class member is shared across all instances of the class.
    // It is allowed to declare and initialize static members in pre C++11!
    static const unsigned int DefaultNumOfDigits = 10;
    // data
    char *m_digitArray;
    unsigned int m_digitArraySize;
    bool m_isPositive;
	int m_numDigits;
	std::string m_String;
};

std::ostream &operator<<(std::ostream &os, const BigInt &bi);
std::istream &operator>>(std::istream &is, BigInt &bi);

#endif /* BIGINT_H_ */

