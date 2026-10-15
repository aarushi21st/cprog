/*  array basics
# include<stdio.h>

int main(){
    int num[2];

    printf("enter phy num :");
    scanf("%d", &num[0]);

    printf("enter chem num :");
    scanf("%d", &num[1]);

    printf("phy num : %d\nchem num : %d", num[0], num[1]);
    return 0;
}
    */

/* price of 3 items with gst
# include<stdio.h>

int main(){
     float price[3];
     
    printf("enter price of 3 items :");
    scanf("%f %f %f, &price[0], &price[1], &price[2]);");
    
    printf("price of 1st item : %f\n", price[0]+(price[0]*0.18));
    printf("price of 2nd item : %f\n", price[1]+(price[1]*0.18));
    printf("price of 3rd item : %f\n", price[2]+(price[2]*0.18));

    return 0;





}
    */

/*pounter increement
# include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;

    printf("%u\n", ptr);
    ptr++;

    printf("%u", ptr);
    return 0;
}
    */

/* pointer arthematic
# include<stdio.h>

int main(){

    int age = 20;
    int *ptr = &age;
    int _age = 23;
    int *_ptr = &_age;

    printf("%u,%u difference = %u", ptr, _ptr, ptr - _ptr);
    _ptr = 
    return 0;


}
    */

/*  array input and output
#include<stdio.h>

int main(){
    int adhaar[5];

// input 
    int *ptr = &adhaar[5];
    for (int i=0; i<=5; i++){
        printf("%d index = ", i);
        scanf("%d", &adhaar[i]);
    }

// output 
    for(int i=0; i<5 ; i++){
    printf("%d index : %d\n", i, adhaar[i]);

    }

    
}
    */
/*printing array with funtion
#include <stdio.h>

void printnum(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4};

    printnum(arr, 4);
    return 0;


}

void printnum(int arr[], int n){
    for(int i=0; i<4; i++){
        printf("%d\t", i);
    }
}
    */

/*  2D array of 2 child and mark of 3 sub
#include <stdio.h>

int main(){

    //2,3
    int mark[2][3];
    mark[0][0] = 90;
    mark[0][1] = 80;
    mark[0][2] = 70;

    mark[1][0] = 100;
    mark[1][1] = 30;
    mark[1][2] = 60;

    printf("mark of 1st sub of 1st child : %d", mark[0][0]);
    return 0;
}
    */
/* count odd
#include <stdio.h>

int countodd(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5};
    
    countodd(arr, 5);
}

int countodd(int arr[], int n){
    int count = 0; 
    for(int i=0; i<5; i++){
        if(arr[i]%2 != 0){
            count ++;
        }
    }

    printf("%d", count);
}
    */
/* reversing array
#include <stdio.h>

void reverse(int arr[], int n);
void printingarray(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    printingarray(arr, 5);

    return 0;
}

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firtvalue = arr[i];
        int secondvalue = arr[n-i-1];

        arr[i] = secondvalue;
        arr[n-i-1] = firtvalue;
       }

}

void printingarray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
    */

    /*table storing

#include <stdio.h>

void tablestore(int arr[][10], int n, int m, int number);
int main(){
    int table[2][10];
    tablestore(table, 0, 10,2);
    tablestore(table, 1, 10, 3);

    for(int i=0;i<10;i++){
        printf("%d \t ", table[0][i] );
    }
 
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d\t", table[1][i]);
    }
    return 0;

}

void tablestore(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}
    */

    /* count a num in arr
#include <stdio.h>

int counter(int arr[], int n);

int main(){
    int x;
    int arr[]= {1,2,3,4,4,5,4};

    
    counter(arr, 7);
}

int counter(int arr[], int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]==4){
            count = count + 1;
            
        }
    }
    printf("%d", count);
}
    */

    /*wap to find the largest num in array

#include <stdio.h>
 
int large(int arr[], int n);

int main(){
    int arr[] = {2,4,7,9,4};
    large(arr, 5);

     
}

int large(int arr[], int n){
    int max = arr[0];
    for(int i= 1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("max num : %d", max);
}
    */

