#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()

{

    char num[10][3]={"�s","��","�L","��","�v","��","��","�m","��","�h"};

    char ch[3][3]={"�a","��","�B"};

    char wan[3][3]={"��","��","�U"};

    int z, o, t, th, fo, fi, s=0, e=0;

    char n[20];
    
    printf("�п�J�@����ԧB�Ʀr(���ƻݭn�p��16���)�G" );

    scanf("%s",n); 

    t = strlen(n);

    if (t>16)  

    {
            printf("����ƪ��׶W�L16���, �L�k�ഫ...\n");
            exit(0);
    }

    th=(t-1)/4+1;

    printf("�ഫ�᪺���G�G");

    for(z=0;z<th;z++)

    {

                e=0;

                if (z==0) fo=(4-t%4)%4;

                else fo=0;

                for (o=fo;o<4;o++)

                {
                    fi=n[s++]-48;

                    if(fi==0) continue; 

                    printf("%s",num[fi]);

                    if(o!=3) 

                    printf("%s",ch[o]);

                    e=1;
                }

                    if (th!=1 && z!=th-1 && e!=0)

                        {
                            printf("%s",wan[4-th+z]);
                        }

    }

printf("\n");
system("pause");
return 0;

}
