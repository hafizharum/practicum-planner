#include "subprogramMain.c"

//main program
int main(){

    int pilihan1,pilihan2,i;
    char namaProyek[20];
    output3Menu(&pilihan1);
    while (pilihan1!=3){
        if (pilihan1==1){
            for (i=1;i<=BARIS;i++){
                    PLAB1[i][0] ='\0';
                    PLAB2[i][0] ='\0';
                    PLAB3[i][0]='\0';
                    PLSS[i][0]='\0';
                    ALAB1[i][0] ='\0';
                    ALAB2[i][0] ='\0';
                    ALAB3[i][0]='\0';
                    ALSS[i][0]='\0';
            }

            printf("====== Membuat Proyek Baru ======\nMasukkan nama proyek:");
            scanf("%s",namaProyek);
            menuUtama(&pilihan1,&pilihan2,1,namaProyek);
        }else{//pilihan1==2
            printf("====== Memuat Proyek=====\nMasukkan nama proyek: ");
            scanf("%s",namaProyek);
            //load file
            menuUtama(&pilihan1,&pilihan2,2,namaProyek);
        }
    }
    return 0;
}
