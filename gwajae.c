#include <stdio.h>
#define MASTER_PASSWORD = 4988

int int_check(input){
    if(input < 0){
        printf("잘못된 입력입니다. 0 이상의 정수만 입력해 주세요.");
        return 1;
    } else{
        return 0;
    }
}
