#include<stdio.h>
int fac(int n);
int main (){
    int n;
printf("enter the value of N");
scanf("%d",&n);
printf("%d",fac(n));

return 0;
}
int fac(int n)

{
 if(n==1){
    return 1;
 }
int facNm1=fac(n-1);
int result=facNm1*n;
return result;
}







