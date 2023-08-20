#include <stdio.h>

void addOne(int *n){
    (*n) = (*n)+1;
}

void pi(float *n){
    (*n) = 3.1415;
}

int main(){
    float a;
    int b = 0;
    // printf("A = %f\n", a);
    for(int i=0; i<5; i++){
        printf("B = %d\n", b);
        addOne(&b);
    }
    printf("B = %d\n", b);

}