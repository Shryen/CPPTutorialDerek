#include <cstdlib>
#include <iostream>
#include <string>	// for strings
#include <vector>	// resizable array
#include <sstream>	// manipulate strings
#include "limits"	// min max values for data types

int RandNum = 0;

const double PI = 3.14159;

int main(int argc, char** argv) 
{
	// Data types
	bool bMarried = true;
	char chMyGrade = 'A';
	unsigned short int u16Age = 43;
	short int siWeight = 180;
	int nDays = 7;
	long lBigNum = 110000000;
	float fPi = 3.14159;
	double dbBigFloat = 1.111111111;
	long double ldPi = 3.14159;
	auto whatWillIBe = true;

	// Size of data types
	
	std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
	std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n";

	std::cout << "Min char " << std::numeric_limits<char>::min() << "\n";
	std::cout << "Max char " << std::numeric_limits<char>::max() << "\n";

	std::cout << "Min double " << std::numeric_limits<double>::min() << "\n";
	std::cout << "Max double " << std::numeric_limits<double>::max() << "\n";

	std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
	std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";

	std::cout << "Min long " << std::numeric_limits<long>::min() << "\n";
	std::cout << "Max long " << std::numeric_limits<long>::max() << "\n";

	std::cout << "Min float " << std::numeric_limits<float>::min() << "\n";
	std::cout << "Max float " << std::numeric_limits<float>::max() << "\n";

	std::cout << "Min unsigned short int " << std::numeric_limits<unsigned short int>::min() << "\n";
	std::cout << "Max unsigned short int " << std::numeric_limits<unsigned short int>::max() << "\n";

	std::cout << "Min short int " << std::numeric_limits<short int>::min() << "\n";
	std::cout << "Max short int " << std::numeric_limits<short int>::max() << "\n";

	// float vs double

	float fBigFloat = 1.11111111;
	float fBigFloat2 = 1.11111111;
	float fFloatSum = fBigFloat + fBigFloat2;

	// precision of float is about 6 units

	printf("fFloatSum precision: %.10f\n", fFloatSum);

	double dbBigDouble1 = 1.1111111111111111111111;
	double dbBigDouble2 = 1.1111111111111111111111;
	double dbDoubleSum = dbBigDouble1 + dbBigDouble2;
	
	// Precision of double is about 10 units

	printf("dbDoubleSum precision: %.20f\n", dbDoubleSum);

	// Using printf with data types
	printf("%c %d %5d %3.f %s\n", 'A', 10, 5, 3.123, "Hi");

	std::string sQuestion("Enter number 1 : ");
	std::string sNum1, sNum2;
	std::cout << sQuestion;
	getline(std::cin, sNum1);
	std::cout << "Enter Number 2 :";
	getline(std::cin, sNum2);

	int nNum1 = std::stoi(sNum1);
	int nNum2 = std::stoi(sNum2);

	// Math calculations same with all
	printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
	printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

	/* KM to Mile task
	* 1km = 1.60934
	* Enter Miles: 5
	* 5 Miles equals 8.0467 kilometers
	*/
	double dMiles = 0.0;
	double dKM = 0.0;
	std::cout << "Enter Miles: ";
	std::cin >> dMiles;
	// assigning value after getting the userinput so it's not 0;
	dKM = dMiles * 1.60934;
	printf("%.2f Miles equals to %f kilomters", dMiles, dKM);

	return 0;
}