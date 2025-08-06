#include <stdio.h>

int main(void)
{
	printf("Please enter a sentence (max 100 chars) >> ");
	char text[100] = { "" };
	fgets(text, sizeof(text), stdin);

	int lenght = 0;

	for (int j = 0; j < 100; j++)
	{
		if (text[j] == '\0')
		{
			lenght = j;
			break;
		}
	}

	for (int i = lenght-1; i >= 0; i--)
	{
		printf("%c", text[i]);
	}
	return 0;
}