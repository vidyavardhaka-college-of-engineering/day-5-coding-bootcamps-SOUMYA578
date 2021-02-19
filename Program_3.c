//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
  int len, flag=1,i;
	scanf("%s", str);

len = strlen(str);
int lastIndex = len-1;
for(i=0;i<len/2;i++)
{
  if(str[i] != str[lastIndex-i])
  {flag =0;
  break;
  }
}
	//Write your code here
	if (flag == 1)
     printf("Palindrome\n");
  else
     printf("it's not\n");
	return 0;
}
