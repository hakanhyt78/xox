#include<stdio.h>

char dizi[9];
int x, y, i, j, n, a, w, g;
int k=0;


int kazanmakontrol()
{
    for(i=0;i<3;i++)
    {
        if(dizi[i]==dizi[i+3]&&dizi[i]==dizi[i+6]&&dizi[i]!='.')
        {
            w++;
        }
    }

    for(i=0;i<9;i=i+3)
    {
        if(dizi[i]==dizi[i+1]&&dizi[i]==dizi[i+2]&&dizi[i]!='.')
        {
            w++;
        }
    }
   
    for(i=0;i<3;i=i+2)
    {
        
        if(i==0)
        {
            if(dizi[i]==dizi[i+4]&&dizi[i]==dizi[i+8]&&dizi[i]!='.')
            {
                w++;
            }
        }

        if(i==2)
        {
             if(dizi[i]==dizi[i+2]&&dizi[i]==dizi[i+4]&&dizi[i]!='.')
            {
                w++;
            }

        }

    }
    k=0;

    for(y=0;y<9;y++)
    {
        if(dizi[y]!='.')
        {
            k++;
        }

        if(k==9)
        {
            w++;
        }
    
    }

}


int main()
{
w=0;
j=1;

for(g=0;g<9;g++)
{
    dizi[g]='.';
}

while(w==0)
{

    for(n=0;n<9;n++)
    {
        if(n%3==0)
        {
            printf("\n");
        }
        printf("%c ", dizi[n]);
    }


    

    if(j%2==0)
    {
        printf("\nsira o oyuncusunda hucreni sec: ");
        scanf("%d", &a);
        a--;
        if(dizi[a]=='.')
        {
            dizi[a]='o';
        }
        else
        {
            printf("hatali yere girdiniz");
            j--;
        }
    }    

    else
    {
        printf("\nsira x oyuncusunda hucreni sec: ");
        scanf("%d", &a);
        a--;
        if(dizi[a]=='.')
        {
        dizi[a]='x';
        }

        else
        {
            printf("hatali giris yaptiniz");
            j--;
        }
    }


    kazanmakontrol();
    

    j++;
}


if(j%2==0)
{
    printf("x oyuncusu kazandi");
}

else
{
    printf("o oyuncusu kazandi");
}





}


