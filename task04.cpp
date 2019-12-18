#include <iostream>

using namespace std;

struct Animal {
	const char* Name;
	const char* Sound;
	virtual const char* whatDoesItSay() {
		sprintf_s(buffer,"%s dělá %s",Name, Sound);
		return buffer;
	}

protected:
	char buffer[48];
};

struct Dog : Animal {
	this.Name;
	this.Sound;
};

struct Fox : Animal {
	this.Name;
	this.Sound;
};

int main() {
	Animal* animals[] = {
	  new Dog("dog", "woof"),
	  new Fox("fox", "ringidingidingidingiding")
	};
		for (Animal* animal : animals) {
			animal->whatDoesItSay();
		}
	// dog says woof
	// fox says ringidingidingidingiding
}
