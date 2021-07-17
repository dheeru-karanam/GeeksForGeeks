#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top=0;
int size = 9;
void push(char *arr, char data){
    if(top!= size){
        arr[top] = data;
        top++;
    }
    else{
        printf("Stack Overflow\n");
    }
    return;
}
char pop(char *arr){
    if(top!=0){
        top--;
        return arr[top];
    }
    else{
        printf("Stack Underflow\n");
        return ' ';
    }
}
int main()
{
    char *arr ;
    char *postfix;
    char popped;
    char eq[400] ; 
    int i,j=0,test,dummy;
    scanf("%d",&test);
    while(test--){
        j=0;
        scanf("%s", eq);
        size = strlen(eq);
        arr = (char *)malloc(size*sizeof(char));
        postfix = (char *)malloc(size*sizeof(char));
        for(i=0;eq[i]!='\0';i++){
            if(eq[i]==')'){
                popped = pop(arr);
                postfix[j]=popped;
                popped = pop(arr);
                j++;
            }
            else if(eq[i]>=97 && eq[i]<=122){
                postfix[j]=eq[i];
                j++;
            }
            else{
                push(arr, eq[i]);
            }
        }
            printf("%s\n", postfix);
            j=0;
            i=0;
    }
    free(arr);
    return 0;
}
