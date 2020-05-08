#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initCage();
int isEscapable();
int isExit(int x, int y);
int isMoveable(int x, int y);
int chooseDirection(int x, int y);

int offset[][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };
int cage[100][100];
int size;

int main()
{
	int testCase = 10000;
	int cnt = 0;
	srand((unsigned int)time(NULL));
	scanf("%d", &size);

	while (testCase--)
	{
		initCage();
		if (isEscapable())
			cnt++;
	}

	printf("%.4f", cnt / 10000.0);

	return 0;
}

void initCage()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cage[i][j] = 0;
		}
	}
}

int isEscapable()
{
	int x = size / 2, y = size / 2;

	while (1)
	{
		cage[x][y] = 1;
		if (isExit(x, y))
			return 1;
		if (!isMoveable(x, y))
			return 0;
		int direction = chooseDirection(x, y);
		x += offset[direction][0];
		y += offset[direction][1];
	}

	return 0;
}

int isExit(int x, int y)
{
	if (x == 0 || y == 0 || x == size - 1 || y == size - 1)
		return 1;
	return 0;
}

int isMoveable(int x, int y)
{
	if (cage[x - 1][y] && cage[x][y + 1] && cage[x + 1][y] && cage[x][y - 1])
		return 0;
	return 1;
}

int chooseDirection(int x, int y)
{
	while (1)
	{
		int direction = rand() % 4;
		int nextX = x + offset[direction][0];
		int nextY = y + offset[direction][1];
		if (cage[nextX][nextY] == 0)
			return direction;
	}
	return -1;
}
