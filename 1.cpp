#include <stdio.h>
//#include <iostream>

//#include "2.h"

void setsize(int index, int size);

void getsize() {
	int num = 15, size = 15;
	//scanf("%d %d", &num, &size);
	//cin >> num;
	setsize(num, size);
}

int main()
{
	int num1 = 10, size1 = 0;
	setsize(num1, size1);
	printf("%s How are you\n", "Soumya");
}

const int num_sizes = 10;
int sizes[num_sizes];

void setsize(int index, int size) {
	sizes[index] = size;
}
