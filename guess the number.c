#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));//khơi tạo seed cho hàm rand() bằng thời gian hiện tại,se ramdom mỗi lần chạy program.
    int guess;
    int random;
     random= rand ()%100+1 ;//hàm rand() sinh ra số ngẫu nhiên.
    printf("Guess the number (1-100): ");
    scanf("%d",&guess);//nhập số guess
    do {
        if (guess >= random)
            printf("To high\n");
        else
                printf("To low\n");
        
    printf("Guess the number again(1-100): ");//vòng lặp lại yêu cầu nhập lại guess number
    scanf("%d",&guess);

}while (guess != random);//Nếu guess không bằng số ramdom thì sẽ lặp lại.nếu bằng random sẽ kết thúc chương trình.
    printf("congratulation!!!! ");

    return 0;

}
