#include "saveFile.c"
#include "tampilkanschedule.c"
#include "tipeData.c"
//header fungsi
void output3Menu(int *pilihan1);
void output8MenuUtama(int *pilihan2);
void menuUtama(int*pilihan1,int*pilihan2,int c, char namaProyek[20]);
void ruleChecker(char PLAB1[BARIS][KOLOM1],char PLAB2[BARIS][KOLOM1],char PLAB3[BARIS][KOLOM1],char PLSS[BARIS][KOLOM1]);

void menuUtama(int*pilihan1,int*pilihan2,int c,char namaProyek[20] ){
    char namaDRC[20];
    char input[10];
                    char rombongan[3];
                    int minggu;
                    char Hari[8];
                    char Ruang[5];
                    char Ruang2[5];
                    char Ruang3[5];
    while (*pilihan1==c){
        output8MenuUtama(pilihan2);
        switch (*pilihan2){
            case 1: tampilkanSchedule(PLAB1,PLAB2,PLAB3,PLSS);
                    break;
            case 2: //assignSchedule manual
                    printf("isi 'Q' atau q untuk kembali ke menu\n ");
                    printf("Pilih Kode Praktikum (EL2205, EL2208, EB2200)\n");
                    scanf("%s", input);
                    getchar();
                    while ((strcmp(input,"EL2205")!=0)&&(strcmp(input,"EL2208")!=0)&&(strcmp(input,"EB2200")!=0)&&(strcmp(input,"Q")!=0))
                    {
                        printf("Pilih Kode Praktikum (EL2205, EL2208, EB2200)\n");
                        scanf("%s", input);
                        getchar();
                    }
                    while (strcmp(input,"Q")!= 0)
                    {
                        if (strcmp(input,"EL2205")==0)
                        {
                            printf("Rombongan A1,A2,B1,B2,C1,C2 \n");
                            scanf("%s", rombongan);
                                getchar();
                                if ((strcmp(rombongan,"A1")==0)||(strcmp(rombongan,"A2")==0)||(strcmp(rombongan,"B1")==0)||(strcmp(rombongan,"B2")==0)||(strcmp(rombongan,"C1")==0)||(strcmp(rombongan,"C2")==0))
                                {
                                    printf("Minggu ke:");
                                    scanf("%i",&minggu);
                                    while (minggu<3 || minggu>13)
                                    {
                                        printf("Minggu ke:");
                                        scanf("%i",&minggu);
                                    }
                                    printf("Hari:");
                                    scanf("%s",Hari);
                                    getchar();
                                    while((strcmp(Hari,"Senin")!=0)&&(strcmp(Hari,"Rabu")!=0)&&(strcmp(Hari,"Selasa")!=0)&&(strcmp(Hari,"Kamis")!=0)&&(strcmp(Hari,"Jumat")!=0))
                                    {
                                        printf("Hari:");
                                        scanf("%s",Hari);
                                        getchar();
                                    }
                                    printf("Ruang:");
                                    scanf("%s",Ruang);
                                    getchar();
                                    while((strcmp(Ruang,"LAB1")!=0)&&(strcmp(Ruang,"LAB2")!=0)&&(strcmp(Ruang,"LAB3")!=0)&&(strcmp(Ruang,"LSS")!=0))
                                    {
                                        printf("Ruang:");
                                        scanf("%s",Ruang);
                                        getchar();
                                    }
                                }
                                else if ((strcmp(rombongan,"A")==0)||(strcmp(rombongan,"B")==0)||(strcmp(rombongan,"C")==0))
                                {
                                    printf("Minggu ke:");
                                    scanf("%i",&minggu);
                                    while (minggu<3 || minggu>13) // cek kondisi apakah ada diminggu perkuliahan
                                    {
                                        printf("Minggu ke:");
                                        scanf("%i",&minggu);
                                    }
                                    printf("Hari:");// cek hari
                                    scanf("%s",Hari);
                                    getchar();
                                    while((strcmp(Hari,"Senin")!=0)&&(strcmp(Hari,"Rabu")!=0)&&(strcmp(Hari,"Selasa")!=0)&&(strcmp(Hari,"Kamis")!=0)&&(strcmp(Hari,"Jumat")!=0))
                                    {
                                        printf("Hari:");
                                        scanf("%s",Hari);
                                        getchar();
                                    }
                                    //cek 2 ruangan
                                    printf("Ruang 1:");
                                    scanf("%s",Ruang);
                                    getchar();
                                    while((strcmp(Ruang,"LAB1")!=0)&&(strcmp(Ruang,"LAB2")!=0)&&(strcmp(Ruang,"LAB3")!=0)&&(strcmp(Ruang,"LSS")!=0))
                                    {
                                        printf("Ruang 1:");
                                        scanf("%s",Ruang);
                                        getchar();
                                    }
                                    printf("Ruang 2:");
                                    scanf("%s",Ruang2);
                                    getchar();

                                    while(strcmp(Ruang2,Ruang)==0)
                                        {
                                            printf("tidak dapat menempati ruangan yang sama\n");
                                            printf("Ruang 2:");
                                            scanf("%s",Ruang2);
                                            getchar();
                                        }
                                    while((strcmp(Ruang2,"LAB1")!=0)&&(strcmp(Ruang2,"LAB2")!=0)&&(strcmp(Ruang2,"LAB3")!=0)&&(strcmp(Ruang2,"LSS")!=0))
                                    {
                                        printf("Ruang:");
                                        scanf("%s",Ruang2);
                                        getchar();
                                    }
                                }

                        }
                        else if (strcmp(input,"EL2208")==0)
                        {
                            printf("Rombongan A1,A2,A3,B1,B2,B3,C \n");
                            scanf("%s",rombongan);
                            getchar();
                            if ((strcmp(rombongan,"A1")==0)||(strcmp(rombongan,"A2")==0)||(strcmp(rombongan,"A3")==0)||(strcmp(rombongan,"B1")==0)||(strcmp(rombongan,"B2")==0)||(strcmp(rombongan,"B3")==0))
                            {
                                printf("Minggu ke:");
                                scanf("%i",&minggu);
                                while (minggu<3 || minggu>13)
                                {
                                    printf("Minggu ke:");
                                    scanf("%i",&minggu);
                                }
                                printf("Hari:");
                                scanf("%s",Hari);
                                getchar();
                                while((strcmp(Hari,"Senin")!=0)&&(strcmp(Hari,"Rabu")!=0)&&(strcmp(Hari,"Selasa")!=0)&&(strcmp(Hari,"Kamis")!=0)&&(strcmp(Hari,"Jumat")!=0))
                                {
                                    printf("Hari:");
                                    scanf("%s",Hari);
                                    getchar();
                                }
                                printf("Ruang:");
                                scanf("%s",Ruang);
                                getchar();
                                while((strcmp(Ruang,"LAB1")!=0)&&(strcmp(Ruang,"LAB2")!=0)&&(strcmp(Ruang,"LAB3")!=0)&&(strcmp(Ruang,"LSS")!=0))
                                {
                                    printf("Ruang:");
                                    scanf("%s",Ruang);
                                    getchar();
                                }
                            }
                            else if (strcmp(rombongan,"C")==0)
                            {
                                printf("Minggu ke:");
                                scanf("%i",&minggu);
                                while (minggu<3 || minggu>13) // cek kondisi apakah ada diminggu perkuliahan
                                {
                                    printf("Minggu ke:");
                                    scanf("%i",&minggu);
                                }
                                printf("Hari:");// cek hari
                                scanf("%s",Hari);
                                getchar();
                                while(strcmp(Hari,"Rabu")!=0)
                                {
                                    printf("rombongan C hanya dapat melaksanakan praktikum Hari Rabu\n");
                                    printf("Hari:");
                                    scanf("%s",Hari);
                                    getchar();
                                }
                                //Cek kondisi Ruangan 1
                                printf("Ruang 1:");
                                scanf("%s",Ruang);
                                getchar();
                                while((strcmp(Ruang,"LAB1")!=0)&&(strcmp(Ruang,"LAB2")!=0)&&(strcmp(Ruang,"LAB3")!=0)&&(strcmp(Ruang,"LSS")!=0))
                                {
                                    printf("Ruang 1:");
                                    scanf("%s",Ruang);
                                    getchar();
                                }
                            }
                            else if ((strcmp(rombongan,"A")==0)||(strcmp(rombongan,"B")==0))
                            {
                                printf("Minggu ke:");
                                scanf("%i",&minggu);
                                while (minggu<3 || minggu>13) // cek kondisi apakah ada diminggu perkuliahan
                                {
                                    printf("Minggu ke:");
                                    scanf("%i",&minggu);
                                }
                                printf("Hari:");// cek hari
                                scanf("%s",Hari);
                                getchar();
                                while((strcmp(Hari,"Senin")!=0)&&(strcmp(Hari,"Rabu")!=0)&&(strcmp(Hari,"Selasa")!=0)&&(strcmp(Hari,"Kamis")!=0)&&(strcmp(Hari,"Jumat")!=0))
                                {
                                    printf("Hari:");
                                    scanf("%s",Hari);
                                    getchar();
                                }
                                //Cek kondisi Ruangan 1
                                printf("Ruang 1:");
                                scanf("%s",Ruang);
                                getchar();
                                while((strcmp(Ruang,"LAB1")!=0)&&(strcmp(Ruang,"LAB2")!=0)&&(strcmp(Ruang,"LAB3")!=0)&&(strcmp(Ruang,"LSS")!=0))
                                {
                                    printf("Ruang 1:");
                                    scanf("%s",Ruang);
                                    getchar();
                                }
                                //Cek Kondisi Ruangan 2
                                printf("Ruang 2:");
                                scanf("%s",Ruang2);
                                getchar();
                                while((strcmp(Ruang2,"LAB1")!=0)&&(strcmp(Ruang2,"LAB2")!=0)&&(strcmp(Ruang2,"LAB3")!=0)&&(strcmp(Ruang2,"LSS")!=0))
                                {
                                    printf("Ruang 2:");
                                    scanf("%s",Ruang2);
                                    getchar();
                                }
                                while(strcmp(Ruang2,Ruang)==0)
                                    {
                                        printf("tidak dapat menempati ruangan yang sama\n");
                                        printf("Ruang 2:");
                                        scanf("%s",Ruang2);
                                        getchar();
                                    }
                                // cek kondisi ruangan 3
                                printf("Ruang 3:");
                                scanf("%s",Ruang3);
                                getchar();
                                while((strcmp(Ruang3,Ruang)==0)&&strcmp(Ruang3,Ruang2)==0)
                                    {
                                        printf("tidak dapat menempati ruangan yang sama\n");
                                        printf("Ruang 3:");
                                        scanf("%s",Ruang3);
                                        getchar();
                                    }
                            }
                        }
                        else if (strcmp(input,"EB2200")==0)
                        {
                            printf("Rombongan A,B: \n");
                            scanf("%s", rombongan);
                            getchar();
                            if ((strcmp(rombongan,"A")==0)||(strcmp(rombongan,"B")==0))
                            {
                                printf("Minggu ke:");
                                scanf("%i",&minggu);
                                while (minggu<3 || minggu>13)
                                {
                                    printf("Minggu ke:");
                                    scanf("%i",&minggu);
                                }
                                printf("Hari:");
                                scanf("%s",Hari);
                                getchar();
                                while((strcmp(Hari,"Selasa")!=0)&&(strcmp(Hari,"Kamis")!=0))
                                {
                                    printf("Hari:");
                                    scanf("%s",Hari);
                                    getchar();
                                }
                                printf("Ruang:");
                                scanf("%s",Ruang);
                                getchar();
                                while((strcmp(Ruang,"LAB1")!=0)&&(strcmp(Ruang,"LAB2")!=0)&&(strcmp(Ruang,"LAB3")!=0)&&(strcmp(Ruang,"LSS")!=0))
                                {
                                    printf("Ruang:");
                                    scanf("%s",Ruang);
                                    getchar();
                                }
                            }

                        }
                         int i , j;
                                    if (strcmp(Hari,"Senin")==0)
                                    {
                                        j=0;
                                    }
                                    else if (strcmp(Hari,"Selasa")==0)
                                    {
                                        j=1;
                                    }
                                    else if (strcmp(Hari,"Rabu")==0)
                                    {
                                        j=2;
                                    }
                                    else if (strcmp(Hari,"Kamis")==0)
                                    {
                                        j=3;
                                    }
                                    else if ((strcmp(Hari,"Jumat")==0))
                                    {
                                        j=4;
                                    }

                            i=  minggu * 5 + j -14;
                                if ((strcmp(rombongan,"A1")==0)||(strcmp(rombongan,"A2")==0)||(strcmp(rombongan,"A3")==0)||(strcmp(rombongan,"B1")==0)||(strcmp(rombongan,"B2")==0)||(strcmp(rombongan,"B3")==0)
                                    ||(strcmp(rombongan,"C1")==0)||(strcmp(rombongan,"C2")==0)||((strcmp(input,"EL2208")==0)&& (strcmp(rombongan,"C")==0))||((strcmp(input,"EB2200")==0)&& (strcmp(rombongan,"A")==0))||((strcmp(input,"EB2200")==0)&& (strcmp(rombongan,"B")==0)))
                                   {
                                    if ((strcmp(Ruang,"LAB1")==0))
                                    {
                                        strcpy(PLAB1[i],input);
                                        strcat(PLAB1[i],"-");
                                        strcat(PLAB1[i],rombongan);
                                    }

                                    else if (strcmp(Ruang,"LAB2")==0)
                                    {
                                        strcpy(PLAB2[i],input);
                                        strcat(PLAB2[i],"-");
                                        strcat(PLAB2[i],rombongan);
                                    }
                                    else if(strcmp(Ruang,"LAB3")==0)
                                    {
                                        strcpy(PLAB3[i],input);
                                        strcat(PLAB3[i],"-");
                                        strcat(PLAB3[i],rombongan);
                                    }
                                    else if((strcmp(Ruang,"LSS")==0))
                                    {
                                        strcpy(PLSS[i],input);
                                        strcat(PLSS[i],"-");
                                        strcat(PLSS[i],rombongan);
                                    }
                                   }
                                else if((strcmp(input,"EL2205")==0))
                                {
                                    if ((strcmp(Ruang,"LAB1")==0))
                                    {
                                        strcpy(PLAB1[i],input);
                                        strcat(PLAB1[i],"-");
                                        strcat(PLAB1[i],rombongan);
                                        strcat(PLAB1[i],"1");
                                    }

                                    else if (strcmp(Ruang,"LAB2")==0)
                                    {
                                        strcpy(PLAB2[i],input);
                                        strcat(PLAB2[i],"-");
                                        strcat(PLAB2[i],rombongan);
                                        strcat(PLAB2[i],"1");
                                    }
                                    else if(strcmp(Ruang,"LAB3")==0)
                                    {
                                        strcpy(PLAB3[i],input);
                                        strcat(PLAB3[i],"-");
                                        strcat(PLAB3[i],rombongan);
                                        strcat(PLAB3[i],"1");
                                    }
                                    else if((strcmp(Ruang,"LSS")==0))
                                    {
                                        strcpy(PLSS[i],input);
                                        strcat(PLSS[i],"-");
                                        strcat(PLSS[i],rombongan);
                                        strcat(PLSS[i],"1");
                                    }

                                    if ((strcmp(Ruang2,"LAB1")==0))
                                    {
                                        strcpy(PLAB1[i],input);
                                        strcat(PLAB1[i],"-");
                                        strcat(PLAB1[i],rombongan);
                                        strcat(PLAB1[i],"2");
                                    }

                                    else if (strcmp(Ruang2,"LAB2")==0)
                                    {
                                        strcpy(PLAB2[i],input);
                                        strcat(PLAB2[i],"-");
                                        strcat(PLAB2[i],rombongan);
                                        strcat(PLAB2[i],"2");
                                    }
                                    else if(strcmp(Ruang2,"LAB3")==0)
                                    {
                                        strcpy(PLAB3[i],input);
                                        strcat(PLAB3[i],"-");
                                        strcat(PLAB3[i],rombongan);
                                        strcat(PLAB3[i],"2");
                                    }
                                    else if((strcmp(Ruang2,"LSS")==0))
                                    {
                                        strcpy(PLSS[i],input);
                                        strcat(PLSS[i],"-");
                                        strcat(PLSS[i],rombongan);
                                        strcat(PLSS[i],"2");
                                    }

                                }
                                else if(strcmp(input,"EL2208")==0)
                                {
                                    if ((strcmp(Ruang,"LAB1")==0))
                                    {
                                        strcpy(PLAB1[i],input);
                                        strcat(PLAB1[i],"-");
                                        strcat(PLAB1[i],rombongan);
                                        strcat(PLAB1[i],"1");
                                    }

                                    else if (strcmp(Ruang,"LAB2")==0)
                                    {
                                        strcpy(PLAB2[i],input);
                                        strcat(PLAB2[i],"-");
                                        strcat(PLAB2[i],rombongan);
                                        strcat(PLAB2[i],"1");
                                    }
                                    else if(strcmp(Ruang,"LAB3")==0)
                                    {
                                        strcpy(PLAB3[i],input);
                                        strcat(PLAB3[i],"-");
                                        strcat(PLAB3[i],rombongan);
                                        strcat(PLAB3[i],"1");
                                    }
                                    else if((strcmp(Ruang,"LSS")==0))
                                    {
                                        strcpy(PLSS[i],input);
                                        strcat(PLSS[i],"-");
                                        strcat(PLSS[i],rombongan);
                                        strcat(PLSS[i],"1");
                                    }
                                    if ((strcmp(Ruang2,"LAB1")==0))
                                    {
                                        strcpy(PLAB1[i],input);
                                        strcat(PLAB1[i],"-");
                                        strcat(PLAB1[i],rombongan);
                                        strcat(PLAB1[i],"2");
                                    }

                                    else if (strcmp(Ruang2,"LAB2")==0)
                                    {
                                        strcpy(PLAB2[i],input);
                                        strcat(PLAB2[i],"-");
                                        strcat(PLAB2[i],rombongan);
                                        strcat(PLAB2[i],"2");
                                    }
                                    else if(strcmp(Ruang2,"LAB3")==0)
                                    {
                                        strcpy(PLAB3[i],input);
                                        strcat(PLAB3[i],"-");
                                        strcat(PLAB3[i],rombongan);
                                        strcat(PLAB3[i],"2");
                                    }
                                    else if((strcmp(Ruang2,"LSS")==0))
                                    {
                                        strcpy(PLSS[i],input);
                                        strcat(PLSS[i],"-");
                                        strcat(PLSS[i],rombongan);
                                        strcat(PLSS[i],"2");
                                    }
                                    if ((strcmp(Ruang3,"LAB1")==0))
                                    {
                                        strcpy(PLAB1[i],input);
                                        strcat(PLAB1[i],"-");
                                        strcat(PLAB1[i],rombongan);
                                        strcat(PLAB1[i],"3");
                                    }

                                    else if (strcmp(Ruang3,"LAB2")==0)
                                    {
                                        strcpy(PLAB2[i],input);
                                        strcat(PLAB2[i],"-");
                                        strcat(PLAB2[i],rombongan);
                                        strcat(PLAB2[i],"3");
                                    }
                                    else if(strcmp(Ruang3,"LAB3")==0)
                                    {
                                        strcpy(PLAB3[i],input);
                                        strcat(PLAB3[i],"-");
                                        strcat(PLAB3[i],rombongan);
                                        strcat(PLAB3[i],"1");
                                    }
                                    else if((strcmp(Ruang3,"LSS")==0))
                                    {
                                        strcpy(PLSS[i],input);
                                        strcat(PLSS[i],"-");
                                        strcat(PLSS[i],rombongan);
                                        strcat(PLSS[i],"1");
                                    }
                                }

                        printf("Pilih Kode Praktikum (EL2205, EL2208, EB2200)\n");
                        scanf("%s", input);
                        getchar();
                         while ((strcmp(input,"EL2205")!=0)&&(strcmp(input,"EL2208")!=0)&&(strcmp(input,"EB2200")!=0)&&(strcmp(input,"Q")!=0))
                        {
                            printf("Pilih Kode Praktikum (EL2205, EL2208, EB2200)\n");
                            scanf("%s", input);
                            getchar();
                        }
                    }
                    break;
            case 3: tampilkanAsisten(ALAB1,ALAB2,ALAB3,ALSS);
                    break;
            case 4://assign Asisten manual
                    printf("isi 'Q' atau q untuk kembali ke menu\n");
                    printf("Pilih Asisten (A-N): ");
                    scanf("%s", input);
                    getchar();
                    while (strcmp(input,"Q") != 0 && strcmp(input,"q") != 0)
                    {
    	int i;
		printf("Minggu: ");
    	scanf("%d", &minggu);
    	while  (minggu < 3 || minggu > 13)
        {
            printf("minggu nya tidak benar" );
            printf("Minggu: ");
            scanf("%d", &minggu);
        }

    	if (minggu > 2 && minggu <= 13) // cek kondisi apakah ada diminggu perkuliahan
    	{
	    	printf("Hari: ");
	    	scanf("%s", Hari);
	    	getchar();
	    	if (strcmp(Hari,"Senin")==0)
	    	{
	    		//validasi apakah asisten dapat/berhalangan hadir pada hari senin
	    		if ((strcmp(input,"A")==0)||(strcmp(input,"C")==0)||(strcmp(input,"E")==0)||(strcmp(input,"F")==0)||(strcmp(input,"G")==0)||(strcmp(input,"H")==0)||(strcmp(input,"I")==0)||(strcmp(input,"J")==0)||(strcmp(input,"K")==0)||(strcmp(input,"L")==0)||(strcmp(input,"M")==0)||(strcmp(input,"N")==0))
	        	{
	            	printf("Ruang: ");
	            	scanf("%s", Ruang);
	            	getchar();
			        i= minggu * 5 - 14;
			        validAsisten(input, Ruang, i, ALAB1, ALAB2, ALAB3, ALSS, PLAB1, PLAB2, PLAB3, PLSS);
	           }
	           else
	           {
	           		printf("Asisten %s berhalangan hadir pada hari Senin\n",input);
			   }
			}
			else if (strcmp(Hari,"Selasa")==0)
	    	{
	    		//validasi apakah asisten dapat/berhalangan hadir pada hari selasa
	    		if ((strcmp(input,"A")==0)||(strcmp(input,"B")==0)||(strcmp(input,"D")==0)||(strcmp(input,"E")==0)||(strcmp(input,"G")==0)||(strcmp(input,"H")==0)||(strcmp(input,"I")==0)||(strcmp(input,"J")==0)||(strcmp(input,"K")==0)||(strcmp(input,"L")==0)||(strcmp(input,"M")==0))
	        	{
	            	printf("Ruang: ");
	            	scanf("%s", Ruang);
	            	i= minggu * 5 - 13;
	            	validAsisten(input, Ruang, i, ALAB1, ALAB2, ALAB3, ALSS, PLAB1, PLAB2, PLAB3, PLSS);
	        	}
	             else
	        	{
	           		printf("Asisten %s berhalangan hadir pada hari Selasa\n",input);
				}
	    	}
	    	else if (strcmp(Hari,"Rabu")==0)
	    	{
	    		//validasi apakah asisten dapat/berhalangan hadir pada hari Rabu
	    		if ((strcmp(input,"B")==0)||(strcmp(input,"E")==0)||(strcmp(input,"F")==0)||(strcmp(input,"G")==0)||(strcmp(input,"H")==0)||(strcmp(input,"J")==0)||(strcmp(input,"K")==0)||(strcmp(input,"L")==0)||(strcmp(input,"N")==0))
	        	{
	            	printf("Ruang: ");
	            	scanf("%s", Ruang);
	            	i= minggu * 5 - 12;
	            	validAsisten(input, Ruang, i, ALAB1, ALAB2, ALAB3, ALSS, PLAB1, PLAB2, PLAB3, PLSS);
	        	}
	             else
	        	{
	           		printf("Asisten %s berhalangan hadir pada hari Rabu\n",input);
				}
	    	}
	    	else if (strcmp(Hari,"Kamis")==0)
	    	{
	    		//validasi apakah asisten dapat/berhalangan hadir pada hari Kamis
	    		if ((strcmp(input,"A")==0)||(strcmp(input,"B")==0)||(strcmp(input,"C")==0)||(strcmp(input,"D")==0)||(strcmp(input,"E")==0)||(strcmp(input,"F")==0)||(strcmp(input,"I")==0)||(strcmp(input,"J")==0)||(strcmp(input,"K")==0)||(strcmp(input,"L")==0)||(strcmp(input,"N")==0))
	        	{
	            	printf("Ruang: ");
	            	scanf("%s", Ruang);
	            	i= minggu * 5 - 11;
	            	validAsisten(input, Ruang, i, ALAB1, ALAB2, ALAB3, ALSS, PLAB1, PLAB2, PLAB3, PLSS);
	        	}
	             else
	        	{
	           		printf("Asisten %s berhalangan hadir pada hari Kamis\n",input);
				}
	    	}
	    	else if (strcmp(Hari,"Jumat")==0)
	    	{
	    		//validasi apakah asisten dapat/berhalangan hadir pada hari Jumat
	    		if ((strcmp(input,"A")==0)||(strcmp(input,"B")==0)||(strcmp(input,"C")==0)||(strcmp(input,"D")==0)||(strcmp(input,"E")==0)||(strcmp(input,"F")==0)||(strcmp(input,"G")==0)||(strcmp(input,"H")==0)||(strcmp(input,"I")==0)||(strcmp(input,"L")==0)||(strcmp(input,"M")==0)||(strcmp(input,"N")==0))
	        	{
	            	printf("Ruang: ");
	            	scanf("%s", Ruang);
	            	i= minggu * 5 - 10;
	            	validAsisten(input, Ruang, i, ALAB1, ALAB2, ALAB3, ALSS, PLAB1, PLAB2, PLAB3, PLSS);
	        	}
	             else
	        	{
	           		printf("Asisten %s berhalangan hadir pada hari Jumat\n",input);
				}
	    	}
		}
        printf("Pilih Asisten (A-N): ");
        scanf("%s", input);
	}

                    break;
            case 5:printf("SKIIIIIIPPPPP");
                    break;
            case 6:// subprogram muatProyek
                    break;
            case 7: ruleChecker(PLAB1,PLAB2,PLAB3,PLSS);
                    break;
            case 8: saveFile1(namaProyek,PLAB1,PLAB2,PLAB3,PLSS);
                    saveFile2(namaProyek,ALAB1,ALAB2,ALAB3,ALSS);
                    output3Menu(pilihan1);
                    break;
        }
    }
}
void output3Menu(int *pilihan1){
    printf("\nMenu:\n1. Buat Proyek Baru\n2. Muat Proyek dari Berkas\n3. Keluar\nMasukan:");
    scanf("%d",pilihan1);
    while (*pilihan1>3 || *pilihan1<1){
        printf("Masukan salah, ulangi lagi\n");//error message
        printf("\nMenu:\n1. Buat Proyek Baru\n2. Muat Proyek dari Berkas\n3. Keluar\nMasukan:");
        scanf("%d",pilihan1);
    }
}
void output8MenuUtama(int *pilihan2){
    printf("\n[Menu Utama]\nPilih Mode:\n1. Tampilkan Schedule\n2. Schedule Manual\n3. Tampilkan Status Assignment Asisten\n4. Assign Asisten Manual\n5. Schedule Otomatis\n6. Assign Otomatis\n7. Rule Checker\n8. Simpan Proyek dan Keluar\nPilih Mode ");
    scanf("%d",pilihan2);
    while (*pilihan2>8 || *pilihan2<1){
        printf("yg bener dong\n");//error message
        printf("\n[Menu Utama]\nPilih Mode:\n1. Tampilkan Schedule\n2. Schedule Manual\n3. Tampilkan Status Assignment Asisten\n4. Assign Asisten Manual\n5. Schedule Otomatis\n6. Assign Otomatis\n7. Rule Checker\n8. Simpan Proyek dan Keluar\nPilih Mode ");
        scanf("%d",pilihan2);
    }
}
void ruleChecker(char PLAB1[BARIS][KOLOM1],char PLAB2[BARIS][KOLOM1],char PLAB3[BARIS][KOLOM1],char PLSS[BARIS][KOLOM1]){
    char namaDRC[20];
    printf("[DRC]");
    printf("Masukkan File DRC (dalam format .txt):");
    scanf("%s",&namaDRC);
    FILE*eksternal;
    eksternal=fopen(namaDRC,"r");
    int i,cek,idx;
    int minggu[10];
    char hari[10][10];
    i=1; cek=0;
    while (!feof(eksternal)){
        fscanf(eksternal,"%d %s",&minggu[i],hari[i]);
        //penentuan indeks untuk dicek di array
        if (strcmp(hari[i],"Senin")==0){
            idx=5*minggu[i]-14;
        } else if (strcmp(hari[i],"Selasa")==0){
            idx=5*minggu[i]-13;
        } else if (strcmp(hari[i],"Rabu")==0){
            idx=5*minggu[i]-12;
        } else if (strcmp(hari[i],"Kamis")==0){
            idx=5*minggu[i]-11;
        } else if (strcmp(hari[i],"Jumat")==0){
            idx=5*minggu[i]-10;
        }
        if (PLAB1[idx][1]== '\0' && PLAB2[idx][1]=='\0' && PLAB3[idx][1]=='\0' && PLSS[idx][1]=='\0'){
            cek++;
        }
        i++;
    }
    printf("%d/%d Rule is checked",cek,i-1);
    fclose(eksternal);
}

