#include<stdio.h>
#include<string.h>

int main(){
   int t;
   char arr[100];
   scanf("%d", &t);

   while(t!=0){
        scanf("%s", arr);
        int l = strlen(arr);

        if(l>10){
            printf("%c%d%c\n",arr[0],l-2,arr[l-1]);
        }else{
            puts(arr);
        }
    t--;
   }


    return 0;
}
