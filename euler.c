#include <stdio.h>
#include <stdlib.h>

int twenty_eight(int input) {
    int sum = 0;
    int jump = 2;
    int i = 1;
    int flag = 1;
    while(flag){
        int j;
        for(int j = 0; j < 4 && flag; j++){
            if(i >= input * input) flag = 0;
            sum += i;
            i += jump;
        }
        jump += 2;
    }


    return sum;
}

int one (int max){
    int i, sum;
    for(i = 0; i < max; i++) if (i % 3 == 0 || i % 5 == 0) sum += i;
    return sum;
}
