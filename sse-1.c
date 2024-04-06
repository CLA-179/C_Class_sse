#include <stdio.h>
#include <string.h>

void Left(char str[],int n2){
    int len = strlen(str);
    for (int i = 0; i < n2 ;i++)
    {
        char temp = str[0];
        for (int j = 0; j < len - 1; j++)
        {
            str[j] = str[j + 1];
        }
        str[len-1] = temp;
    }
}

void Right(char str[],int n2){
    int len = strlen(str);
    for (int i = 0; i < n2 ;i++)
    {
        char temp = str[len-1];
        for (int j = len - 1; j > 0; j--)
        {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    char str[n][15], m[n];
    int n2[n];
    for (int i = 0; i < n; i++)
    {
        while (getchar() != '\n');
        gets(str[i]);
        scanf(" %c%d", &m[i], &n2[i]);
        // puts(str[i]);
        if (m[i] == 'L') Left(str[i],n2[i]);
        if (m[i] == 'R') Right(str[i],n2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(str[i]); j += 2)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
    return 0;    
}