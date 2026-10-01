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

