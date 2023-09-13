#include<stdio.h>
int main()
{
    char name[100],home[100],food[100];
        printf("What is your name?");
        scanf("%s",&name);
        printf("Where do you come from?");
        scanf("%s",&home);
        printf("What is your favorite food?");
        scanf("%s",&food);
        printf("My name is %s \n", name);
        printf("I come from %s \n", home);
        printf("My favorite food is %s \n", food);
return 0;
}
