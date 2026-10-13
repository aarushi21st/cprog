/* call by value and call by reference 
# include<stdio.h>

int square(int n);
int _quare(int* n);

int main(){
    int number = 10;
    square(number);
    printf("the number is : %d\n", number);

    _quare(&number);
    printf("the number is : %d", number);
    return 0;
}


// call by value means the value of the variable is passed to the function. So, if we change the value of the parameter inside the function, it will not affect the original variable. In this case, the value of 'number' remains unchanged after calling the 'square' function.
int square(int n){
    n=n*n;
    printf("square is : %d\n", n);
}


// call by reference means the address of the variable is passed to the function. So, if we change the value of the parameter inside the function, it will affect the original variable. In this case, the value of 'number' is changed after calling the '_quare' function.
int _quare(int* n){
    *n = *n * *n;
    printf("square is : %d\n", *n);
}
    */

/* swap two numbers using call by value and call by reference 
# include<stdio.h>


void swap(int a, int b);
void _swap(int* a, int* b);


int main(){
    int a = 5;
    int b = 3;

    swap(a,b);
    printf("value of a,b: %d %d\n", a, b);
    

    _swap(&a, &b);
    printf("value of a,b: %d %d\n", a, b);
    return 0;


}

// call by value 
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("value of a,b : %d %d \n", a, b);
}

// call by reference
void _swap(int* a, int *b){
    int c= *a;
    *a = *b;
    *b = c;
    printf("value of a,b : %d %d \n", *a, *b);
}
    */

/* print address of variable in function using call by value and call by reference 
# include<stdio.h>

void printaddress(int a);
void _printaddress(int* a);

int main(){
    int a = 10;
    printf("address of a in main function : %p\n", &a);

    printaddress(a);
    _printaddress(&a);
    return 0;


}

void printaddress(int a){
    printf("address of a in printaddress function : %p\n", &a);
}

void _printaddress(int* a){
    printf("address of a in _printaddress function : %p\n", a);
}
    */
/* calculate sum, product and average of two numbers using call by reference
#include<stdio.h>

void math(int a, int b, int* sum, int* product, int* avg);

int main(){
    int a = 10;
    int b = 20;
    int sum, product, avg;

    math(a, b, &sum, &product, &avg);
    printf("sum : %d\n product:%d\n avg:%d\n", sum, product, avg);
    return 0;
}


void math( int a, int b, int* sum, int* product, int* avg){
     *sum = a+ b;
     *product = a *  b;
     *avg = (a + b)/2;

}
     */

/* find greater number using pointer in function call
# include<stdio.h>



int main(){
    int a,b;

    int *p=&a;
    int *p1=&b;

    printf("enter two number : ");
    scanf("%d %d", &a, &b);

    if (*p>*p1){
        printf("%d is greater than %d", *p, *p1);
    }
    else{
        printf("%d is greater than %d", *p1, *p);
    }

    return 0;
    


}
    */

# include<stdio.h>

int main(){
    char alpha;
    char *alpha1 = &alpha;

    for(*alpha1 = 'a'; *alpha1 <= 'z'; (*alpha1)++){
        printf("%c", *alpha1);
    }

    return 0;
}






