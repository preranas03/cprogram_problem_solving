#include<stdio.h>
int countBits(int n){
    int count = 0;
    while(n>0){ 
        count += n&1;
        n = n>>1;
    }
    return count;
}

int countingBitsForN(int n) {
   int result[1000];
    for (int i = 0; i <= n; i++) {
        result[i] = countBits(i);
    }
    return result;
}


int main(){
    int n=5;
    int *result = (n);
    return 0;
}



/*int countBits(int n){
    int count = 0;
    while(n>0){
        count += n&1;
        n = n>>1;
    }
    return count;
}
int main(){
    int n = 7;
    printf("%d",countBits(n));
    return 0;
}*/