#include<stdio.h>
int main(){
    int x=10;
    char ch='A';
    void *gp;
    gp=&x;
    printf("%d\n",*(int*)gp);
    gp=&ch;
    printf("%c",*(char*)gp);
}

#include<stdio.h>
int main(){
    int n=10,m=20,*pn,*pm;
    char ch='H', *pch;
    double x=3.650,*px=&x;
    float y=5.5, *py=&y;
    pn=&n;
    pm=&m;
    pch=&ch;
    printf("n=%d\t x=%.2lf ch=%c\n",n,x,ch);
    printf("*pn=%d\t *pm=%d\t *pch=%c\n",*pn,*pm,*pch);
    *pm=*pn;
    printf("*pm=%d\n",*pm);
   
}
