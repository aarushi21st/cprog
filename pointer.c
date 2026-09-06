/* pointer syntax 
# include<stdio.h>

int main(){
    int enroll = 89007;
    int *ptr = &enroll;
    int newenroll = *ptr;
    printf("%d", newenroll);
}
    */

# include <stdio.h>

int main(){
    int code = 89;
    int *ptr = &code;
    printf("%p \n", &code);
    printf("%u\n", &code);

    printf("%u\n", ptr);
    printf("%u", &ptr);

}