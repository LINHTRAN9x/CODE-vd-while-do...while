#include <stdio.h>
int main(){
    int num=0; //gán num bằng 0.

    do {
        printf("%d\n",num);
        num++;
    }while (num<=5); // xét điều kiện num <= 5,vòng lặp đã đc thỏa mãn .các khối lệnh trong do {} sẽ được thực hiện.
    return 0;
}