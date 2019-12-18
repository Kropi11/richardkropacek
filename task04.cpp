#include <iostream>
#include <cstring>

using namespace std;

struct Animal {
	const char* Name;
	Animal(const char* Name){
		this->Name = Name;
	}
	virtual const char* whatDoesItSay() {
		sprintf_s(buffer,"%s says ",Name);
		return buffer;
	}

protected:
	char buffer[255];
};

struct Dog : Animal {
	const char* Sound;
		Dog(const char* Name, const char* Sound) : Animal(Name) {
		this->Sound = Sound;
	}
	const char* whatDoesItSay() {
		Animal::whatDoesItSay();
		strcat_s(buffer, Sound);
		return buffer;
	}
};

struct Fox : Animal {
	const char* Sound;
		Fox(const char* Name, const char* Sound) : Animal(Name) {
		this->Sound = Sound;
	}
	const char* whatDoesItSay() {
		Animal::whatDoesItSay();
		strcat_s(buffer, Sound);
		return buffer;
	}
};

int main() {
	Animal* animals[] = {
	  new Dog("dog", "woof"),
	  new Fox("fox", "ringidingidingidingiding")
	};
		for (Animal* animal : animals) {
			puts(animal->whatDoesItSay());
		}
	// dog says woof
	// fox says ringidingidingidingiding
}
