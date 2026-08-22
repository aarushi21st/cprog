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

# include<stdio.h>

float fahr(float n);

float main(){}