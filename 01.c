#include <stdio.h>
#include <stdlib.h>

int main()
{//basic data types
    //number no need of quotation marks %d
    int age = 40;
  //decimal here we can also write 3.0 but 3 is a integer while 3.0/4.6 is a double %f
    double gpa=3.4;
    //now characters for this we can store a single variable %c
    char grade='A';
    // string:here we tell c we want a bunch of characters to be grouped together( special type of data type )%s( use %s to print out a bunch of data)
    char phrase[] ="jasir";
     //to print out these values

     printf("%d\n", age);
printf("%f\n",gpa);
printf("%c\n",grade);
printf("%s\n",phrase);
// we can directly make use of of print f to print of different date types but we have to specify them initially
//eg=1
printf("%d\n",500);
printf(" my favourte number is %d\n",1000);
//eg2
printf("%f\n",3.56);
printf("i have got %f gpa in the sem exam\n",8.76);
//eg=3
printf("i like %s very much\n","moutain climbing");
//eg=4
printf("i love %c grade\n ","a");
//%d=number(int)    ,%f=decimal number/it can also be 2 digit(double)  ,%c=a single character(char)   ,%s=a bunch of data (char  [])
//doing basic math operations
//addition or subtraction
printf("%f\n",5.6+7.8);
printf("%d\n",5+7);
//multiplication
printf("%d\n",5*3);
//division
printf("%d\n",20/5);
printf("hello")























































    return 0;
}
