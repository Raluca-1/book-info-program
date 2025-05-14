#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct carte{
char t[50];
char a[50];
int nr_pagini;
};

int main(){

struct carte x;
printf("Introduceti titlul cartii:");
gets(x.t);

printf("Introduceti numele autorului:");
gets(x.a);

printf("Introduceti numarul de pagini:");
scanf("%d",& x.nr_pagini);

printf("\nCartea:%s de %s are %d pagini",x.t,x.a,x.nr_pagini);

return 0;
}


