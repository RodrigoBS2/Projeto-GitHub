#include<stdio.h>
int main()
{
    int x,w=1,z;
    char c;
    while(w==1)
    {
         z=1;
         printf("\n\n\nInvertendo a ordem de um numero\n");
         printf("Digite um numero para inverter a sua ordem\n");
         scanf("%d",&x);
         fflush(stdin);
         printf("O inverso de %d eh  ",x);
         while(x>0)
         {
             printf("%d",x%10);
             x/=10;
         }
         while(z==1)
         {
             printf("\n\nDeseja fazer um novo calculo?S/N\n");
         scanf("%c",&c);
         fflush(stdin);
         switch(c)
         {
             case 'S':printf("Calculando novamente\n\n");z=0;break;
             case 'N': printf("ok\n\n\n");w=0;z=0;break;
             default: printf("Erro.Digite novamente");break;

         }
         }


    }

    return 0;
}

