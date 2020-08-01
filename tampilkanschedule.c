#include "tipeData.c"

void tampilkanSchedule(char PLAB1[BARIS][KOLOM1],char PLAB2[BARIS][KOLOM1],char PLAB3[BARIS][KOLOM1],char PLSS[BARIS][KOLOM1])
{

    printf("|--------------------------------------------------------------|\n");
    printf("|Ruang Praktikum  |    LAB1   |   LAB2   |   LAB 3   |   LSS   |\n");
    printf("|-----------------|-----------|----------|-----------|---------|\n");
    printf("|Minggu  |  Hari  |-----------|----------|-----------|---------|\n");
    printf("|--------|--------|-----------|----------|-----------|---------|\n");
    int i;
        for(i=1;i<=50;i++)
        {
            int minggu =(i+14)/5;
            int hari   =(i+14)%5;
            if(minggu > 9)
            {
                printf("|  %d    |",minggu);
            }
            else{
            printf("|  %d     |",minggu);}
            switch(hari){
            case 0: printf("  Senin ");break;
            case 1: printf("  Selasa");break;
            case 2: printf("  Rabu  ");break;
            case 3: printf("  Kamis ");break;
            case 4: printf("  Jumat ");break;
            }

            printf("|%9s  |%9s |%9s  |%9s|\n",PLAB1[i],PLAB2[i],PLAB3[i],PLSS[i]);
            if (i % 5 ==0)
            {
                printf("|--------------------------------------------------------------|\n");
            }
        }
}

void tampilkanAsisten(char ALAB1[BARIS][KOLOM2],char ALAB2[BARIS][KOLOM2],char ALAB3[BARIS][KOLOM2],char ALSS[BARIS][KOLOM2])
{

    printf("|--------------------------------------------------------------|\n");
    printf("|Ruang Praktikum  |    LAB1   |   LAB2   |   LAB 3   |   LSS   |\n");
    printf("|-----------------|-----------|----------|-----------|---------|\n");
    printf("|Minggu  |  Hari  |-----------|----------|-----------|---------|\n");
    printf("|--------|--------|-----------|----------|-----------|---------|\n");
    int i;
        for(i=1;i<=50;i++)
        {
            int minggu =(i+14)/5;
            int hari   =(i+14)%5;
            if(minggu > 9)
            {
                printf("|  %d    |",minggu);
            }
            else{
            printf("|  %d     |",minggu);}
            switch(hari){
            case 0: printf("  Senin ");break;
            case 1: printf("  Selasa");break;
            case 2: printf("  Rabu  ");break;
            case 3: printf("  Kamis ");break;
            case 4: printf("  Jumat ");break;
            }

            printf("|    %3s    |   %3s    |    %3s    |    %3s   |\n",ALAB1[i],ALAB2[i],ALAB3[i],ALSS[i]);
            if (i % 5 ==0)
            {
                printf("|--------------------------------------------------------------|\n");
            }
        }
}

