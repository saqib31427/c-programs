#include<stdio.h>
void salam();
void namasta();
int main()
{
    printf("rnter i for salam and f for namasta");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        salam();}
    else {
        namasta();

    }
    return 0;

}
void salam()
{
    printf("asalamu alikum");

}
void namasta()
{
    printf("namasta");
}
