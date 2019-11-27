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