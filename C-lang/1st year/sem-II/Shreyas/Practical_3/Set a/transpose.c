#include<stdio.h>
void trasposeMatrix(int *A,int*B,int m,int n){
    for (int i =0;i<m;i++){
        for (int j =0;j<n;j++){
            *(B+j*m+i)=*(A+i*n+j);
            }
    }
}
void displayMatrix(int* matrix , int m,int n){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(matrix + i * n + j));
            }
            printf("\n");
            }
}
int main(){
    int m,n;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&m,&n);
    int A[m][n],B[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m * n; i++) {   
        for(int j=0;j<n;j++){
            printf("Enter Elements A[%d][%d]:",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
        }
        trasposeMatrix((int*)A,(int*)B,m,n);
        printf("Transpose matrix B:\n");
        displayMatrix((int*)B,m,n);
        return 0;
    }