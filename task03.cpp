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


using namespace std;
int sum = 0;
int pocet = 0;
string line;
string input;

int main(int argc, char* argv[]) {

	printf("%s", "\n\n-----------------------------------------------------------------------------\n");
	printf("%s", "| -f    --->   ?should print sum of numbers in data.txt is 13?              |\n");
	printf("%s", "| -v    --->   should print sum of 4 arguments is 23                        |\n");
	printf("%s", "| -v -f --->   ?same result?                                                |\n");
	printf("%s", "| -v -i --->   should print like sum of 7 numbers from standard input is 38 |\n");
	printf("%s", "-----------------------------------------------------------------------------\n");

	cin >> input;

	if (input == "-f")
	{
		printf("%s", "Zadejte hodnoty:\n");
		while (getline(cin, line))
		{
			stringstream ss(line);
			int tmp;

			if (ss >> tmp)
			{
				sum += tmp;
				pocet++;
			}
			else
			{
				break;
			}
			}
		std::ofstream outfile("data.txt");
		outfile << sum << std::endl;
		outfile.close();
		cout << "\nSum of numbers is in data.txt --> " << sum << "\n\n";
	}
	else if(input == "-v")
	{
		while (getline(cin, line))
		{
			stringstream ss(line);
			int tmp;

			if (ss >> tmp)
			{
				sum += tmp;
				pocet++;
			}
			else
			{
				break;
			}
		}
		cout << "\nSum of " << pocet << " arguments is " << sum << "\n\n";
	}

	else if (input == "-v -f")
	{
		while (getline(cin, line))
		{
			stringstream ss(line);
			int tmp;

			if (ss >> tmp)
			{
				sum += tmp;
				pocet++;
			}
			else
			{
				break;
			}
		}
		cout << "\nSame result\n\n";
	}

	else if(input == "-v -i")
	{
		while (getline(cin, line))
		{
			stringstream ss(line);
			int tmp;

			if (ss >> tmp)
			{
				sum += tmp;
				pocet++;
			}
			else
			{
				break;
			}
		}
		cout << "\nSum of " << pocet << " numbers from standard input is " << sum << "\n\n";
	}
}
