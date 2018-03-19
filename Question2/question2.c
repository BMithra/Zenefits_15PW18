#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char file[6] = {'acr','arc','car','cra','rac','rca'};
    int length = sizeof(file)/sizeof(file[0]);
    int i,n,flag=0;
    char letters[5];
    char input[5];
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        scanf("%c\n",&letters[i]);
    }
    scanf("%s",input);

    for(i = 1; i <= length; i++){
        if(input == file[i])
            flag = i;
    }
    printf("%d",flag);
    return 0;
}
