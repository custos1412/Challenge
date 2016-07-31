#include <stdio.h>

char init(char *card);
void input(char *card);
void reverse(char *card, int s, int e);
void prt(char *card);

int main(void)
{
	char card[1000];

	init(card);
	input(card);
	prt(card);

	return 0;
}

char init(char *card)
{
	for (int i = 1; i < 21; i++)
	{
		card[i] = i;
	}

	return *card;
}
void input(char *card)
{
	int a, b;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d%d", &a, &b);
		reverse(card, a, b);
	}
	
	return;
}
void reverse(char *card, int s, int e)
{
	char temp[1000];

	for (int i = 0; i <= e-s; i++)
	{
		temp[i] = card[e - i];
	}
	for (int i = 0; i <= e - s; i++)
	{
		card[s + i] = temp[i];
	}

	return;
}
void prt(char *card)
{
	for (int i = 1; i < 21; i++)
	{
		printf("%d ", card[i]);
	}

	return;
}