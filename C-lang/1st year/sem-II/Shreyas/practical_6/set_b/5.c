#include<stdio.h>
#include<string.h>
void swap(char *x,char *y)
{
char temp=*x;
*x=*y;
*y=temp;
}
void permute(char *str, int l,int r)
{
int i;
if(l==r)
{
 printf("%s\n",str);
}
else
{
 for(i=l;i<=r;i++)
 {
  swap((str+l),(str+i));
  permute(str,l+1,r);
  swap((str+l),(str+i));
 }
}
}
int main()
{
char str[]="ABC";
int n=strlen(str);
printf("all permutations of the string are:\n");
permute(str,0,n-1);
return 0;
}

