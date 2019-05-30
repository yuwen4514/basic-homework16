#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main()

{

    char num[10][3]={"箂","滁","禠","把","竩","ヮ","嘲","琺","","╤"};

    char ch[3][3]={"","ㄕ","珺"};

    char wan[3][3]={"","货","窾"};

    int z, o, t, th, fo, fi, s=0, e=0;

    char n[20];
    
    printf("叫块﹃┰计(计惠璶16计)" );

    scanf("%s",n); 

    t = strlen(n);

    if (t>16)  

    {
            printf("俱计禬筁16计, 礚猭锣传...\n");
            exit(0);
    }

    th=(t-1)/4+1;

    printf("锣传挡狦");

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
