#include <stdio.h>
#include <assert.h>

int Sum(float a, float b){
   float y;
   y=a+b;
   return (y);
}
int inc(float a, float b){
   float y;
   y=a-b;
   return (y);
}
int dec(float a, float b){
   float y;
   y=a/b;
   return (y);
}

int umn(float a, float b){
   float y;
   y=a*b;
   return (y);
}
int del(float a, float b){
   float y;
   y=a/b;
   return (y);
}

main() {
   float x,y,z;
   char sign;
   while (sign != '0') {
      printf("Sign: ");
      scanf("%c%*c", &sign);
      if (sign=='0'){ 
         break; 
         }
      if (sign=='+' || sign == '-' 
      || sign == '*' || sign == '/') {
         printf("x=");
         scanf("%f%*c", &x);
         printf("y=");
         scanf("%f%*c", &y);
         switch (sign) {
            case '+':
               z=Sum(x,y);
               printf("%.2f\n", &z);
               break;
            case '-':
               z=inc(x,y);
               printf("%.2f\n", &z);
               break;
            case '*':
               z=umn(x,y);
               printf("%.2f\n", &z);
               break;
            case '/':
               if (y != 0)
                {z=del(x,y); 
                printf("%.2f\n", &z);
                }

               else printf("Wrong\n");
         }
      }
      else printf("Wrong sign\n");
   }
}