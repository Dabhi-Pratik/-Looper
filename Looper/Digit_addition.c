#include<stdio.h>

int main(){
	
	 int digit;
	 
	 printf("Enter Digit:");
	 scanf("%d",&digit);
	 
	 
	 int last_digit = digit%10;
	 
	 while( digit > 10 ){
	 	
	 	  digit = digit/10;
	 }
	 
	 int sum = last_digit + digit;
	 printf("The sum of the first and the last digit:%d",sum);
	  
	return 0;
}
