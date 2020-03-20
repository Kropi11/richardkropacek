//Zatím není funkční vkládání vstupu do vectoru, problém se pokusím co nejdříve vyřešit.
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print(vector<char> const &input)
{
    for (auto const& i: input) {
        std::cout << i << " ";
    }
}
int main()
{
	string input;
	vector<char> v;

	cout << "Please, enter your number: " << endl;
	while(getline(cin,input) && input != "q"){
	//v.push_back(input);
	}
 	getchar();
	return 0;
}
