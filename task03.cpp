/*
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

int hasArg(char checkChar, int argc, char* argv[]) {
	bool relust = false;
	for (int i = 1; i <= argc; i++) {
		char* arg = argv[i];
		if (arg[0] != '-') continue;
		if (arg[1] == checkChar) return i;
	}
	return 0;
}

int readFile(char* argv[]) {
	int sum = 0;
	int number;
	FILE* fp;
	errno_t err = fopen_s(&fp, argv[i++], "r");
	while (true) {
		if (fscanf_s(fp, "%d", &number) == EOF) {
			break;
		}
		sum += number;
	}
	return sum;
}

int main(int argc, char* argv[]) {
	int pos;
	if (argc > 1) {
		pos = hasArg('v', argc, argv);
		if (pos > 0) {
			pos = hasArg('i', argc, argv);
			if (pos > 0) {
				std::cout << "\nSum of " << sizeof(int) << " numbers from standard input is " << result(argc, argv) << "\n\n";
			}
			pos = hasArg('f', argc, argv);
			if (pos > 0) {
				std::cout << "\nSum of numbers in " << argv[i++] << " is " << result(argc, argv) << "\n\n";
			}
			else {
				std::cout << "\nSum of " << sizeof(int) << " arguments is " << result(argc, argv) << "\n\n";
			}
		}
		pos = hasArg('f', argc, argv);
		if (pos > 0) {
			std::cout << "\nSum of numbers in " << argv[i++] << " is " << result(argc, argv) << "\n\n";
		}
	}
	else {
			printf("%s", "Priklad nelze vypocitat.");
	}
}
