#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    scanf("%s", arr);

    if(arr[0]>='a' && arr[0]<='z'){
        arr[0] -= 32;
        puts(arr);
    }else{
       puts(arr);
    }

    return 0;
}
