#include <stdio.h>
int main(){
 int num1,num2,sum=0; // khai báo biến num1,num2.Sum tính tổng num1+num2.

 printf("enter two number : ");
 scanf("%d%d",&num1,&num2);

 do {
     sum=num1 + num2 ;
     printf("sum = %d\n",sum);//in ra mh tổng của num1+num2

     printf("enter two number(or enter 0 to exit) : ");//Nhập 0 vào num1 or num2 thì điều kiện while không thỏa mãn và kết thúc chương trình.
     scanf("%d%d",&num1,&num2);
 }while (num1 != 0 && num2 != 0);//num 1 và num 2 không bằng 0 thì điều kiện được thỏa mãn và các khối lệnh trong do đc lặp lại

}