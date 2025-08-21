#include<stdio.h>

int main(void)
{
  float first, second, res;
  int k=0;
  char operator;
  char answer='y';
  while(answer=='y') {
    if (k==0) {
      printf("[ ] Simple calc\n[ ] Enter a first number: ");
    }

    else {
      printf("\n[ ] Enter a first number: ");
    }

    scanf("%f",&first);
    printf("[ ] Enter a second number: ");
    if (first=="quit") {
      printf("[ ] Exiting... \n");
    }
    scanf("%f",&second);
    printf("[ ] Enter a operator: ");
    scanf(" %c",&operator);
    if (operator=='+') {
      res=first+second;
      printf("[-] Result = %f\n",res);
    }

    if (operator=='-') {
      res=first-second;
      printf("[-] Result = %f\n",res);
    }

    if (operator=='/') {
      if (second!=0) {
        res=first/second;
        printf("[-] Result = %f\n",res);
      }
    
      else {
        printf("[!] Error!\nExinitg prorgram!\n");
      }
    }

    if (operator=='*') {
      res=first*second;
      printf("[-] Result = %f\n",res);
    }
  
    printf("[?] Continue calcing? (y/n) ");
    scanf(" %c",&answer);
    k=k+1;
  }
  printf("\n[-] Exiting...\n");
}

