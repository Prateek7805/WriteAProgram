#include<stdio.h>
#include<stdlib.h>
char* ConvertToPalindrome(char* str){
    int i, count = 0, last, flag = 1, index = 0;
    for(count = 0; str[count]!='\0'; count++); //finding the Count of a string
    last = count - 1;
    for(i = 0; i<count; i++){
        if(str[i] == str[last]){
            if(flag == 1){
                flag = 0;
                index = i;
            }
            last--;
        }
        else{
            flag = 1;
            last = count - 1;
        }
    }
    
    count = 0;
    char* out = (char*)malloc(index+1);
    for(i=index - 1; i>=0; i--){
        out[count++] = str[i];
    }
    out[count] = 0;
    return out;
}

int main(){
    int len;
    printf("Enter number of characters in the string: ");
    scanf("%d", &len);
    getch();
    char* str = (char*)malloc(len+1);
    printf("Enter the String: ");
    scanf("%s", str);
    printf("%s", ConvertToPalindrome(str));
    return 0;
}
