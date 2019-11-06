/*
Decode the task02.dat file and find out the birth dates of John Doe and Sam Sepiol.
format: N records of 6 bytes:
  byte 1-2: birth date yyyyyyyd ddddmmmm (year of birth LSB - 1900)
  byte 3-6: height (float LSB)
separator 0xFF (after N records)
name1|name2|...|nameN|
*/


#include <cstdio>
#define byte unsigned char

byte data[8];

int main() {
	FILE* fd;
	errno_t err;
	err = fopen_s(&fd, "task02_text.txt", "rb");
	fread(data, 8, 1, fd);

//jedná se o mou pomlcku, abych viděl jaké hodnoty se nachází naj jednotlivých bytovích kombinacích
	for(int i = 0; i<8; i++){
	printf("%d", data[i]);
	printf("   --->   ");
	printf("%X %X\n", data[i]);
	}
}
//Nevím zcela na jekém principu fungují bitové posuny, a jak je v tomto programu následně implementovat.
