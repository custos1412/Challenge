#include<stdio.h>
#include<algorithm>

using namespace std;

struct ball {
	int C;
	int S;
}player[200005];

int map[5][200005];

void input(int n);
void sum();

int main(void)
{
	int n;

	input(n);
	sum();

	return 0;
}

void input(int n)
{
	scanf_s("%d", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &player[i].C, &player[i].S);
		map[player[i].C][color[player[i].C]++] = player[i].S;
	}

	return;
}
void init()
{
	for (int i = 0; i < 5; i++)
	{
		std::sort(map[i], map[i] + color[i]);
	}

	return;
}
void sum()
{
	return;
}