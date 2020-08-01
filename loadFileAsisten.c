#include <stdio.h>
#include <string.h>
#define rowNum 53
#define KOLOM 9
#define BARIS 50
char  ALAB1[BARIS][KOLOM];
char  ALAB2[BARIS][KOLOM];
char  ALAB3[BARIS][KOLOM];
char  ALSS[BARIS][KOLOM];


int main()
{
    int i;
    int minggu;

    for (i=1 ; i <= BARIS; i++)
    {
       ALAB1[i][0] ='\0';
       ALAB2[i][0] ='\0';
       ALAB3[i][0] ='\0';
       ALSS[i][0] ='\0';
    }
    // Load file
    FILE* fp = fopen("scheduleasisten.csv", "r");

    if (fp == NULL)
    {
        printf("Couldn't open file\n");
        return 0;
    }

    for (int counter = -1; counter < 53; counter++)
    {
        char entry[100];
        fgets(entry, 100, fp);

        char *sku = strtok(entry, ",");
        char *plant = strtok(NULL, ",");
        char *qty = strtok(NULL, ",");
        char *huhu=strtok(NULL, ",");
        char *hehe=strtok(NULL, ",");
        char *hoho=strtok(NULL, ",");
        if (qty != NULL && huhu !=NULL &&hehe!=NULL &&hoho!=NULL)
        {
            strcpy(ALAB1[counter], qty);
            strcpy(ALAB2[counter], huhu);
            strcpy(ALAB3[counter], hehe);
            strcpy(ALSS[counter], hoho);
        }
    }

    printf("|---------------------------------------------------------------------------------|\n");
    printf("|Ruang Praktikum  |      LAB1     |     LAB2      |     LAB 3     |      LSS      |\n");
    printf("|-----------------|---------------|---------------|---------------|---------------|\n");
    printf("| Minggu |  Hari  |---------------|---------------|---------------|---------------|\n");
    printf("|--------|--------|---------------|---------------|---------------|---------------|\n");
        for(i=1;i<=BARIS-5 ;i++)
        {
            int minggu2 =(i+14)/5;
            int hari   =(i+14)%5;
            if(minggu2 > 9)
            {
                printf("|   %d   |",minggu2);
            }
            else
                {
            printf("|   %d    |",minggu2);
                }
            switch(hari){
            case 0: printf("  Senin ");break;
            case 1: printf("  Selasa");break;
            case 2: printf("  Rabu  ");break;
            case 3: printf("  Kamis ");break;
            case 4: printf("  Jumat ");break;
            }

            if (strlen(ALAB1[i])==6)
            {
                printf("|               |");
            }
            else
            {
                printf ("|%s|",ALAB1[i]);
            }
            if (strlen(ALAB2[i])==6)
            {
                printf("               |");
            }
            else
            {
                printf ("%s|",ALAB2[i]);
            }
            if (strlen(ALAB3[i])==6)
            {
                printf("               |");
            }
            else
            {
                printf ("%s|",ALAB3[i]);
            }
            if (strlen(ALSS[i])==6)
            {
                printf("               |\n");
            }
            else
            {
                printf ("%7s",ALSS[i]);
                printf("|\n");
            }


            if (i % 5 ==0)
            {
                printf("|---------------------------------------------------------------------------------|\n");
            }
        }

    return 0;





}
