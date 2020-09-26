#include <stdio.h>
#include <math.h>
int main(void) {
  double a,b;
  int x;
  printf("M e n u\n");
  printf(" 1. Add (+)\n");
  printf(" 2. Subtract (-)\n");
  printf(" 3. Multiply (*)\n");
  printf(" 4. Divide (/)\n");
  printf(" 5. Modulo (%%)\n");
  printf("Enter Number 1 : "); scanf("%lf",&a);
  printf("Enter Number 2 : "); scanf("%lf",&b);
  printf("Select Choice : "); scanf("%d",&x);
  switch(x){
    case 1 : printf("\nAnswer is %.3f + %.3f = %.3f",a,b,a+b); break;
    case 2 : printf("\nAnswer is %.3f - %.3f = %.3f",a,b,a-b); break;
    case 3 : printf("\nAnswer is %.3f * %.3f = %.3f",a,b,a*b); break;
    case 4 : if(b==0){
      printf("\nDivide by Zero!!!\n"); break;
    }else{
      printf("\nAnswer is %.3f / %.3f = %.3f\n",a,b,a/b); break;
    }
    case 5 : 
    if(b==0){
      printf("\nDivide by Zero!!!\n"); break;
    }else{
      printf("\nAnswer is %.3f %% %.3f = %.3f\n",a,b,fmod(a,b)); break;
    }
  }
  return 0;
}