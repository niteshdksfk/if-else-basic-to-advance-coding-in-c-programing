#include<stdio.h>
int main(){
int n1,n2,n3;
printf("Enter three number i will tell you gretest of them: \n");
printf("Enter 1st number n1: ");
scanf("%d",&n1);
printf("Enter 2nd number n2: ");
scanf("%d",&n2);
printf("Enter 3rd number n3: ");
scanf("%d",&n3);
if(n1>n2&&n1>n3){
	printf("1st number n1 is greatest which is: %d",n1);
}
if(n2>n1&&n2>n3){
	printf("2nd number n2 is greatest which is: %d",n2);
}
if(n1==n2&&n2==n3){
	printf("all three are same");
}
if(n3>n2&&n3>n1){
	printf("3rd number n3 is gretest which is: %d",n3);
}	

	return 0;
}
