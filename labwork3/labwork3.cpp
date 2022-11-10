#include <iostream>

#pragma region TASK1

//void min(double x, double y) {
//	if (x < y) printf("%.2f smaller than %.2f", x, y);
//
//	else if (x > y) printf("%.2f smaller than %.2f", y, x);
//
//	else printf("%.2f equals to %.2f", x, y);
//}

#pragma endregion

#pragma region TASK3

void charPrinter(char letter, int row, int column) {

	for (int i = 0; i < column; i++)
	{
		for (int i = 0; i < row; i++) printf("%c", letter);
		printf("\n");
	}
}

#pragma endregion

#pragma region TASK4

void harmonicMean(double x, double y) {

	printf("%f", 2 * x * y / (x + y));

}

#pragma endregion

#pragma region TASK5

void larger_of(double x, double y) {

	if (x > y) y = x;
	else x = y;
	printf("x = %.2f y = %.2f", x, y);
}

#pragma endregion

#pragma region TASK6

int compareAndSet(double x, double y, double z) {
	double smaller, middle, larger;

	if (x >= y && x >= z) {
		larger = x;
		if (y >= z)
		{
			middle = y;
			smaller = z;
		}
		else {
			middle = z;
			smaller = y;
		}
		printf("smaller = %.2f, middle = %.2f, larger = %.2f", smaller, middle, larger);
		return 0;
	}

	if (y >= x && y >= z) {
		larger = y;
		if (x >= z)
		{
			middle = x;
			smaller = z;
		}
		else {
			middle = z;
			smaller = x;
		}
		printf("smaller = %.2f, middle = %.2f, larger = %.2f", smaller, middle, larger);
		return 0;

	}
	if (z >= x && z >= y) {
		larger = z;
		if (y >= x)
		{
			middle = y;
			smaller = x;
		}
		else {
			middle = x;
			smaller = y;
		}
		printf("smaller = %.2f, middle = %.2f, larger = %.2f", smaller, middle, larger);
		return 0;
	}

}

#pragma endregion

#pragma region TASK7

//void charReader() {
//
//	char ch;
//	int order;
//	const char* info;
//
//	while ((ch = getchar()) != '\n') {
//		printf("%c", ch);
//
//		if (ch >= 'a' && ch <= 'z')   /* Converting all to uppercase */
//			ch = (ch - 'a' + 'A');
//		if (ch >= 'A' && ch <= 'Z')
//			order = ch - 'A' + 1;     /* Position of letter in alphabet */
//		else
//			order = -1;               /* Not in alphabet */
//
//		if (order != -1)
//			info = "is a letter";
//		else
//			info = "is not a letter";
//
//		printf(" %16s: %4d \n", info, order);
//	}
//}

#pragma endregion

#pragma region TASK11

void Fibonacci(int n) {

	int x = 0, y = 1, z = 1;
	for (int i = 0; i < n; i++) {
		if (i == n-1) printf("%d", x);
		else printf("%d, ", x);
		x = y;
		y = z;
		z = x + y;
	}
}

#pragma endregion






int main()
{
#pragma region task1_testing

	//min(5, 10);
	//min(5.278, 2.542);
	//min(0, 0);

#pragma endregion

#pragma region task3_testing

	//charPrinter('a', 3, 4);

#pragma endregion

#pragma region task4_testing

	//harmonicMean(7, 2);

#pragma endregion

#pragma region task5_testing

	//larger_of(10, 15);
	//larger_of(15, 10);
	//larger_of(10, 10);

#pragma endregion

#pragma region task6_testing

	// if all numbers are different there are 6 possibilities:

	//compareAndSet(5, 10, 15);
	//compareAndSet(5, 15, 10);
	//compareAndSet(15, 10, 5);
	//compareAndSet(15, 5, 10);
	//compareAndSet(10, 5, 15);
	//compareAndSet(10, 15, 5);

	// if 2 numbers are equal there are 6 possibilities:

	//compareAndSet(5, 5, 15);
	//compareAndSet(5, 5, 0);
	//compareAndSet(5, 15, 5);
	//compareAndSet(5, 0, 5);
	//compareAndSet(15, 5, 5);
	//compareAndSet(0, 5, 5);

	// if 3 numbers are equal there is 1 possibility:

	//compareAndSet(5, 5, 5);

	// so, you can test all possibilities











#pragma endregion

#pragma region task7_testing

	//charReader();

#pragma endregion

#pragma region task11_testing

	Fibonacci(7);

#pragma endregion
}

