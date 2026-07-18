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

/* 1-10
# include<stdio.h>

int main(){
    int i;
    for (i=0;i<=10;i=i+1){
        printf("%d\n", i);
    }
    return 0;
}
    */

/* loop_running_till_particular_no

# include<stdio.h>

int main(){
    float n,i;
    printf("enter a num you want the loop to run till : ");
    scanf("%f", &n);

    for (i=0;i<=n;i++){
        printf("%f \n", i);
    }
    return 0;
}
    */

/* add of no

# include<stdio.h>

int main(){
    int n;
    int add=0;

    
    for (n=1; n<=4; n++){
         add=add+n;
    }
    printf("sum is %d", add);
    return 0;
}
    */

/* DOUBT
# include<stdio.h>

int main(){
    int n, i;
    int mul=1;
    printf("enter no : ", n);
    scanf("%d", &n);

    for (i=n;mul<=10;mul++){
        mul=mul*n;
    }
    printf("multtiplication %d", mul);
    return 0;

}
    */

/* table
# include <stdio.h>

int main(){
    int n,i;
    printf("enter a no:", n);
    scanf("%d", &n);

    for (i=1;i<=10;i++){
        printf("%d \n", n*i);
    }
    
    return 0;
}
    */

/* take no until odd
# include<stdio.h>

int main(){
    int n;
    
    for(;;){
        printf("enter nos :");
        scanf("%d",&n);

        if(n%2!=0){
            break;
        } 
        
        printf("%d \n",n);
        
    }
    return 0;
}
    */

