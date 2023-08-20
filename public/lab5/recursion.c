#include <stdio.h>


int sum(int n){
    if(n==0){
        return 0;
    }
    return sum(n-1)+n;
}


int main(){
    int a = 4;
    printf("sum of 1 to %d = %d\n", a, sum(a));
}