void validAsisten (char input[2], char Ruang[5], int i, char ALAB1[BARIS][KOLOM2], char ALAB2[BARIS][KOLOM2], char ALAB3[BARIS][KOLOM2], char ALSS[BARIS][KOLOM2], char PLAB1[BARIS][KOLOM1], char PLAB2[BARIS][KOLOM1], char PLAB3[BARIS][KOLOM1], char PLSS[BARIS][KOLOM1])
{
	if ((strcmp(input,"A")==0)||(strcmp(input,"B")==0)||(strcmp(input,"C")==0)||(strcmp(input,"D")==0)||(strcmp(input,"F")==0)) //EL2205
	{
		if (strcmp(Ruang,"LAB1")==0)
		{
	    	if (strcmp (strtok (PLAB1[i],"-"),"EL2205")==0)
	    	{
                if (strcmp(ALAB1[i],"") == 0)
                {
                    strcpy(ALAB1[i],input);
                }
                else if (strlen(ALAB1[i])==1)
                {
                    strcat(ALAB1[i],",");
                    strcat(ALAB1[i],input);
                }
                else if (strlen(ALAB1[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205)\n", input);
			}
		}
		else if (strcmp(Ruang,"LAB2")==0)
		{
	    	if (strcmp (strtok (PLAB2[i],"-"),"EL2205")==0)
	    	{
	    		if (strcmp(ALAB2[i],"") == 0)
                {
                    strcpy(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==1)
                {
                    strcat(ALAB2[i],",");
                    strcat(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205)\n", input);
			}
		}
		else if (strcmp(Ruang,"LAB3")==0)
		{
	    	if (strcmp (strtok (PLAB3[i],"-"),"EL2205")==0)
	    	{
	    		if (strcmp(ALAB3[i],"") == 0)
                {
                    strcpy(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==1)
                {
                    strcat(ALAB3[i],",");
                    strcat(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205)\n", input);
			}
		}
		else if (strcmp(Ruang,"LSS")==0)
		{
	    	if (strcmp (strtok (PLSS[i],"-"),"EL2205")==0)
	    	{
	    		if (strcmp(ALSS[i],"") == 0)
	            {
	                strcpy(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==1)
	            {
                    strcat(ALSS[i],",");
                    strcat(ALSS[i],input);
	            }
                else if (strlen(ALSS[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205)\n", input);
			}
		}
	}
	else if ((strcmp(input,"H")==0)||(strcmp(input,"J")==0)||(strcmp(input,"L")==0)||(strcmp(input,"M")==0)) //EL2208
	{
		if (strcmp(Ruang,"LAB1")==0)
		{
			if (strcmp (strtok (PLAB1[i],"-"),"EL2208")==0)
			{

                if (strcmp(ALAB1[i],"") == 0)
                {
                    strcpy(ALAB1[i],input);
                }
	            else if (strlen(ALAB1[i])==1)
                {
                    strcat(ALAB1[i],",");
                    strcat(ALAB1[i],input);
                }
	            else if (strlen(ALAB1[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208)\n", input);
			}
		}
		else if (strcmp(Ruang,"LAB2")==0)
		{
			if (strcmp (strtok (PLAB2[i],"-"),"EL2208")==0)
			{
	    		if (strcmp(ALAB2[i],"") == 0)
                {
                    strcpy(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==1)
                {
                    strcat(ALAB2[i],",");
                    strcat(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
            }
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208)\n", input);
			}
		}
		else if (strcmp(Ruang,"LAB3")==0)
		{
			if (strcmp (strtok (PLAB3[i],"-"),"EL2208")==0)
			{
	    		if (strcmp(ALAB3[i],"") == 0)
                {
                    strcpy(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==1)
                {
                    strcat(ALAB3[i],",");
                    strcat(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208)\n", input);
			}
		}
		if (strcmp(Ruang,"LSS")==0)
		{
			if (strcmp (strtok (PLSS[i],"-"),"EL2208")==0)
	    	{
	    		if (strcmp(ALSS[i],"") == 0)
	            {
	                strcpy(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==1)
	            {
                    strcat(ALSS[i],",");
                    strcat(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208)\n", input);
			}
		}
	}
	else if ((strcmp(input,"E")==0)) //EL2205, EL2208
	{
		if (strcmp(Ruang, "LAB1")==0)
		{
			if ((strcmp (strtok (PLAB1[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB1[i],"-"),"EL2208")==0))
	   		{

	    		 if (strcmp(ALAB1[i],"") == 0)
                {
                    strcpy(ALAB1[i],input);
                }
	            else if (strlen(ALAB1[i])==1)
                {
                    strcat(ALAB1[i],",");
                    strcat(ALAB1[i],input);
                }
	        	else if (strlen(ALAB1[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208)\n", input);
			}
		}
		if (strcmp(Ruang, "LAB2")==0)
		{
			if ((strcmp (strtok (PLAB2[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB2[i],"-"),"EL2208")==0))
	   		{
	    		if (strcmp(ALAB2[i],"") == 0)
                {
                    strcpy(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==1)
                {
                    strcat(ALAB2[i],",");
                    strcat(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208)\n", input);
			}
		}
		else if (strcmp(Ruang, "LAB3")==0)
		{
			if ((strcmp (strtok (PLAB3[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB3[i],"-"),"EL2208")==0))
	   		{
	    		if (strcmp(ALAB3[i],"") == 0)
                {
                    strcpy(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==1)
                {
                    strcat(ALAB3[i],",");
                    strcat(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208)\n", input);
			}
		}
		else if (strcmp(Ruang, "LSS")==0)
		{
			if ((strcmp (strtok (PLSS[i],"-"),"EL2205")==0) || (strcmp (strtok (PLSS[i],"-"),"EL2208")==0))
	    	{
	    		if (strcmp(ALSS[i],"") == 0)
	            {
	                strcpy(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==1)
	            {
	                strcat(ALSS[i],",");
	                strcat(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208)\n", input);
			}
		}
	}
	else if ((strcmp(input,"G")==0)) //EL2205, EB2200
	{
		if (strcmp(Ruang,"LAB1")==0)
		{
			if ((strcmp (strtok (PLAB1[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB1[i],"-"),"EB2200")==0))
			{

	    		if (strcmp(ALAB1[i],"") == 0)
                {
                    strcpy(ALAB1[i],input);
                }
	            else if (strlen(ALAB1[i])==1)
                {
                    strcat(ALAB1[i],",");
                    strcat(ALAB1[i],input);
                }
	            else if (strlen(ALAB1[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang,"LAB2")==0)
		{
			if ((strcmp (strtok (PLAB2[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB2[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALAB2[i],"") == 0)
                {
                    strcpy(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==1)
                {
                    strcat(ALAB2[i],",");
                    strcat(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang,"LAB3")==0)
		{
			if ((strcmp (strtok (PLAB3[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB3[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALAB3[i],"") == 0)
                {
                    strcpy(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==1)
                {
                    strcat(ALAB3[i],",");
                    strcat(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang,"LSS")==0)
		{
			if ((strcmp (strtok (PLSS[i],"-"),"EL2205")==0) || (strcmp (strtok (PLSS[i],"-"),"EB2200")==0))
	    	{
	    		if (strcmp(ALSS[i],"") == 0)
	            {
	                strcpy(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==1)
	            {
	                strcat(ALSS[i],",");
	                strcat(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==3)
	            {
	                printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
	            }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EB2200)\n", input);
			}
		}
	}
	else if ((strcmp(input,"K")==0)||(strcmp(input,"N")==0)) //EL2208, EB2200
	{
		if (strcmp(Ruang, "LAB1")==0)
		{
			if ((strcmp (strtok (PLAB1[i],"-"),"EL2208")==0) || (strcmp (strtok (PLAB1[i],"-"),"EB2200")==0))
			{

                if (strcmp(ALAB1[i],"") == 0)
                {
                    strcpy(ALAB1[i],input);
                }
                else if (strlen(ALAB1[i])==1)
                {
                    strcat(ALAB1[i],",");
                    strcat(ALAB1[i],input);
                }
                else if (strlen(ALAB1[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208, EB2200\n)", input);
			}
		}
		else if (strcmp(Ruang, "LAB2")==0)
		{
			if ((strcmp (strtok (PLAB2[i],"-"),"EL2208")==0) || (strcmp (strtok (PLAB2[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALAB2[i],"") == 0)
                {
                    strcpy(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==1)
                {
                    strcat(ALAB2[i],",");
                    strcat(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang, "LAB3")==0)
		{
			if ((strcmp (strtok (PLAB3[i],"-"),"EL2208")==0) || (strcmp (strtok (PLAB3[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALAB3[i],"") == 0)
                {
                    strcpy(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==1)
                {
                    strcat(ALAB3[i],",");
                    strcat(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang, "LSS")==0)
		{
			if ((strcmp (strtok (PLSS[i],"-"),"EL2208")==0) || (strcmp (strtok (PLSS[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALSS[i],"") == 0)
	            {
	                strcpy(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==1)
	            {
	                strcat(ALSS[i],",");
	                strcat(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==3)
	            {
	                printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
	            }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2208, EB2200)\n", input);
			}
		}
	}
	else if ((strcmp(input,"I")==0)) //EL2205, EL2208, EB2200
	{
		if (strcmp(Ruang, "LAB1")==0)
		{
			if ((strcmp (strtok (PLAB1[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB1[i],"-"),"EL2208")==0) || (strcmp (strtok (PLAB1[i],"-"),"EB2200")==0))
			{

	    		 if (strcmp(ALAB1[i],"") == 0)
                {
                    strcpy(ALAB1[i],input);
                }
                else if (strlen(ALAB1[i])==1)
                {
                    strcat(ALAB1[i],",");
                    strcat(ALAB1[i],input);
                }
                else if (strlen(ALAB1[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang, "LAB2")==0)
		{
			if ((strcmp (strtok (PLAB2[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB2[i],"-"),"EL2208")==0) || (strcmp (strtok (PLAB2[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALAB2[i],"") == 0)
                {
                    strcpy(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==1)
                {
                    strcat(ALAB2[i],",");
                    strcat(ALAB2[i],input);
                }
	            else if (strlen(ALAB2[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang, "LAB3")==0)
		{
			if ((strcmp (strtok (PLAB3[i],"-"),"EL2205")==0) || (strcmp (strtok (PLAB3[i],"-"),"EL2208")==0) || (strcmp (strtok (PLAB3[i],"-"),"EB2200")==0))
			{
	    		if (strcmp(ALAB3[i],"") == 0)
                {
                    strcpy(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==1)
                {
                    strcat(ALAB3[i],",");
                    strcat(ALAB3[i],input);
                }
	            else if (strlen(ALAB3[i])==3)
                {
                    printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
                }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208, EB2200)\n", input);
			}
		}
		else if (strcmp(Ruang, "LSS")==0)
		{
			if ((strcmp (strtok (PLSS[i],"-"),"EL2205")==0) || (strcmp (strtok (PLSS[i],"-"),"EL2208")==0) || (strcmp (strtok (PLSS[i],"-"),"EB2200")==0))
	   		{
	    		if (strcmp(ALSS[i],"") == 0)
	            {
	                strcpy(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==1)
	            {
	                strcat(ALSS[i],",");
	                strcat(ALSS[i],input);
	            }
	            else if (strlen(ALSS[i])==3)
	            {
	                printf("Input Asisten tidak dapat dilakukan karena sudah terdapat dua asisten pada ruangan tersebut \n");
	            }
			}
			else
			{
				printf("Jadwal Asisten Praktikum %s tidak sesuai (tidak ada Rombongan EL2205, EL2208, EB2200)\n", input);
			}
		}
	}
}
