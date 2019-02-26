#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int somme= 0;
    long long ndc;

    do
    {
        ndc=get_long_long("numero de carte: ");
    }
    while(ndc<0);

    int idriss= 0;

    long long identifiant=ndc;
    while(identifiant>0)
    {
        identifiant=identifiant/10;
        idriss++;
    }

    if(idriss!=13 && idriss!=15 && idriss!=16)
    {
        printf("numero de carte invalide\n");
    }

    int valeur[idriss];
    for (int a=0; a<idriss; a++)
    {
        valeur[a]= ndc%10;
        ndc= ndc/10;
    }
    int ivaleur[idriss];
    for (int a=0; a< idriss ; a++)
    {
        ivaleur[a]= valeur[a];
    }
    for(int a=1; a< idriss ; a+=2)
    {
        valeur[a]= valeur[a]*2;
    }


    for(int a= 0; a< idriss ; a++)
    {
        somme= somme+ valeur[a]%10+ valeur[a]/10%10;
    }

    if (somme%10==0)
    if (idriss==13 && valeur[12]==4 && somme%10==0)
    {
        printf("carte VISA\n");
    }
    if (idriss==16 && valeur[15]==4 && somme%10==0)
    {
        printf("carte VISA\n");
    }

    if(idriss==15 && ivaleur[14]==4 && somme%10==0 && (ivaleur[13]==4 || ivaleur[13]==7))
    {
        printf("carte AMEX\n");
    }
    if(idriss==16 && ivaleur[15]==5 && (ivaleur[14]==1 || ivaleur[14]==2 || ivaleur[14]==3 || ivaleur[14]==4 || ivaleur[14]==5) && somme%10==0)
    {
        printf("carte MASTERCARD\n");
    }
}