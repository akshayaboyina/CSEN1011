#include<stdio,h>
int main()
{int number, i = 0, next, first = 0, second = 1;
   printf("\ please Enter the Range Number: ");
   scanf("%d",&number);
   while(i < number){
      if(i <= 1){
	     next = i;
      }
      else{
	    next = first + second;
	    first = second;
	    second = Next;
      }
      printf("%d \t",Next);
      i++
    }
	return 0;
	
}


