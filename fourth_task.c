/* Task description:Removing parts from strings
Visit HP too!

Write the inverse of the previous function: the part delimited 
by the start and end indices should be removed from the original 
text, and the rest is kept! 
The function should not modify the source string received as a 
parameter, a brand new string should be created dynamically, and 
returned by the function.

Write a C program to demonstrate the usage of the function. 
Don't forget to release the memory at the end.


*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* skibidi(char* source, int start, int end){
  int len= strlen(source)-(end-start);
  char* nosub=(char*)malloc(len+1);
  int j=0;
  for(int i=start; i<end; i++){
      nosub[j]=source[i];
      j++;
  }
  return nosub; 
}

int main(){
  char* s="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
  char* j=skibidi(s,2,9);
  printf("%s", j);
  free(j);
  return 0;
}
