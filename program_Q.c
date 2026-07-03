/* pass and fail
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
*/

# include<stdio.h>

float main(){
    float mark;
    printf("enter your mark :");
    scanf("%d", &mark);
    if(mark<30){
        printf("C");
    } 
    else if(30<=mark<70){
        printf("B");
    }
    else if(70<=mark<90){
        printf("A");
    } else{
        printf("A+");
    }

    return 0;
}