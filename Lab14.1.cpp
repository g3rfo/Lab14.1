#include <iostream>
#include <stdio.h>
#define size 10

int main()
{
	int array[size];

	int min = 0, max = 0, distance = 0, i, * pointerMin = array, * pointerMax = array;

	for (i = 0; i < size; i++) {
		printf("Enter %d number: ", i + 1);
		scanf_s("%d", &array[i]);
	}

	min = *pointerMin;
	max = *pointerMax;

	for (i = 1; i < size; i++) {
		if (min > array[i]) {
			pointerMin = &array[i];
			min = *pointerMin;
		}
		if (max < array[i]) {
			pointerMax = &array[i];
			max = *pointerMax;
		}
	}

	printf("min: %d\nmax: %d\n", min, max);

	if (pointerMin < pointerMax) {
		while (pointerMin < pointerMax) {
			distance++;
			pointerMin++;
		}
	}
	else if (pointerMin > pointerMax) {
		while (pointerMax < pointerMin) {
			distance++;
			pointerMax++;
		}
	}
	else {
		printf("All numbers are equal");
		return 0;
	}

	printf("The distance between the first foundpair is: % d", distance);

}
