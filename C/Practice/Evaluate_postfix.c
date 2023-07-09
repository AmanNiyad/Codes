#include <stdio.h>
#include<ctype.h>

char stack[100];
int top=-1;

void push(char x){
    top++;
    stack[top] = x;
    printf("TEST %d",top);
    for(int i=0;i<=top;i++){
        printf("%c",stack[i]);
    }
}

char pop(char op){
    int val1,val2;
    int res;
    if(top == -1){
        return -1;
    }
    else{
        val1=stack[top];
        top--;
        val2=stack[top];
        top--;
        if(op=='+'){
            res=val1+val2;
        }
        else if(op=='-'){
            res=val1-val2;
        }
        else if(op=='*'){
            res=val1*val2;
        }
        else if(op=='/'){
            res=val1/val2;
        }
        else if(op=='^'){
            res=val1^val2;
        }
    }
    push(res);
}


int main(){
    char exp[100];
    char *e;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    int x=1;

    while(*e!=')'){
        if(isalnum(*e)){
            push(*e);
        }
        else if(*e=='+'||*e=='-'||*e=='*'||*e=='/'||*e=='^'){
            pop(*e);
        }
        else if(*e !=' ' ){
            continue;
        }
        e++;
        //else if(*e==')'){
        //    printf("%c",stack[0]);
          //  break;
        //}
    }
    //printf("%c",stack[0]);

    
}



