#include <stdio.h>
#include <string.h>

int main()
{
int n,t;
char arr[1100];
fgets(arr, 1100, stdin); //input kata
n= strlen(arr);
for(t=n-1;t>=0;t--)
printf("%c", arr[t]); //print dr blkg
printf("\n");
}
