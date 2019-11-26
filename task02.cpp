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
int bit;
int inv = 0;

//otáčení bitů
	byte flipBits(byte number) {
		byte inv = 0;
		for (int i = 0; i < 8; i++)
		{
			bit = number >> i;

			if (bit & 1)
			{
				bit = 1;
			}
			else
			{
				bit = 0;

			}
		inv |= bit << (7 - i);
	}
	return inv;
}
//vypíše bity
	byte Bits(byte number) {
		byte inv = 0;
		for (int i = 7; i >= 0; i--)
		{
			bit = number >> i;
			if (bit & 1)
			{
				bit = 1;
			}
			else
			{
				bit = 0;
			}
			inv |= bit << (i);
		}
		return inv;
}
	void readDate(int* y, int* m, int* d, byte b1, byte b2) {
		*m = b2 & 0b1111;
		*d = b2 >> 4 | ((b1 & 0b1) << 4);
		*y = flipBits(b1 >> 1) >> 1;
	}
	int main() {
		FILE* fd;
		errno_t err;
		err = fopen_s(&fd, "task02_text.txt", "rb");
		
		fread(data, 8, 1, fd);
		int y, m, d;
		readDate(&y, &m, &d, data[0], data[1]);
		printf("John Doe je narozen: %d.%d.%d\n", d, m, y + 1900);
		
		fread(data, 8, 1, fd);
		readDate(&y, &m, &d, data[0], data[1]);
		printf("Sam Sepiol je narozen: %d.%d.%d\n", d, m, flipBits(y) + 1900);
	}
