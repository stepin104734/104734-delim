#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="my_name_is:edcast;future'skills";
  char *p;

  p = strtok (string,"_:;'");//this return's the first token of the string . i.e "my"
  while (p!= NULL)
  {
    printf ("%s\n",p);
    p = strtok(NULL, "_:;'");//NULL argument tell strtok function to continue tokenizing the previous string hence returns string "name"
  }
  return 0;
}
