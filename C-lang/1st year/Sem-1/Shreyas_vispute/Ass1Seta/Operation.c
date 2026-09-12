#include<stdio.h>

void perform_operations(int *a, int *b){
int sum, diff,prod,mod;
float div;
sum=*a + *b;
diff=*a - *b;
prod=*a * *b;
div=(float)*a / *b;
mod=*a % *b;

printf("Sum:%d\n", sum);
printf("Difference:%d\n", diff);
printf("Product: %d\n", prod);
printf("Division:%.2f\n",div);
printf("Modulus:%d\n",mod);
}

int main() {
	int num1,num2;
	printf("Enter two integers:");
	scanf("%d%d",&num1,&num2);

	perform_operations(&num1,&num2);
	
	return 0;
}
