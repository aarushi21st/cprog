# include<stdio.h>

float main(){
    float mark;
    printf("enter you marks :");
    scanf("%f", &mark);

    if(mark>30) {
        printf("you are pass");
    } else {
        printf("fail");
    }
    return 0;
}