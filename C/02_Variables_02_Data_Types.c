#include <stdio.h>

int main() {
  
  // Fix the missing data types
  int studentRank;
  float studentFeeTotal;
  char studentGradeLetter;
  
  // No need to make any changes below here, use these as a hint to how each variable above should be declared
 studentRank = 1;
 studentFeeTotal = 100.56;
 studentGradeLetter = 'A';

 printf("Student's Rank in class: %dst\n", studentRank);
 printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
 printf("Student's Grade: %c\n", studentGradeLetter);

/*
Type / Description / Values
int	: a whole number	-2,147,483,648 to 2,147,483,647
정수값, (소수값 x)
float : a number with possible decimals	6 decimal places
double : a number with possible decimals	15 decimal places
char : stores one character (letter or number)	a single character
하나의 문자 또는 숫자
*/

}