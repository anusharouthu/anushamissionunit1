//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	int x, n;
	x = x1 - x2;
	n = x2 + (x / 2);
    return n;
}

//Most significant digits
int MSD(long long number)
{
	long long reverse = 0;
	while (number != 0)
	{
		reverse = reverse * 10 + number % 10;
		number = number / 10;
	}
	reverse = reverse % 10;
	return reverse;
}

// sum of most significant digits of non-negative integers.
//
int sumOfMSDs(int num1, int num2) {
	int Sum = 0;
	Sum = MSD(num1) + MSD(num2);
    return Sum;
}

//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int i = 0, sumone = 0;
	for (i = 5; i >= 0; i--)
	{
		sum[i] = sumone + num1[i - 1] + num2[i - 1];
		sumone = sum[i] / 10;
		sum[i] = sum[i] % 10;
	}
}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
    
}
