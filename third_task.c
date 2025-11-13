/* Task description:Substrings of strings
Please visit the homepage for more detail and visuals
Write a function that receives a string and copies only
a part of it, specified by a starting and an ending index!
(The received string must be intact.)
The start index is the position of the first character
to keep and the end index is the position of the first character
that it not to keep. (Hence, the interval is closed from
the left and open from the right).
When the start index is less than 0, or the end index is
 greater than the length of the string, write an error
 message to the screen before returning with invalid pointer!
The function should return with the address of a dynamically
 allocated string containing the substring to keep.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* substring(char* original, int start, int end)
{
  if (start<0 || end> strlen(original)){
    printf("Wrong numbers. Try again)");
    return NULL;
  }
  else {
    int len= end-start +1;
    char* sub=(char*)malloc(len);
    for (int i= start-1,j=0; i<end-1; i++,j++){
        sub[j]=original[i];
      
    }
    sub[len-1]='\0';
    return sub;
  }
}

int main()
{
  char string[101] = "This is a text not containing anything rude or harsh"; // this is an array on the stack, mutable!
  char *substr = substring(string, 5, 10);
  printf("%s", substr);
  free(substr);

  return 0;
}
