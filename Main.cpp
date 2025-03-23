#include <cstdlib>
#include <iostream>
#include <string>	// for strings
#include <vector>	// resizable array
#include <sstream>	// manipulate strings
#include "limits"	// min max values for data types

int main(int argc, char** argv) 
{
	// Data types
	bool bMarried = true;
	char chMyGrade = 'A';
	unsigned short int u16Age = 43;
	short int siWeight = 180;
	int nDays = 7;
	long lBigNum = 110000000;
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


	/*
	* Conditions, Arrays, Vectors, Strings, Loops -> Episode 2
	*/
	std::cout << "\n\nEpisode 2\n";
	int nAge = 0;
	std::cout << "Enter your age: ";
	std::cin >> nAge;

	if ((nAge >= 1) && (nAge <= 18)) {
		std::cout << "Important Birthday!\n";
	}
	else if ((nAge == 21) || (nAge == 50)) {
		std::cout << "Important Birthday!\n";
	}
	else if (nAge >= 65) {
		std::cout << "Important Birthday!\n";
	}
	else {
		std::cout << "Not important birthday!\n";
	}

	/*
	* Task: if age 5 "Go to Kindergarten"
	* Age 6 through 17 -> Grade 1 through 12
	* Age > 17 -> Go To college
	* 
	* Enter your age: 2
	* Too young for school
	* Enter age: 8
	* Go to Grade 3
	*/

	std::cout << "Enter your age: ";
	std::cin >> nAge;
	int nGrade = nAge-5;
	if (nAge == 5) {
		std::cout << "Go to kindergarten\n";
	} else if(nAge > 17){
		std::cout << "Go to college\n";
	}
	else if (nAge >= 6 && nAge <= 17) {
		std::cout << "Go to Grade " << nGrade << std::endl;
	}

	/*
	* Arrays
	*/
	int arrNums[10] = { 1 };
	int arrNums2[] = { 1,2,3 };
	int arrNums3[5] = { 8,9 };

	// print the first value
	std::cout << "1st value " << arrNums3[0] << "\n";
	// reassign the first value
	arrNums3[0] = 7;
	std::cout << "1st value " << arrNums3[0] << "\n";

	//get array size
	std::cout << "Array size: " << sizeof(arrNums3) / sizeof(*arrNums3) << "\n";

	// first one we can look it as pages, second columns, third for rows
	int arrNums4[2][2][2] = {
		{{1,2}, {3,4}},	// this is the first page
		{{5,6}, {7,8}}	// this is the second page
	};

	// to access 8
	std::cout << arrNums4[1][1][1] << std::endl;



	/*
	* Vectors
	*/

	std::vector<int> vecRandNums(2);
	vecRandNums[0] = 10;
	vecRandNums[1] = 20;
	vecRandNums.push_back(30);
	std::cout << "Last index of vector: " << vecRandNums[vecRandNums.size() - 1] << "\n";

	std::string sSentence = "This is a random string";
	std::vector<std::string> vecWords;
	std::stringstream ss(sSentence);
	std::string sIndivStr;
	char cSpace = ' ';
	
	while (getline(ss, sIndivStr, cSpace)) {
		vecWords.push_back(sIndivStr);
	}

	for (int i = 0; i < vecWords.size(); ++i) {
		std::cout << vecWords[i] << "\n";
	}

	/*
	* Calculator
	* Enter calculation (e.x 5 + 6) : 10 - 6
	* Output: 10.0 - 6.0 = 4.0
	* + - * /
	*/

	/*
	double dbNum1 = 0, dbNum2 = 0;
	std::string sCalc = "";
	std::vector<std::string> vecNumbers;
	std::string sIndivNum;
	std::string Op = "";
	char cSpace = ' ';
	std::cout << "Enter an operation: (example: 5 + 6) ";
	getline(std::cin, sCalc);
	std::stringstream ns(sCalc);

	while (getline(ns, sIndivNum, cSpace)) {
		vecNumbers.push_back(sIndivNum);
	}

	for (int i = 0; i < vecNumbers.size(); ++i) {
		std::cout << vecNumbers[i];
	}
	*/

	/*
	dbNum1 = std::stod(vecNumbers[0]);
	dbNum2 = std::stod(vecNumbers[2]);
	Op = vecNumbers[1];
	*/

	/*
	double Result = 0;
	if (Op == "+") {
		Result = dbNum1 + dbNum2;
	}
	else if (Op == "-") {
		Result = dbNum1 - dbNum2;
	}
	else if (Op == "/") {
		Result = dbNum1 / dbNum2;
	}
	else if (Op == "*") {
		Result = dbNum1 / dbNum2;
	}
	else{
		Op = "";
		std::cout << "Please enter only +, -, /, *";
	}
	std::cout << Result << "\n";
	*/

	return 0;
}