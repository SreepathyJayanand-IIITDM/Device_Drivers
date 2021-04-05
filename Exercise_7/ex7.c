#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   
   fptr = fopen("/var/log/syslog","w");

   if(fptr == NULL)
   {
      printf("Error! Unable to open file \n");   
      exit(1);             
   }
   fprintf(fptr,"%s","Miracle happened!! File opened in write mode \n");
   printf("Successful in opening in write mode\n");
   fclose(fptr);

   return 0;
}
