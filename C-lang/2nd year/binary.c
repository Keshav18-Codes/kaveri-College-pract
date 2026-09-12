#include<stdio.h>
#include<string.h>
typedef struct city
{
	char name[20];
	int code;
}city;
city c[20];
void search(city c[20],int n);
void main()
{
	FILE *fp;
	int i;
	fp = fopen("a.txt","r");
	for(i=0;!feof(fp);i++)
	{
		fscanf(fp,"%s %d",c[i].name,&c[i].code);
	}
	search(c,i-1);
	fclose(fp);
}

void search(city c[20],int n)
{
	int index,i,flag=0,low=0,high=n-1,mid;
	char str[20];
	printf("ENter city:");
	scanf("%s",&str);
         
	while(low<=high)
	{
		mid=(low+high)/2;
		if(strcmp(str,c[mid].name)==0)
		{
			flag=1;
			break;
		}
		else
		{
			if(strcmp(str,c[mid].name)>0)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	if(flag==1)
	{
		printf("City is present! pincode is %d",c[i].code);
	}
	else
	{
		printf("Not present");
	}
}

