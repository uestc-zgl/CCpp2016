#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int LEN = 80;
void move(int ,int ,int );

int main()
{
    while (1)
    {
        move(0,LEN,1);
        move(LEN,0,-1);
    }
}

void move (int l,int r,int a)
{
    int i,j;
    for (i = l;i != r;i += a)
    {
        for (j = 1;j <= i; j++)
        {
            printf(" ");
        }
        printf("A");
        system("cls");
    }
}
