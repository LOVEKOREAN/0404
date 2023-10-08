#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input;
 int sec, min, hour;
 
 printf("input second:\n");
 scanf("%d", &input);
 
 sec= input%60;
 min= (input%3600)/60;
 hour= input/3600;
 
 printf("the time is %d : %d : %d\n", hour, min, sec);

  
    
  
  system("PAUSE");	
  return 0;
}
