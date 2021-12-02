#include<stdio.h>
#include<string.h>
#define NUM 100
int main(){
    char str[NUM];
    int flag=0;
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]==str[len-i-1])
        flag=1;
        else{
            flag=0;
            break;
        }
    }
    if(flag)
        printf("该字符串是回文字符串！");
              
    else
         printf("该字符串不是回文字符串！");    
                    
}
