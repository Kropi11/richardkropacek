#include <vector>
#include <string>
#include <iostream>
using namespace std;

string input;
std::vector<string> v;

void PrintVector() {
	std::cout << "The vector elements are : ";

	for (int i = 0; i < v.size(); i++){
		std::cout << v.at(i) << ' ';
	}
}

int main()
{
	cout << "Please, enter your number: " << endl;
	while((cin >> input) && input != "q") {
	v.push_back(input);
	}

	PrintVector();
	return 0;
}
