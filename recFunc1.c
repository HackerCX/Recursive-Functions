#include <stdio.h>

void printNum(int num){
    if(num == 0) return;
    printf("%d\n",num);
    printNum(num -1);
}

int main(){
    int n =0;
    scanf("%d",&n);
    printNum(n);
    return 0;
}
