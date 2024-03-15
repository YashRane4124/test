#include<stdio.h>
#include<conio.h>
int stack[20];
int top=-1;
void push(char x){
    top++;
    stack[top]=x;
}
int pop()
{
    top--;
    return stack[top];
}
int main(){
    char exp;
    char *e;
    int n1,n2,n3,num;
    printf("Enter a numerical expression:");
    scanf("%s",&exp);
    e=exp;

    while(*e !='\0'){
        if(isinteger(*e)){
            num=*e-48;
            push(num);
        }else{
            n1=pop();
            n2=pop();
            switch(*e){
                case '+': n3=n2+n1;
                          break;
                case '-': n3=n2-n1;
                          break;
                case '*': n3=n2*n1;
                          break;
                case '/': n3=n2/n1;
                          break;
            }
            push(n3);
        }
        e++;
    }
    printf("Value of the expression %s=%d\n",exp,num);
    getche();
    return 0;
}