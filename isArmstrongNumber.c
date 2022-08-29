#include <stdio.h>
#include <math.h>

int countNumberOfDigits(int number) {
   // Calculating the number of digits.
    while (number > 0) {
  // This will decrease the order of the number in each iteration.
        number = number / 10; 
        number_of_digits++;
    }
    
    return number_of_digits;
}
int isArmstrong (int number) {
    int current_digit, sum = 0, num = number, number_of_digits;
    number_of_digits = countNumberOfDigits(num)
    while (num > 0) {
        current_digit = num % 10;
     // Calculating the power of the remainder using pow() and storing in sum.
        sum = sum + pow(current_digit, number_of_digits);
        num = num / 10;
    }
    // return 1 if the number is Armstrong else return 0.
    if (sum == number)
        return 1;
    else
        return 0;
}
 
int main() {
    int number, isArmstrongNumber;
    scanf("%d", &number);
    isArmstrongNumber = isArmstrong(number);
    if(isArmstrongNumber == 1)
        printf("%d is an Armstrong Number.", number);
    else
        printf("%d is not an Armstrong Number.", number);
 
    return 0;
}
