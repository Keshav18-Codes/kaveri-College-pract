#include<stdio.h>
void DisplayMatrix(int *matrix , int m,int n){
    printf("Matrix elements :");
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ",matrix[i*n+j]);
            }   
            printf("\n");
            }
}
void findMax(int *matrix,int m,int n){
    int max = matrix[0];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(matrix[i*n+j] > max){
                max = matrix[i*n+j];
                }
                }
                }
                printf("Maximum element in the matrix is : %d\n",max);
}
int main(){
    int m,n;
    printf("Enter the number of rows (m): ");
    scanf("%d",&m);
    printf("Enter the number of columns (n):");
    scanf("%d",&n);

    int matrix[m][n];
    printf("Enter the elements of the matrix :\n");
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&matrix[i][j]);
            }
            }
            DisplayMatrix((int*)matrix,m,n);
            findMax((int*)matrix,m,n);
            return 0;
}