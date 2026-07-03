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

/* grading
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
    */

/* uppr and lwr letter 
# include<stdio.h>

int main(){
    char word;
    printf("Enter a word : ");
    scanf("%C", &word);

    if( word = 'ABCDEFGHIJKLMNOPQRTUVWXYZ'){
        printf("uppercase");
    } else{
        printf("lowercase");
    }

    return 0;
}
    */

/* check natural no or not
# include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num>=1){
        printf("number is a natural no.");
    } else{
        printf("not a natural no.");
    }
    return 0;
}
    */

# include<stdio.h>

int main(){
    int i;
    for (i=0;i<=10;i=i+1){
        printf("%d\n", i);
    }
    return 0;
}