/* add
# include<stdio.h>
int sum(int n);

int main(){
    printf("sum is : %d ", sum(5));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }

    int sumn = sum(n-1);
    int sumn1 = sumn + n;
}
    */

/* factorial
# include<stdio.h>
int fact(int n);

int main(){
    printf("fact : %d", fact(4));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int fact1 = fact(n-1);
    int fact0 = fact1*n;
    return fact0;
}*/

/* temp
# include<stdio.h>

float fahr(float cel);

int main(){
    float f = fahr(0);
    printf("temp :%f ", f);
    return 0;
}

float fahr(float cel){
    float f = cel * (9/5)+32; 
    return f;
}
    */

/* percentage
# include<stdio.h>

float percentage(float m, float a, float c);

int main(){
    float m,a,c;
    printf("enter math no:");
    scanf("%f", &m);
    printf("enter sci no :");
    scanf("%f", &a);
    printf("enter sank no : ");
    scanf("%f", &c);

    printf("percentage : %f ", percentage(m,a,c));
    return 0;

}

float percentage(float m, float a, float c){
    float per = ((m+a+c)/3)*100;
    return per;


}
    */
/* fibonacci
# include<stdio.h>

int fib(int n);

int main(){
    fib(3);
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int f = fib(n-1) + fib(n-2);
    printf("fib of %d : %d \n", n,f);
    return f;
}
    */



