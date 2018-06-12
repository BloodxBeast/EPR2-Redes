
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main()
{
    int mn;
    int x = 0;
    int cont = 0;
    int op1, op2, op3;
    printf("Bienvenido a este programa\n");
    printf("Iniciaremos con un pequeno juego, \n "
           "Hay en una isla con un bote, un lobo, "
           "un conejo, y una zanahoria.\n "
           "Ellos quieren atravesar el rio en el "
           "bote pero en el bote solo caben 2. "
           "\nComo llegan al otro lado del rio "
           "sin que estos se coman uno al otro?"
           "\n\nOJO: El lobo no puede quedar solo "
           "con el conejo y el conejo con la "
           "zanahoria.\nSolo puedes realizar 5 Viajes, Al 5to viaje termina el juego. \n\n");
    printf("Comenzemos 1)Si 2)No \n");
    scanf("%d", &mn);
    switch (mn)
    {
    case 1:
        do
        {
            do
            {

                printf("\n\nElija quien sube al bote?\n 1)lobo\n 2)conejo\n 3)zanahoria\n Elija 2 opciones.");
                printf("\nopcion 1: ");
                scanf("%d", &op1);
                getchar();
                printf("\nopcion 2: ");
                scanf("%d", &op2);
                if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                {
                    printf("Perdiste el lobo se comio al conejo.\n Volver a empezar.\n\n");
                    x = 0;
                }
                else
                {
                    if (op1 == 2 && op2 == 3 || op1 == 3 && op2 == 2)
                    {
                        printf("Perdiste el conejo se comio la zanahoria.\n Volver a empezar.\n\n");
                        x = 0;
                    }
                    else
                    {
                        x = 1;
                    }
                }
            } /*fin do*/ while (x == 0);

            if (op1 == 1 && op2 == 3 || op1 == 3 && op2 == 1)
            { /*primer viaje*/
                cont++;
                do
                {

                    printf("\n\nElejiste al lobo y a la zanahoria, suben a al bote. ");

                    printf("\n\nElija quien baja del bote?\n 1)lobo\n 2)zanahoria\n 3)ambos\n elija 1 opcion.");
                    printf("\nopcion: ");
                    scanf("%d", &op3);
                    if (op3 == 1)
                    {
                        cont++;
                        x = 1;
                        do
                        {

                            printf("\n\nBaja el lobo\nLa Zanahoria se devuelve.\n"); /*2   viaje*/

                            printf("Baja la zanahoria?1)Si 2)No\n");
                            scanf("%d", &op1);
                            printf("Sube el conejo?1)Si 2)No\n");
                            scanf("%d", &op2);
                            if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                            {
                                printf("\n\nPerdiste el conejo se comio la zanahoria.\n Volver a empezar.\n\n");
                                x = 0;
                            }
                            else
                            {
                                if (op1 == 2 && op2 == 2)
                                {
                                    printf("\n\nEl juego no puede continuar. \n Volver a empezar.\n\n");
                                    x = 0;
                                }
                                else
                                {
                                    cont++;
                                    x = 1;
                                    do
                                    {

                                        printf("\n\nSe baja la zanahoria y el conejo cruza.\n"); /*3   viaje*/
                                        printf("Baja el conejo?  1)Si 2)No\n");
                                        scanf("%d", &op1);
                                        printf("Sube el lobo? 1Si 2)No\n");
                                        scanf("%d", &op2);
                                        if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                                        {
                                            printf("\n\nPerdiste el lobo se comio al conejo.\n Volver a empezar.\n\n");
                                            x = 0;
                                        }
                                        else
                                        {
                                            if (op1 == 2 && op2 == 2)
                                            {
                                                printf("\n\nEl juego no puede continuar.      \n Volver a empezar.\n\n");
                                                x = 0;
                                            }
                                            else
                                            {
                                                cont++;
                                                x = 1;
                                                do
                                                {

                                                    printf("\n\nSe baja el conejo y el lobo cruza.\n"); /*4   viaje*/
                                                    printf("Baja el lobo?  1)Si 2)No\n");
                                                    scanf("%d", &op1);
                                                    printf("Sube la zanahoria? 1Si 2)No\n");
                                                    scanf("%d", &op2);
                                                    if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 2)
                                                    {
                                                        printf("\n\nEl juego no puede continuar.      \n Volver a empezar.\n\n");
                                                        x = 0;
                                                    }
                                                    else
                                                    {
                                                        if (op1 == 1 && op2 == 1)
                                                        {
                                                            printf("\n\nCon esta opcion haces mas de 5 viajes     \n Volver a empezar\n\n");
                                                            x = 0;
                                                        }
                                                        else
                                                        {
                                                            cont++;
                                                            x = 1;
                                                            do
                                                            {

                                                                printf("\n\nSe sube la zanahoria y el lobo cruzan ambos.\n"); /*5   viaje*/
                                                                printf("Baja el lobo?  1)Si 2)No\n");
                                                                scanf("%d", &op1);
                                                                printf("Baja la zanahoria? 1Si 2)No\n");
                                                                scanf("%d", &op2);
                                                                if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                                                                {
                                                                    printf("\n\nSe acabo el juego realizo mas de 5 viajes.  \n Volver a empezar.\n\n");
                                                                    x = 0;
                                                                    cont++;
                                                                }
                                                                else
                                                                {
                                                                    printf("\n\nSe acabo el juego lo lograste.");
                                                                    cont++;
                                                                    x = 1;
                                                                }
                                                            } while (x == 0);
                                                        }
                                                    }
                                                } /*fin do*/ while (x == 0);
                                            }
                                        }
                                    } /*fin do*/ while (x == 0);
                                }
                            }
                        } /*fin do 2*/ while (x == 0);
                    }
                    else
                    {
                        if (op3 == 2)
                        {
                            do
                            {
                                printf("\n\nbaja la Zanahoria\nEl lobo se devuelve.\n"); /*2   viaje*/
                                x = 1;
                                printf("Baja la lobo?1)Si 2)No\n");
                                scanf("%d", &op1);
                                printf("Sube el conejo?1)Si 2)No\n");
                                scanf("%d", &op2);
                                if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                                {
                                    printf("\n\nPerdiste el lobo se comio al conejo\n Volver a empezar\n\n");
                                    x = 0;
                                }
                                else
                                {
                                    if (op1 == 2 && op2 == 2)
                                    {
                                        printf("\n\nEl juego no puede continuar      \n Volver a empezar\n\n");
                                        x = 0;
                                    }
                                    else
                                    {
                                        cont++;
                                        x = 1;
                                        do
                                        {

                                            printf("\n\nSe Baja el lobo y el conejo cruza\n"); /*3   viaje*/
                                            printf("Baja el conejo?  1)Si 2)No\n");
                                            scanf("%d", &op1);
                                            printf("Sube la zanahoria? 1Si 2)No\n");
                                            scanf("%d", &op2);
                                            if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                                            {
                                                printf("\n\nPerdiste el conejo se comio la zanahoria\n Volver a empezar\n\n");
                                                x = 0;
                                            }
                                            else
                                            {
                                                if (op1 == 2 && op2 == 2)
                                                {
                                                    printf("\n\nEl juego no puede continuar      \n Volver a empezar\n\n");
                                                    x = 0;
                                                }
                                                else
                                                {
                                                    cont++;
                                                    x = 1;
                                                    do
                                                    {

                                                        printf("\n\nSe baja el conejo y la zanahoria cruza.\n"); /*4   viaje*/
                                                        printf("Baja la zanahoria?  1)Si 2)No\n");
                                                        scanf("%d", &op1);
                                                        printf("Sube el lobo? 1Si 2)No\n");
                                                        scanf("%d", &op2);
                                                        if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 2)
                                                        {
                                                            printf("\n\nEl juego no puede continuar      \n Volver a empezar\n\n");
                                                            x = 0;
                                                        }
                                                        else
                                                        {
                                                            if (op1 == 1 && op2 == 1)
                                                            {
                                                                printf("\n\nCon esta opcion haces mas de 5 viajes     \n Volver a empezar\n\n");
                                                                x = 0;
                                                            }
                                                            else
                                                            {
                                                                cont++;
                                                                x = 1;
                                                                do
                                                                {

                                                                    printf("\n\nSe sube la zanahoria y el lobo cruzan ambos.\n"); /*5   viaje*/
                                                                    printf("Baja el lobo?  1)Si 2)No\n");
                                                                    scanf("%d", &op1);
                                                                    printf("Baja la zanahoria? 1Si 2)No\n");
                                                                    scanf("%d", &op2);
                                                                    if (op1 == 1 && op2 == 2 || op1 == 2 && op2 == 1)
                                                                    {
                                                                        printf("\n\nse acabo el juego realizo mas de 5 viajes   \n Volver a empezar\n\n");
                                                                        x = 0;
                                                                        cont++;
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("\n\nSe acabo el juego lo lograste.");
                                                                        cont++;
                                                                        x = 1;
                                                                    }
                                                                } while (x == 0);
                                                            }
                                                        }
                                                    } /*fin do*/ while (x == 0);
                                                }
                                            }
                                        } /*fin do*/ while (x == 0);
                                    }
                                }
                            } /*fin do 2*/ while (x == 0);
                        }
                        else
                        {
                            printf("\n\nSe bajan ambos nadie se devuelve\n Volver a empezar.\n\n");
                            x = 0;
                        }
                    }
                } /*fin do*/ while (x == 0);
            }
        } while (cont == 5); //fin while
        break;

    case 2:
        break;
    } //fin switch

    return 0;
}
