#include <stdio.h>
#include <assert.h>

void Sum(float a, float b){
   float y;
   y=a+b;
  printf("%f\n", y);
}
void inc(float a, float b){
   float y;
   y=a-b;   
  printf("%f\n", y);
}
void umn(float a, float b){
   float y;
   y=a*b;
  printf("%f\n", y);
}
void del(float a, float b){
   float y;
   y=a/b;
  printf("%f\n", y);
}

int main() {
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
               Sum(x,y);
               break;
            case '-':
               inc(x,y);
               break;
            case '*':
               umn(x,y);
               break;
            case '/':
               if (y != 0)
                {del(x,y);
                }

               else printf("Wrong\n");
         }
      }
      else printf("Wrong sign\n");
   }
}