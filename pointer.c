/* pointer syntax 
# include<stdio.h>

int main(){
    int enroll = 89007;
    int *ptr = &enroll;
    int newenroll = *ptr;
    printf("%d", newenroll);
}
    */

/* format specifier of pointer 
# include <stdio.h>

int main(){
    int code = 89;
    int *ptr = &code;
    printf("%p \n", &code);
    printf("%u\n", &code);

    printf("%u\n", ptr);
    printf("%u", &ptr);

}
    */

   /* format specifier
    #include <stdio.h>

    int main(){
        int age = 22; 
        int *ptr = &age;
        
        printf("%d \n", age);
        printf("%d \n", *ptr);
        printf("%d \n", *(&age));
    }
        */
/* output 
# include <stdio.h>

int main(){
    int x;
    int *ptr;
    
    ptr = &x;
    *ptr = 0; // *ptr = 0 mean x= 0

    printf("%d \n", x);
    printf("%d \n", *ptr);

    *ptr += 5; // *ptr = *ptr +5
    printf("value of x = %d \n", x);
    printf("value of *ptr = %d\n ", *ptr);

    (*ptr)++; // *ptr = *ptr+1
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
}
    */
# include <stdio.h>

int main(){
    int i = 2;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d \n", *ptr);
    printf("%d", **pptr);
}