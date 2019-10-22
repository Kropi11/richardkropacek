#include <cstdio>

const char* toUpper(char* input) {
	for (int i = 0;input[i] != 0;i++){
		if (input[i] <= 'z' && input[i] >= 'a'){
			input[i] -= 32;
		}
	}
	return input;
}

int main() {
	const char* input = "Hello, World!";
	puts(toUpper(input)); // should print HELLO, WORLD!
}
