#include "tipeData.c"

void saveFile1(char nama[20],char PLAB1[BARIS][KOLOM1],char PLAB2[BARIS][KOLOM1],char PLAB3[BARIS][KOLOM1],char PLSS[BARIS][KOLOM1])
{
    char *str;
    str=strcat(nama,"_rombongan.csv");
    FILE *data1;
    data1 = fopen(str, "w+" );
    fprintf(data1,"Ruang Praktikum , ,   LAB1     , LAB2    ,  LAB 3  ,    LSS   \n");
    fprintf(data1,"Minggu  , Hari , \n");
    int i;
        for(i=1;i<=50;i++)
        {
            int minggu =(i+14)/5;
            int hari   =(i+14)%5;
            fprintf(data1,"   %d,    ",minggu);
            switch(hari){
            case 0: fprintf(data1,"Senin,");break;
            case 1: fprintf(data1,"Selasa,");break;
            case 2: fprintf(data1,"Rabu,");break;
            case 3: fprintf(data1,"Kamis,");break;
            case 4: fprintf(data1,"Jumat,");break;
            }

            fprintf(data1,"   %s   ,   %s   ,   %s   ,   %   \n",PLAB1,PLAB2,PLAB3,PLSS);
        }
        fclose(data1);
    printf("Schedule disimpan dalam berkas %s\n",str);

}

void saveFile2(char nama[20],char ALAB1[BARIS][KOLOM2],char ALAB2[BARIS][KOLOM2],char ALAB3[BARIS][KOLOM2],char ALSS[BARIS][KOLOM2])
{
    char *str;
    str=strcat(nama,"_asisten.csv");
    FILE *data1;
    data1 = fopen(str, "w+" );
    fprintf(data1,"Ruang Praktikum , ,   LAB1     , LAB2    ,  LAB 3  ,    LSS   \n");
    fprintf(data1,"Minggu  , Hari , \n");
    int i;
        for(i=1;i<=50;i++)
        {
            int minggu =(i+14)/5;
            int hari   =(i+14)%5;
            fprintf(data1,"   %d,    ",minggu);
            switch(hari){
            case 0: fprintf(data1,"Senin,");break;
            case 1: fprintf(data1,"Selasa,");break;
            case 2: fprintf(data1,"Rabu,");break;
            case 3: fprintf(data1,"Kamis,");break;
            case 4: fprintf(data1,"Jumat,");break;
            }

            fprintf(data1,"   %s   ,   %s   ,   %s   ,   %   \n",ALAB1,ALAB2,ALAB3,ALSS);
        }
        fclose(data1);
    printf("Asisten disimpan dalam berkas %s",str);
}
