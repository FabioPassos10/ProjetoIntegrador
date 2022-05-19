#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <locale.h>

FILE *fil;
int op,i,j,equipePivo;
int maiorEqp1=0, maiorEqp2=0, maiorEqp3=0, maiorEqp4=0, maiorEqp5=0;
float  Eqp1[9],Eqp2[9], Eqp3[9],Eqp4[9],Eqp5[9]; //Declarando o vetor das equipes com 3 posições que vão corresponder as tres decidas
float TempoEmsEqp1[3],TempoEmsEqp2[3],TempoEmsEqp3[3],TempoEmsEqp4[3],TempoEmsEqp5[3]; //Vetor com o tempo em segundo das baterias de cada eqp
int NumeroEquipe[5] = {1, 2, 3, 4, 5};
float tempoMedio1, tempoMedio2, tempoMedio3, tempoMedio4, tempoMedio5;
float Tfinal[5],tempo; // Vetor que vai guardar o tempo final
char ch;


//Obs eu não fiz um tratamento pra segundo minuto e centesimo entoa 80 minutos vai passar kkk
int main()
{

    SetConsoleTitle("OVERTIME");
    setlocale(LC_ALL,"portuguese");
    printf("\n\n\n\n\n\n");
    system("color 3");
    printf("                  ________  ___      ___ _______   ________  _________  ___  _____ ______   _______ \n");
    printf("                 |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\___   ___\\\\  \\|\\   _ \\  _   \\|\\  ___ \\\\ \n");
    printf("                 \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\ \\  \\\\\\__\\ \\  \\ \\   __/|  \n");
    printf("                  \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\   \\ \\  \\ \\ \\  \\ \\  \\\\|__| \\  \\ \\  \\_|/__  \n");
    printf("                   \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\|   \\ \\  \\ \\ \\  \\ \\  \\    \\ \\  \\ \\  \\_|\\ \\  \n");
    printf("                    \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\    \\ \\__\\ \\ \\__\\ \\__\\    \\ \\__\\ \\_______\\\\ \n");
    printf("                     \\|_______|\\|__|/       \\|_______|\\|__|\\|__|    \\|__|  \\|__|\\|__|     \\|__|\\|_______|  \n");

    printf("\n\n                                                       Loading...                                         \n\n\n");
    printf("                     __________________________________________________________________________________             \n");
    Sleep(5000);
    system("cls");
    system("color 7");


    do
    {
        system("cls");
        printf("         +---------------------------------------+\n");
        printf("         |                   MENU                |\n");
        printf("         +---------------------------------------+\n");
        printf("         | Digite 1 | para Cadastrar 1º Bateria  |\n");
        printf("         | Digite 2 | para Cadastrar 2º Bateria  |\n");
        printf("         | Digite 3 | para Cadastrar 3º Bateria  |\n");
        printf("         | Digite 4 | para Classificação Geral   |\n");
        printf("         | Digite 5 | para Exportar Resultados   |\n");
        printf("         | Digite 6 | para Sair                  |\n");
        printf("         +----------+----------------------------+\n");

        printf("\n Opção Escolhida > ");
        scanf("%d",&op);

        switch(op)
        {
        case 1:

            system("cls");
            printf("\t\t+-----------------------------------------------------+\n");
            printf("\t\t|                       Bateria 1º                    |\n");
            printf("\t\t+-----------------------------------------------------+\n");

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 1:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp1[0]);
            printf("Segundos: ");
            scanf("%f",&Eqp1[1]);
            printf("Centésimos: ");
            scanf("%f",&Eqp1[2] );

            TempoEmsEqp1[0] = ((Eqp1[0]*60)+ Eqp1[1] + (Eqp1[2] / 100));


            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 2:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp2[0]);
            printf("Segundos: ");
            scanf("%f",&Eqp2[1]);
            printf("Centésimos: ");
            scanf("%f",&Eqp2[2] );

            TempoEmsEqp2[0]= (Eqp2[0] * 60)+ Eqp2[1] + (Eqp2[2] / 100);

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 3:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp3[0]);
            printf("Segundos: ");
            scanf("%f",&Eqp3[1]);
            printf("Centésimos: ");
            scanf("%f",&Eqp3[2] );

            TempoEmsEqp3[0]= (Eqp3[0] * 60)+ (Eqp3[1]) + (Eqp3[2] / 100);

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 4:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp4[0]);
            printf("Segundos: ");
            scanf("%f",&Eqp4[1]);
            printf("Centésimos: ");
            scanf("%f",&Eqp4[2] );

            TempoEmsEqp4[0]= (Eqp4[0]*60)+ Eqp4[1] + (Eqp4[2] / 100);

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 5:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp5[0]);
            printf("Segundos: ");
            scanf("%f",&Eqp5[1]);
            printf("Centésimos: ");
            scanf("%f",&Eqp5[2] );
            TempoEmsEqp5[0]= (Eqp5[0]*60)+ Eqp5[1] + (Eqp5[2] / 100);

            printf("\n");
            system("pause");

            break;

        case 2:

            system("cls");
            printf("\t\t+-----------------------------------------------------+\n");
            printf("\t\t|                       Bateria 2º                    |\n");
            printf("\t\t+-----------------------------------------------------+\n");

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 1:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp1[3]);
            printf("Segundos: ");
            scanf("%f",&Eqp1[4]);
            printf("Centésimos: ");
            scanf("%f",&Eqp1[5] );

            TempoEmsEqp1[1] = ((Eqp1[3]*60)+ Eqp1[4] + (Eqp1[5] / 100));

            printf("\n\n+---------------------------+\n");
            printf("|      Tempo da Equipe 2:   |\n");
            printf("+---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp2[3]);
            printf("Segundos: ");
            scanf("%f",&Eqp2[4]);
            printf("Centésimos: ");
            scanf("%f",&Eqp2[5] );

            TempoEmsEqp2[1]= (Eqp2[3] * 60)+ Eqp2[4] + (Eqp2[5] / 100);

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 3:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp3[3]);
            printf("Segundos: ");
            scanf("%f",&Eqp3[4]);
            printf("Centésimos: ");
            scanf("%f",&Eqp3[5] );

            TempoEmsEqp3[1]= (Eqp3[3] * 60)+ (Eqp3[4]) + (Eqp3[5] / 100);

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 4:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp4[3]);
            printf("Segundos: ");
            scanf("%f",&Eqp4[4]);
            printf("Centésimos: ");
            scanf("%f",&Eqp4[5] );

            TempoEmsEqp4[1]= (Eqp4[3]*60)+ Eqp4[4] + (Eqp4[5] / 100);

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 5:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp5[3]);
            printf("Segundos: ");
            scanf("%f",&Eqp5[4]);
            printf("Centésimos: ");
            scanf("%f",&Eqp5[5] );
            TempoEmsEqp5[1]= (Eqp5[3]*60)+ Eqp5[4] + (Eqp5[5] / 100);

            printf("\n");
            system("pause");
            break;

        case 3:

            system("cls");
            printf("\t\t+-----------------------------------------------------+\n");
            printf("\t\t|                       Bateria 3º                    |\n");
            printf("\t\t+-----------------------------------------------------+\n");

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 1:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp1[6]);
            printf("Segundos: ");
            scanf("%f",&Eqp1[7]);
            printf("Centésimos: ");
            scanf("%f",&Eqp1[8] );

            TempoEmsEqp1[2] = ((Eqp1[6]*60)+ Eqp1[7] + (Eqp1[8] / 100)); // tranformando o tudo em segundo
            // e guardando no vetor Tempo em segundo Equipe 1

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 2:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp2[6]);
            printf("Segundos: ");
            scanf("%f",&Eqp2[7]);
            printf("Centésimos: ");
            scanf("%f",&Eqp2[8] );

            TempoEmsEqp2[2]= ((Eqp2[6] * 60)+ Eqp2[7] + (Eqp2[8] / 100)); // tranformando o tudo em segundo
            //e guardando no vetor Tempo em Segundos da equipe 2

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 3:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp3[6]);
            printf("Segundos: ");
            scanf("%f",&Eqp3[7]);
            printf("Centésimos: ");
            scanf("%f",&Eqp3[8] );

            TempoEmsEqp3[2]= (Eqp3[6] * 60)+ (Eqp3[7]) + (Eqp3[8] / 100); // tranformando tudo em segundo
            // e guardando no vetor Tempo em segundos da equipe 3

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 4:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp4[6]);
            printf("Segundos: ");
            scanf("%f",&Eqp4[7]);
            printf("Centésimos: ");
            scanf("%f",&Eqp4[8] );

            TempoEmsEqp4[2]= (Eqp4[6]*60)+ Eqp4[7] + (Eqp4[8] / 100); // tranformando tudo em segundo
            // e guardando no vetor Tempo segundos da equipe 4

            printf("\n\n +---------------------------+\n");
            printf(" |      Tempo da Equipe 5:   |\n");
            printf(" +---------------------------+\n");
            printf("Minutos: ");
            scanf("%f",&Eqp5[6]);
            printf("Segundos: ");
            scanf("%f",&Eqp5[7]);
            printf("Centésimos: ");
            scanf("%f",&Eqp5[8] );
            TempoEmsEqp5[2]= (Eqp5[6]*60)+ Eqp5[7] + (Eqp5[8] / 100); // tranformando tudo em segundo
            // e guardando no vetor tempo segundo da equipe 5


            printf("\n");
            system("pause");
            break;
        case 4:

            system("cls");
            printf("\n\n\n\n\n\n");
            system("color 4");

            printf("                  ________  ___      ___ _______   ________  _________  ___  _____ ______   _______ \n");
            printf("                 |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\___   ___\\\\  \\|\\   _ \\  _   \\|\\  ___ \\\\ \n");
            printf("                 \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\ \\  \\\\\\__\\ \\  \\ \\   __/|  \n");
            printf("                  \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\   \\ \\  \\ \\ \\  \\ \\  \\\\|__| \\  \\ \\  \\_|/__  \n");
            printf("                   \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\|   \\ \\  \\ \\ \\  \\ \\  \\    \\ \\  \\ \\  \\_|\\ \\  \n");
            printf("                    \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\    \\ \\__\\ \\ \\__\\ \\__\\    \\ \\__\\ \\_______\\\\ \n");
            printf("                     \\|_______|\\|__|/       \\|_______|\\|__|\\|__|    \\|__|  \\|__|\\|__|     \\|__|\\|_______|  \n");

            printf("\n\n\t\t\t\tAguarde um momento calculando resultados... ");

            Sleep(5000);
            system("cls");
            system("color 7");

            {
                if(TempoEmsEqp1[0] > TempoEmsEqp1[1] && TempoEmsEqp1[0] > TempoEmsEqp1[2])
                {
                    tempoMedio1 = (TempoEmsEqp1[1]+TempoEmsEqp1[2])/2;
                }
                if(TempoEmsEqp1[1] > TempoEmsEqp1[0] && TempoEmsEqp1[1] > TempoEmsEqp1[2])
                {
                    tempoMedio1 = (TempoEmsEqp1[0]+TempoEmsEqp1[2])/2;
                }
                if(TempoEmsEqp1[2] > TempoEmsEqp1[0] && TempoEmsEqp1[2] > TempoEmsEqp1[1])
                {
                    tempoMedio1 = (TempoEmsEqp1[0]+TempoEmsEqp1[1])/2;
                }


                if(TempoEmsEqp2[0] > TempoEmsEqp2[1] && TempoEmsEqp2[0] > TempoEmsEqp2[2])
                {
                    tempoMedio2 = (TempoEmsEqp2[1]+TempoEmsEqp2[2])/2;
                }
                if(TempoEmsEqp2[1] > TempoEmsEqp2[0] && TempoEmsEqp2[1] > TempoEmsEqp2[2])
                {
                    tempoMedio2 = (TempoEmsEqp2[0]+TempoEmsEqp2[2])/2;
                }
                if(TempoEmsEqp2[2] > TempoEmsEqp2[0] && TempoEmsEqp2[2] > TempoEmsEqp2[1])
                {
                    tempoMedio2 = (TempoEmsEqp2[0]+TempoEmsEqp2[1])/2;
                }


                if(TempoEmsEqp3[0] > TempoEmsEqp3[1] && TempoEmsEqp3[0] > TempoEmsEqp3[2])
                {
                    tempoMedio3 = (TempoEmsEqp3[1]+TempoEmsEqp3[2])/2;
                }
                if(TempoEmsEqp3[1] > TempoEmsEqp3[0] && TempoEmsEqp3[1] > TempoEmsEqp3[2])
                {
                    tempoMedio3 = (TempoEmsEqp3[0]+TempoEmsEqp3[2])/2;
                }
                if(TempoEmsEqp3[2] > TempoEmsEqp3[0] && TempoEmsEqp3[2] > TempoEmsEqp3[1])
                {
                    tempoMedio3 = (TempoEmsEqp3[0]+TempoEmsEqp3[1])/2;
                }



                if(TempoEmsEqp4[0] > TempoEmsEqp4[1] && TempoEmsEqp4[0] > TempoEmsEqp4[2])
                {
                    tempoMedio4 = (TempoEmsEqp4[1]+TempoEmsEqp4[2])/2;
                }
                if(TempoEmsEqp4[1] > TempoEmsEqp4[0] && TempoEmsEqp4[1] > TempoEmsEqp4[2])
                {
                    tempoMedio4 = (TempoEmsEqp4[0]+TempoEmsEqp4[2])/2;
                }
                if(TempoEmsEqp4[2] > TempoEmsEqp4[0] && TempoEmsEqp4[2] > TempoEmsEqp4[1])
                {
                    tempoMedio4 = (TempoEmsEqp4[0]+TempoEmsEqp4[1])/2;
                }




                if(TempoEmsEqp5[0] > TempoEmsEqp5[1] && TempoEmsEqp5[0] > TempoEmsEqp5[2])
                {
                    tempoMedio5 = (TempoEmsEqp5[1]+TempoEmsEqp5[2])/2;
                }
                if(TempoEmsEqp5[1] > TempoEmsEqp5[0] && TempoEmsEqp5[1] > TempoEmsEqp5[2])
                {
                    tempoMedio5 = (TempoEmsEqp5[0]+TempoEmsEqp5[2])/2;
                }
                if(TempoEmsEqp5[2] > TempoEmsEqp5[0] && TempoEmsEqp5[2] > TempoEmsEqp5[1])
                {
                    tempoMedio5 = (TempoEmsEqp5[0]+TempoEmsEqp5[1])/2;
                }

            }

            Tfinal[0]=tempoMedio1;
            Tfinal[1]=tempoMedio2;
            Tfinal[2]=tempoMedio3;
            Tfinal[3]=tempoMedio4;
            Tfinal[4]=tempoMedio5;

            for ( i = 0; i < 5; i++)
            {
                for(j = i+1; j <5; j++)
                {
                    if(Tfinal[i]>Tfinal[j])
                    {
                        tempo = Tfinal[i];
                        equipePivo = NumeroEquipe[i];
                        Tfinal[i] = Tfinal[j];
                        NumeroEquipe[i] = NumeroEquipe[j];
                        Tfinal[j] = tempo;
                        NumeroEquipe[j] = equipePivo;
                    }
                }
            }
            printf("\n\n\n");
            printf("\t+--------------------------------------------+\n");
            printf("\t|            Valores Das baterias            |\n");
            printf("\t+--------------------------------------------+\n");
            printf("                  Bateria 1       Bateria 2       Bateria 3\n");
            printf("      Equipe1:         %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \n", Eqp1[0], Eqp1[1],Eqp1[2],Eqp1[3], Eqp1[4],Eqp1[5], Eqp1[6], Eqp1[7],Eqp1[8]);
            printf("      Equipe2:         %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \n", Eqp2[0], Eqp2[1],Eqp2[2],Eqp2[3], Eqp2[4],Eqp2[5], Eqp2[6], Eqp2[7],Eqp2[8]);
            printf("      Equipe3:         %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \n", Eqp3[0], Eqp3[1],Eqp3[2],Eqp3[3], Eqp3[4],Eqp3[5], Eqp3[6], Eqp3[7],Eqp3[8]);
            printf("      Equipe4:         %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \n", Eqp4[0], Eqp4[1],Eqp4[2],Eqp4[3], Eqp4[4],Eqp4[5], Eqp4[6], Eqp4[7],Eqp4[8]);
            printf("      Equipe5:         %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \t  %.0f:%.0f:%.0f \n", Eqp5[0], Eqp5[1],Eqp5[2],Eqp5[3], Eqp5[4],Eqp5[5], Eqp5[6], Eqp5[7],Eqp5[8]);
            printf("\n\n");
            float tmin, tseg, tmil;

            printf("\t+--------------------------------------------+\n");
            printf("\t|            Classificação final             |\n");
            printf("\t+--------------------------------------------+\n");
            for(i = 0; i < 5; i++)
            {
                tmin = (int)Tfinal[i]/60;
                tseg = (int)Tfinal[i] - tmin*60;
                tmil  = ((Tfinal[i] - tmin*60) - tseg)*100;

                printf("\t    %d° lugar - EQUIPE %d - TEMPO (%.0f:%.0f:%.0f)           \n", i+1, NumeroEquipe[i], tmin, tseg, tmil);

            }
            printf("\t+--------------------------------------------+");
            printf("\n\n");
            system("pause");

            break;
        case 5:

            fil=fopen("OverTime.txt","w");


            system("color 3");
            fprintf(fil,"                  ________  ___      ___ _______   ________  _________  ___  _____ ______   _______ \n");
            fprintf(fil,"                 |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\___   ___\\\\  \\|\\   _ \\  _   \\|\\  ___ \\\\ \n");
            fprintf(fil,"                 \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\ \\  \\\\\\__\\ \\  \\ \\   __/|  \n");
            fprintf(fil,"                  \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\   \\ \\  \\ \\ \\  \\ \\  \\\\|__| \\  \\ \\  \\_|/__  \n");
            fprintf(fil,"                   \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\|   \\ \\  \\ \\ \\  \\ \\  \\    \\ \\  \\ \\  \\_|\\ \\  \n");
            fprintf(fil,"                    \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\    \\ \\__\\ \\ \\__\\ \\__\\    \\ \\__\\ \\_______\\\\ \n");
            fprintf(fil,"                     \\|_______|\\|__|/       \\|_______|\\|__|\\|__|    \\|__|  \\|__|\\|__|     \\|__|\\|_______|  \n");

            fprintf(fil,"\n\n\n\n");

            fprintf(fil,"\n                    Bateria 1                   Bateria 2                                  Bateria 3\n");
            fprintf(fil," Tempo em segundos Ep1: %.2f s \t| Tempo em segundos Ep1: %.2f s \t| Tempo em segundos Ep1: %.2f s \n", TempoEmsEqp1[0], TempoEmsEqp1[1], TempoEmsEqp1[2]);
            fprintf(fil," Tempo em segundos Ep2: %.2f s \t| Tempo em segundos Ep2: %.2f s \t| Tempo em segundos Ep2: %.2f s \n", TempoEmsEqp2[0], TempoEmsEqp2[1], TempoEmsEqp2[2]);
            fprintf(fil," Tempo em segundos Ep3: %.2f s \t| Tempo em segundos Ep3: %.2f s \t| Tempo em segundos Ep3: %.2f s \n", TempoEmsEqp3[0],TempoEmsEqp3[1], TempoEmsEqp3[2]);
            fprintf(fil," Tempo em segundos Ep4: %.2f s \t| Tempo em segundos Ep4: %.2f s \t| Tempo em segundos Ep4: %.2f s \n", TempoEmsEqp4[0], TempoEmsEqp4[1], TempoEmsEqp4[2]);
            fprintf(fil," Tempo em segundos Ep5: %.2f s \t| Tempo em segundos Ep5: %.2f s \t| Tempo em segundos Ep5: %.2f s \n", TempoEmsEqp5[0],TempoEmsEqp5[1], TempoEmsEqp5[2]);

            fprintf(fil,"\n\n\n\n");
            fprintf(fil,"\t+--------------------------------------------+\n");
            fprintf(fil,"\t|            Classificação final             |\n");
            fprintf(fil,"\t+--------------------------------------------+\n");
            for(i = 0; i < 5; i++)
            {
                tmin = (int)Tfinal[i]/60;
                tseg = (int)Tfinal[i] - tmin*60;
                tmil  = ((Tfinal[i] - tmin*60) - tseg)*100;

                fprintf(fil,"\t    %d° lugar - EQUIPE %d - TEMPO (%.0f:%.0f:%.0f)           \n", i+1, NumeroEquipe[i], tmin, tseg, tmil);

            }
            fprintf(fil,"\t+--------------------------------------------+\n");
            fclose(fil);
            system("cls");
            printf("\n\n\n\n\n\n");
            system("color 3");

            printf("                  ________  ___      ___ _______   ________  _________  ___  _____ ______   _______ \n");
            printf("                 |\\   __  \\|\\  \\    /  /|\\  ___ \\ |\\   __  \\|\\___   ___\\\\  \\|\\   _ \\  _   \\|\\  ___ \\\\ \n");
            printf("                 \\ \\  \\|\\  \\ \\  \\  /  / | \\   __/|\\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\ \\  \\\\\\__\\ \\  \\ \\   __/|  \n");
            printf("                  \\ \\  \\\\\\  \\ \\  \\/  / / \\ \\  \\_|/_\\ \\   _  _\\   \\ \\  \\ \\ \\  \\ \\  \\\\|__| \\  \\ \\  \\_|/__  \n");
            printf("                   \\ \\  \\\\\\  \\ \\    / /   \\ \\  \\_|\\ \\ \\  \\\\  \\|   \\ \\  \\ \\ \\  \\ \\  \\    \\ \\  \\ \\  \\_|\\ \\  \n");
            printf("                    \\ \\_______\\ \\__/ /     \\ \\_______\\ \\__\\\\ _\\    \\ \\__\\ \\ \\__\\ \\__\\    \\ \\__\\ \\_______\\\\ \n");
            printf("                     \\|_______|\\|__|/       \\|_______|\\|__|\\|__|    \\|__|  \\|__|\\|__|     \\|__|\\|_______|  \n");

            printf("\n\n\t\t\t\t\t\tExportando Dados... ");
            Sleep(3000);
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t\t\tDados exportados com sucesso... ");
            Sleep(2000);
            system("color 7");


            break;
        case 6:
            system("cls");
            system("color 3");

            printf("\t\t\t\t       ¶¶¶¶¶                           ¶¶¶¶       \n");
            printf("\t\t\t\t      ¶¶___¶¶¶¶¶¶¶              ¶¶¶¶¶¶¶¶__¶¶      \n");
            printf("\t\t\t\t      ¶¶¶________¶¶¶          ¶¶¶¶______¶__¶      \n");
            printf("\t\t\t\t     ¶¶____________¶¶        ¶¶___________¶¶¶     \n");
            printf("\t\t\t\t    ¶¶____________¶¶¶       ¶¶¶_____________¶¶    \n");
            printf("\t\t\t\t   ¶¶_________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__________¶¶    \n");
            printf("\t\t\t\t   ¶¶______¶¶_¶¶¶¶_____________¶¶¶¶¶_________¶    \n");
            printf("\t\t\t\t    ¶¶__¶¶¶¶¶________________________¶¶¶____¶¶    \n");
            printf("\t\t\t\t    ¶¶¶¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶____¶¶¶¶¶¶¶    \n");
            printf("\t\t\t\t       ¶¶¶____¶¶¶_______¶¶_______¶¶¶____¶¶¶¶¶    \n");
            printf("\t\t\t\t      ¶¶____¶¶___¶______¶¶______¶__¶¶¶____¶¶     \n");
            printf("\t\t\t\t     ¶¶___¶¶_____¶¶____________¶¶____¶¶¶___¶¶    \n");
            printf("\t\t\t\t    ¶¶___¶_____________________________¶¶___¶¶    \n");
            printf("\t\t\t\t   ¶¶___¶__¶____________¶¶___________¶__¶¶___¶¶   \n");
            printf("\t\t\t\t  ¶¶___¶____¶___________¶¶__________¶____¶¶___¶_  \n");
            printf("\t\t\t\t  ¶¶__¶¶________________¶¶________________¶___¶¶  \n");
            printf("\t\t\t\t  ¶___¶_________________¶¶_________________¶__¶¶  \n");
            printf("\t\t\t\t ¶¶___¶_________________¶¶_________________¶___¶¶ \n");
            printf("\t\t\t\t ¶¶___¶_¶¶¶¶¶___________¶¶¶¶¶¶_______¶¶¶¶¶_¶___¶¶ \n");
            printf("\t\t\t\t ¶¶___¶____________________________________¶___¶¶ \n");
            printf("\t\t\t\t  ¶___¶____________________________________¶___¶  \n");
            printf("\t\t\t\t  ¶¶__¶¶__________________________________¶___¶¶  \n");
            printf("\t\t\t\t  ¶¶___¶____¶_______________________¶_____¶___¶¶  \n");
            printf("\t\t\t\t   ¶¶___¶__¶_________________________¶___¶___¶¶   \n");
            printf("\t\t\t\t    ¶____¶______________________________¶___¶¶    \n");
            printf("\t\t\t\t    ¶¶____¶______¶______¶¶______¶_____¶¶___¶¶     \n");
            printf("\t\t\t\t     ¶¶¶___¶¶___¶_______¶¶_______¶__¶¶¶___¶¶      \n");
            printf("\t\t\t\t       ¶¶___¶¶¶_________¶¶________¶¶¶____¶¶       \n");
            printf("\t\t\t\t        ¶¶¶___¶¶¶¶¶¶__________¶¶¶¶¶___¶¶¶         \n");
            printf("\t\t\t\t       ¶¶¶__¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶_¶¶         \n");
            printf("\t\t\t\t      ¶¶_______¶¶________________¶¶_____¶¶        \n");
            printf("\t\t\t\t      ¶¶_______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________¶        \n");
            printf("\t\t\t\t      ¶¶¶______¶¶               ¶¶      ¶¶        \n");
            printf("\t\t\t\t        ¶¶¶¶¶¶¶¶                 ¶¶¶¶¶¶¶¶         \n");

            printf("\n\n\t\t+----------------------------------------------------------------------+\n");
            printf("                                              Projeto Integrador           \n");
            printf("                                                Ads - 1º Semestre          \n");
            printf("\t\t+----------------------------------------------------------------------+\n\n\n");

            printf("                                             Desenvolvido por:            \n");
            printf("                                                                          \n");
            printf("                                             Fábio Eloy Passos            \n");
            printf("                                             Jonathan Ferreira            \n");
            printf("                                             Larissa Gabrielle de Souza   \n");
            printf("                                             Teodoro De Souza André Filho \n");
            printf("\n\n\n\t\t\t\t\t\t  Saindo...\n");
            Sleep(1000);
            return 0;
            break;
        default:
            printf("\n Opção Invalida\n");
            system("pause");
        }
    }
    while(0 != op);
    return 0;



}
