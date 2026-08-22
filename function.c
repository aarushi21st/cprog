/* hello nd bye fcuntio
# include<stdio.h>

void hello();
void bye();

int main(){
    hello();
    bye();
    return 0;
}

void hello(){
    printf("hello \n");
}

void bye(){
    printf("bye");
}
    */


/* indian == namaste
    #include<stdio.h>
    #include<string.h>

    void namaste();
    void bojour();

    int main(){
        char nat[100];
        printf("enter nationality :");
        scanf("%s", &nat);

        if (strcmp(nat,"indian")==0){
            namaste();
        }
        else if (strcmp(nat,"french")==0){
            bojour();
        } 
        else{ 
            printf("error");
        }
        return 0;
    }

    void namaste(){
        printf("namaste");
    }
    void bojour(){
        printf("bonjour");
    }
        */

    /* addition
    #include<stdio.h>

    int add(int x, int y);

    int main(){
        int a,b;
        printf("enter a no :");
        scanf("%d", &a);
        printf("enter a no: ");
        scanf("%d", &b);

        int s=add(a,b);
        printf("the addition is : %d \n", s);
        return 0;
    }

    int add(int x, int y){
        return x+y;
    }
        */

/* table
#include<stdio.h>

void  table(int n);


int main(){
    int n;
    printf("enter a no. :");
    scanf("%d", &n);

    table(n);
    return 0;
}

void table(int n){
    int i;

    for(i=1; i<=10; i++) {
        printf("%d \n", n*i);
    }
} */

/*
#include <stdio.h>
#include <math.h>

void two(int n);

int main(){
    int n;
    printf("enter a num: ");
    scanf("%d", &n);

    two(n);
    return 0;

}

void two(int n){
    printf("sq is :%.0f ", pow(n,2));
}*/

/* area
# include<stdio.h>

float areasq(float n);
float areacirc(float num);
float arearect(float a, float b);

float main(){
    float n;
    n = 2;
    areasq(n);
}

float areasq(float n){
    printf("%f", n*n);
}

float areacirc(float num){
    printf("%f", 3.16*num*num);
}

float arearect(float a, float b){
    printf("%f", a*b);
}*/









