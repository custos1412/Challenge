#include<stdio.h>
#include<string.h>

int input(char* Q);
void decode(char* Q, char s, int n);

int main(void)
{
	char Q[100];
	int n;

	n = input(Q);
	decode(Q, '0', n);
	decode(Q, '1', n);

	return 0;
}

int input(char* Q)
{
	scanf("%s", Q);

	return strlen(Q);
}
void decode(char* Q, char s, int n)
{
	char P[1000];
	P[0] = s;
	int i;

	for (i = 0; i < n-1; i++)
	{
		
		if (i == 0)
		{
			P[i + 1] = Q[i] - P[i] + '0';
		}
		else
		{
			P[i + 1] = Q[i] - P[i - 1] - P[i] + '0' + '0';
		}

		if (P[i + 1] != '0' && P[i + 1] != '1')
		{
			break;
		}
	}
	if (i == n - 1 && P[n-2]+P[n-1]-'0' == Q[n-1])
	{
		P[n] = 0;
		printf("%s ", P);
	}
	else
	{
		printf("NONE ");
	}

	return;
}