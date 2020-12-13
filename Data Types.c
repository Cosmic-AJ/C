// Question 1: Write a C program to print the minimum and maximum range of basic data types in C.
// Question 2 : Write a program to print the size and range for all the data type with its modifiers supported by C.

#include <stdio.h>
#include <limits.h>
#include <float.h>
void main(){  
   printf("Question 1: Write a C program to print the minimum and maximum range of basic data types in C.\n");
   printf("Ans.\n");
   printf("Range of signed char   is from %d to %d\n",CHAR_MIN,CHAR_MAX);
   printf("Range of unsigned char is from 0   to %d\n",UCHAR_MAX);
   printf("______________________________________________________________________________________\n");
   printf("Range of signed int   is from %d to %d\n",INT_MIN,INT_MAX);
   printf("Range of unsigned int is from 0 to %u\n",UINT_MAX);    
   printf("______________________________________________________________________________________\n");
   printf("Range of signed float is from %g to %g\n",FLT_MIN,FLT_MAX);
   printf("______________________________________________________________________________________\n");
   printf("Range of signed double is from %g to %g\n",DBL_MIN,DBL_MAX);
   printf("Range of signed long double is from %g to %g\n",LDBL_MIN,LDBL_MAX);
   printf("______________________________________________________________________________________\n"); 
   printf("Range of signed short is from %hi to %hi\n",SHRT_MIN,SHRT_MAX);
   printf("Range of unsigned short is from 0 to %hu\n",USHRT_MAX);
   printf("______________________________________________________________________________________\n");
   printf("Range of signed long is from %lld to %lld\n",LONG_MIN,LONG_MAX);
   printf("Range of unsigned long is from 0 to %g\n",ULONG_MAX);
   printf("______________________________________________________________________________________\n");
   printf("Range of signed long long is from %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
   printf("Range of unsigned signed long long is from 0 to %llu\n",ULONG_LONG_MAX);
   printf("______________________________________________________________________________________\n\n");
   
   printf("Question 2 : Write a program to print the size and range for all the data type with its modifiers supported by c.\n");
   printf("Ans.\n"); 
   printf("Type              Size\n");
   printf("____________________________\n");
   printf("Signed Char        %d\n",sizeof(signed char));
   printf("Unsigned char      %d\n",sizeof(unsigned char));
   printf("Signed Int         %d\n",sizeof(signed int));
   printf("Unsigned int       %d\n",sizeof(unsigned int));
   printf("Float              %d\n",sizeof(float));
   printf("Double             %d\n",sizeof(double));
   printf("Long Double        %d\n",sizeof(long double)); 
   printf("Signed Short       %d\n",sizeof(short));
   printf("Unsigned short     %d\n",sizeof(unsigned short));
   printf("Signed Long        %d\n",sizeof(long));
   printf("Unsigned long      %d\n",sizeof(unsigned long));
   printf("Long Long          %d\n",sizeof(long long));
   printf("Unsigned Long Long %u\n",sizeof(unsigned long long));
   getch();
}
