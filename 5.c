#include <stdio.h>

int main(){
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	
if(year % 400==0){
	printf("It is leap year.");
}
else if(year % 4==0 && year%100!=0){
	printf("It is leap year.");
}
else{
	printf("It is not an leap year.");
}
	
}