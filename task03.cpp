/*
  Write a "task03" program for basic adding. It should handle -f, -i and -v parameters
  task03 -f data.txt // outputs sum of numbers in data.txt
  task03 -i // interactive mode: sums numbers from standard input until empty input provided
  task03 4 7 12 // outputs sum of any number of arguments (23 in this case)
  implement verbose mode -v, which outputs add/*
  Write a "task03" program for basic adding. It should handle -f, -i and -v parameters
  task03 -f data.txt // outputs sum of numbers in data.txt
  task03 -i // interactive mode: sums numbers from standard input until empty input provided
  task03 4 7 12 // outputs sum of any number of arguments (23 in this case)
  implement verbose mode -v, which outputs additional info about arguments, i.e.
	task03 -f data.txt -v // should print "sum of numbers in data.txt is 13"
	task03 -v -f data.txt // same result
	task03 -v -i // should print like "sum of 7 numbers from standard input is 38"
	task03 2 2 13 6 -v // should print "sum of 4 arguments is 23"
	task03 -v 13 4 // should print "sum of 2 arguments is 17"
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

int i;
char s[255];


int length(int arr[]) {
	return sizeof(int);
}
int result(int argc, char* argv[]) {
	int sum = 0;
	for (int i = 1; argv[i]; ++i) {
		sum += atoi(argv[i]);
	}
	return sum;
}

void readFile(int arr[]) {
	int n = 0;
	ifstream myfile("data.txt");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	myfile.close;
}

int main(int argc, char* argv[]) {

// task03 - f data.txt - v
	if (strncmp(argv[1], "-f", 4) == 0) {
		std::cout << "\nSum of numbers in " << argv[2] << " is " << result << "\n\n";
	}

	else if (strncmp(argv[1], "-v", 4) == 0) {
// task03 -v -f data.txt
		if (strncmp(argv[2], "-f", 4) == 0) {
			std::cout << "\nSum of numbers in " << argv[3] << " is " << result << "\n\n";
		}
// task03 -v -i 
		else if (strncmp(argv[2], "-i", 4) == 0) {
			std::cout << "\nSum of " << sizeof(int) << " numbers from standard input is " << result << "\n\n";
		}
// task03 -v 13 4 
		else {
			std::cout << "\nSum of " << sizeof(int) << " arguments is " << result << "\n\n";
		}
	}
	else {
		std::cout << "\nSum of " << sizeof(int) << " arguments is " << result << "\n\n";
		}
}
itional info about arguments, i.e.
	task03 -f data.txt -v // should print "sum of numbers in data.txt is 13"
	task03 -v -f data.txt // same result
	task03 -v -i // should print like "sum of 7 numbers from standard input is 38"
	task03 2 2 13 6 -v // should print "sum of 4 arguments is 23"
	task03 -v 13 4 // should print "sum of 2 arguments is 17"
*/

#include <iostream> 
#include <string>
#include <sstream>
#include <fstream>  

int data[] = {5,3,7,8,13};
int i;
char s[255];


int length(int arr[]) {
	return sizeof(int);
}

int main(int argc, char* argv[]) {
	int sum = 0;
	for (int i = 1; argv[i]; ++i) {
		sum += atoi(argv[i]);
	}
	std::cout << "\nSum of " << sizeof(int) << " numbers from standard input is " << sum << "\n\n";
}
