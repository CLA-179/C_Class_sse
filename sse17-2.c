#include<stdio.h>

int _j = 1;
int _m;
int _n;
int a[20];
int num = 1;

void fun(int sum,int m, int n)
{
    if(n > 1){
        for (int i = 1; i < m; i++)
        {
            a[n-1] = i;
            if (a[n-1] >= a[n] || n == _n){
                int sum1 = sum + a[n-1];
                fun(sum1, m-i, n-1);
            }
            
        }
    }else if (n = 1)
    {
        
        a[0] = _m - sum;
        if (a[0] >= a[1]){
            printf("[%d]:", num);
            for (int j = 0; j < _n; j++)
            {
                printf("%d",a[j]);
                
            }
            num++;
            printf("\n");
        }

    }
    
    
}

int main()
{
    printf("Please enter requried terms (<=10):");
    scanf("%d", &_n);
    printf("                             their sum:");
    scanf("%d", & _m);
    printf("There are following possible series:\n");
    fun(0, _m, _n);
    return 0;
}