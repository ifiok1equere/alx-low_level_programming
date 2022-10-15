 #include <stdio.h>
/**
  *main - function capitalize all the alphabets
  *Description - code uses a for loop to capitalize all alphebetic letters
  *Return: returns an integer
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
