#include<stdio.h>
void printPat(int n);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
    printPat(n);
    printf("");
	}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method*/
void printPat(int n)
{
  int i,j,k;
  for(i=n;i>0;i--){
      for(j=n;j>0;j--){
      	for(k=0;k<i;k++){
		 printf("%d ",j);
		  }
      }
      printf("$");
  } 
}
