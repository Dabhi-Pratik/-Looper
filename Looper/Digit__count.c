#include<stdio.h>

int main(){
   
    int num;
     
     printf("Enter Digit:");
     scanf("%d",&num);
    
	int count=0;
	
	 while( num > 0){
	 	 
	 	   num = num/10;
			count++; 
	 }
	 
	 printf("Digit :%d",count);
		

	return 0;
}
