/*NAME:MIRZA SUMAIYA SHAKIL AHMED
UIN:241A014
ROLL NO:14
BRANCH:AI&DS*/
#include<stdio.h>
int isPrimeNumber(int num){
for(int i=2; i < num; i++){
if(num % i == 0 ){
return 0;
}
}
return 1;
}
int main(){
 int start_num,end_num,i;
 printf("\t\t\t ****Prime Number Finder ***\n\n");
 printf("Enter Starting Number:");
 scanf("%d",&start_num);
 printf("Enter Ending Number:");
 scanf("%d",&end_num);
 i=start_num<=1?2:start_num;
 printf("Prime Numbers Between %d and %d:",start_num,end_num);
 while(i<=end_num)
 {
 if(isPrimeNumber(i))
{
printf("%d,",i);
}
i++;
 }
 return 0;
}

