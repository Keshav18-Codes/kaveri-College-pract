#include<stdio.h>
int isPrime(int num){
    if (num<2) return 0;
    for (int i=2; i*i<=num; i++) {
        if (num%i==0) return 0;
    }
    return 1;
    }

void storePrime(int *arr ,int n,int *primeArr, int *primeCount){
    for (int i=0; i<n; i++) {
        if (isPrime(*(arr + i))){
            *(primeArr + *primeCount) = *(arr + i);
            (*primeCount)++;
            } 
        }
    }

void displayArray(int *arr , int count){
    printf("Prime numbers in the array are:");
    for (int i=0;i<count ;i++){
        printf("%d ",*(arr + i));
        }
        printf("\n");
}
int main(){
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n],primeaArr[n],primeCount=0;
    printf("Enter the elements of the array:");
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
        }
        storePrime(arr,n,primeaArr,&primeCount);
        displayArray(primeaArr,primeCount);
        return 0;
}