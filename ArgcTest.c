#include <stdio.h>

int main( int argc, char *argv[] )
{
   if( argc == 2 )
   {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if (argc == 5)
   {
      printf("One argument expected.\n");
  }/*
   else if( argc > 2 )
   {
      printf("Too many arguments supplied.\n");
  }*/

   else
   {
       printf("there is no argument\n");
   }
}
