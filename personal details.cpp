#include <stdio.h>
int main() {
char name[40];
int age;
char address[40];
char PhoneNumber[15];
scanf(" %[^\n]s",name);

 scanf(" %[^\n]",&PhoneNumber);
 printf("\nName: %s\n",name);
 printf("Age: %d\n",age);
 printf("Address: %s\n",address);
 printf("Phone Number: %s\n",PhoneNumber); 
	  return 0;
}
