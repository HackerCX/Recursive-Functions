#include <stdio.h>

void printNum(int num){
    if(num == 0) return;
    printNum(num -1);
    printf("%d\n",num);
}

int main(){
    int n =0;
    scanf("%d",&n);
    printNum(n);
    return 0;
}
