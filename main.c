#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * name[20];
    printf("Username  : ");
    scanf("%s",&name);
    while(check(name) == 0)
    {
        printf("Username  : ");
        scanf("%s",&name);
    }
    printf("Welcome Mr.%s",name);
    return 0;
}
int check(char * name[20])
{
    int ok;
    int i,j;
    ok = 1;
    char badList[20] = "@/*#'.+-*\=<>()[]|~&`0123456789";
    //char badList[][20] = {"@","/","*","#","'.+-*\=<>()[]|~&`0123456789"};
    for(i = 0 ; i<strlen(name) ; i++){
        for(j = 0 ; j < strlen(badList) ; j++)
        {
            if(name[i] == badList[j])
            {
                ok = 0;
            }
        }
    }
    return ok;
}
