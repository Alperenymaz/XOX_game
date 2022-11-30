#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int printRandoms(int,int,int);
void printBoard(int xoxInt[3][3]);

int main(){
    int xoxChar[3][3] = {
            {0,0,0},
            {0,0,0},
            {0,0,0}
            };
    int checkXox[3][3] = {
            {1,1,1},
            {1,1,1},
            {1,1,1}
            };
    int vertical, doesCoordinate, doesPlay = 0, gameMove = 0, goOn = 0, doesWin;
    char horizantal, whoWin;

    printf("      X-O-X GAME STARTED!\n\n");
    printBoard(xoxChar);
    while(doesPlay == 0){

    doesCoordinate = 0;
    goOn = 0;

    while(doesCoordinate == 0){
    printf("Enter a coordinate: ");
    scanf("%d",&vertical);
    scanf(" %c",&horizantal);

            switch(vertical){
        case 1:
            switch(horizantal){
            case 'a':
                if(checkXox[0][0] != 0){
                    xoxChar[0][0] = 1;
                    checkXox[0][0] = 0;
                    doesCoordinate = 1;
                    gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            case 'b':
                if(checkXox[0][1] != 0){
                    xoxChar[0][1] = 1;
                    checkXox[0][1] = 0;
                    doesCoordinate = 1;
                    gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            case 'c':
                if(checkXox[0][2] != 0){
                    xoxChar[0][2] = 1;
                    checkXox[0][2] = 0;
                    doesCoordinate = 1;
                    gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            default:
                printf("Wrong coordinate! Please try again.\n");
                break;
            }
            break;
        case 2:
            switch(horizantal){
            case 'a':
                if(checkXox[1][0] != 0){
                xoxChar[1][0] = 1;
                checkXox[1][0] = 0;
                doesCoordinate = 1;
                gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            case 'b':
                if(checkXox[1][1] != 0){
                xoxChar[1][1] = 1;
                checkXox[1][1] = 0;
                doesCoordinate = 1;
                gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            case 'c':
                if(checkXox[1][2] != 0){
                xoxChar[1][2] = 1;
                checkXox[1][2] = 0;
                doesCoordinate = 1;
                gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            default:
                printf("Wrong coordinate! Please try again.\n");
                break;
            }
            break;
        case 3:
            switch(horizantal){
            case 'a':
                if(checkXox[2][0] != 0){
                xoxChar[2][0] = 1;
                checkXox[2][0] = 0;
                doesCoordinate = 1;
                gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            case 'b':
                if(checkXox[2][1] != 0){
                xoxChar[2][1] = 1;
                checkXox[2][1] = 0;
                doesCoordinate = 1;
                gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            case 'c':
                if(checkXox[2][2] != 0){
                xoxChar[2][2] = 1;
                checkXox[2][2] = 0;
                doesCoordinate = 1;
                gameMove++;
                }else printf("\nYou can NOT put X here\n");
                break;
            default:
                printf("Wrong coordinate! Please try again.\n");
                break;
            }
            break;
        default:
            printf("Wrong coordinate! Please try again.\n");
            break;
        }
    }
        system("cls");
        printf("***%d***",gameMove);
        if(gameMove >= 9){
            doesPlay == 1;
            break;
        }
        if(gameMove == 1){
            if(xoxChar[1][1] == 1 && checkXox[1][1] == 0){
                    while(goOn == 0){
                    srand(time(0));
                    int check = printRandoms(1,4,1);
                    int i, j;
                    if(check == 1){
                        i = 0;
                        j = 0;
                    }else if(check == 2){
                        i = 0;
                        j = 2;
                    }else if(check == 3){
                        i = 2;
                        j = 0;
                    }else if(check == 4){
                        i = 2;
                        j = 2;
                    }
                    if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                    }
                }
            }else if(xoxChar[1][1] != 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if((xoxChar[0][0] == 1 && checkXox[0][0] == 0)|| (xoxChar[0][2] == 1 && checkXox[0][2] == 0) || (xoxChar[2][0] == 1 && checkXox[2][0] == 0) || (xoxChar[2][2] == 1 && checkXox[2][2] == 0)){
                if(xoxChar[0][0] == 1 && checkXox[0][0] == 0){
                    xoxChar[2][2] = -1;
                    checkXox[2][2] = 0;
                    gameMove++;
                }else if (xoxChar[0][2] == 1 && checkXox[0][2] == 0){
                    xoxChar[2][0] = -1;
                    checkXox[2][0] = 0;
                    gameMove++;
                }else if (xoxChar[2][0] == 1 && checkXox[2][0] == 0){
                    xoxChar[0][2] = -1;
                    checkXox[0][2] = 0;
                    gameMove++;
                }else if (xoxChar[2][2] == 1 && checkXox[2][2] == 0){
                    xoxChar[0][0] = -1;
                    checkXox[0][0] = 0;
                    gameMove++;
                }
            }else {
                while(goOn == 0){
                    srand(time(0));
                    int i = printRandoms(0,2,1);
                    int j = printRandoms(0,2,1);
                    if(checkXox[i][j] != 0){
                        xoxChar[i][j] = -1;
                        checkXox[i][j] = 0;
                        gameMove++;
                        goOn = 1;
                    }
                }
            }

        }else if(gameMove == 3){
            if(xoxChar[0][0] == -1 && xoxChar[1][1] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[2][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[2][2] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[0][1] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[0][2] == -1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[0][2] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[1][1] == -1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[1][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[1][2] == -1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[2][1] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[2][2] == -1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[2][1] == -1 && xoxChar[2][2] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[1][0] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[2][0] == -1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[2][0] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[1][1] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[0][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[0][2] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[1][1] == -1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[2][1] == -1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[2][1] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == -1 && xoxChar[1][2] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == -1 && xoxChar[2][2] == -1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][2] == -1 && xoxChar[2][2] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][1] == 1 && xoxChar[2][2] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[2][2] == 1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[1][0] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[2][0] == 1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[2][0] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[1][1] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[0][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[0][2] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[1][1] == 1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[2][1] == 1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[2][1] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == 1 && xoxChar[1][2] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == 1 && xoxChar[2][2] == 1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][2] == 1 && xoxChar[2][2] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[1][1] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[2][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[2][2] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[0][1] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[0][2] == 1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[0][2] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[1][1] == 1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[1][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[1][2] == 1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[2][1] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[0][0] == -1){
                while(goOn == 0){
                    srand(time(0));
                    int check = printRandoms(1,3,1);
                    int i, j;
                    if(check == 1){
                        i = 0;
                        j = 2;
                    }else if(check == 2){
                        i = 2;
                        j = 0;
                    }else if(check == 3){
                        i = 2;
                        j = 2;
                    }
                    if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                    }
                }
            }else if(xoxChar[1][1] == 1 && xoxChar[2][0] == -1){
                while(goOn == 0){
                    srand(time(0));
                    int check = printRandoms(1,3,1);
                    int i, j;
                    if(check == 1){
                        i = 0;
                        j = 0;
                    }else if(check == 2){
                        i = 0;
                        j = 2;
                    }else if(check == 3){
                        i = 2;
                        j = 2;
                    }
                    if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                    }
                }
            }else if(xoxChar[1][1] == 1 && xoxChar[0][2] == -1){
                while(goOn == 0){
                    srand(time(0));
                    int check = printRandoms(1,3,1);
                    int i, j;
                    if(check == 1){
                        i = 0;
                        j = 0;
                    }else if(check == 2){
                        i = 2;
                        j = 0;
                    }else if(check == 3){
                        i = 2;
                        j = 2;
                    }
                    if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                    }
                }
            }else if(xoxChar[1][1] == 1 && xoxChar[2][2] == -1){
                while(goOn == 0){
                    srand(time(0));
                    int check = printRandoms(1,3,1);
                    int i, j;
                    if(check == 1){
                        i = 0;
                        j = 0;
                    }else if(check == 2){
                        i = 2;
                        j = 0;
                    }else if(check == 3){
                        i = 0;
                        j = 2;
                    }
                    if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                    }
                }
            }else if(xoxChar[1][1] == -1){
                if((xoxChar[2][2] == 1 && xoxChar[0][1] == 1) || (xoxChar[2][0] == 1 && xoxChar[0][1] == 1) || (xoxChar[0][0] == 1 && xoxChar[2][1] == 1) || (xoxChar[0][2] == 1 && xoxChar[2][1] == 1)){
                        while(goOn == 0){
                        srand(time(0));
                        int check = printRandoms(1,2,1);
                        int i, j;
                        if(check == 1){
                            i = 1;
                            j = 0;
                        }else if(check == 2){
                            i = 1;
                            j = 2;
                        }
                        if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                        }
                    }

                }else if((xoxChar[0][0] == 1 && xoxChar[1][2] == 1) || (xoxChar[2][0] == 1 && xoxChar[1][2] == 1) || (xoxChar[0][2] == 1 && xoxChar[1][0] == 1) || (xoxChar[2][2] == 1 && xoxChar[1][0] == 1) ){
                    while(goOn == 0){
                        srand(time(0));
                        int check = printRandoms(1,2,1);
                        int i, j;
                        if(check == 1){
                            i = 0;
                            j = 1;
                        }else if(check == 2){
                            i = 2;
                            j = 1;
                        }
                        if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                        }
                    }

                }else if((xoxChar[0][0] == 1 && xoxChar[2][2] == 1) || (xoxChar[0][2] == 1 && xoxChar[2][0] == 1)){
                    while(goOn == 0){
                        srand(time(0));
                        int check = printRandoms(1,4,1);
                        int i, j;
                        if(check == 1){
                            i = 0;
                            j = 1;
                        }else if(check == 2){
                            i = 2;
                            j = 1;
                        }else if(check == 3){
                            i = 1;
                            j = 0;
                        }else if(check == 4){
                            i = 1;
                            j = 2;
                        }
                        if(checkXox[i][j] != 0){
                            xoxChar[i][j] = -1;
                            checkXox[i][j] = 0;
                            gameMove++;
                            goOn = 1;
                        }
                    }

                }
                while(goOn == 0){
                    srand(time(0));
                    int i = printRandoms(0,2,1);
                    int j = printRandoms(0,2,1);
                    if(checkXox[i][j] != 0){
                        xoxChar[i][j] = -1;
                        checkXox[i][j] = 0;
                        gameMove++;
                        goOn = 1;
                    }
                }

            }else {
                while(goOn == 0){
                    srand(time(0));
                    int i = printRandoms(0,2,1);
                    int j = printRandoms(0,2,1);
                    if(checkXox[i][j] != 0){
                        xoxChar[i][j] = -1;
                        checkXox[i][j] = 0;
                        gameMove++;
                        goOn = 1;
                    }
                }
            }

        }else if(gameMove == 5){
            if(xoxChar[0][0] == -1 && xoxChar[1][1] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[2][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[2][2] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[0][1] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[0][2] == -1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[0][2] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[1][1] == -1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[1][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[1][2] == -1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[2][1] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[2][2] == -1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[2][1] == -1 && xoxChar[2][2] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[1][0] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[2][0] == -1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[2][0] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[1][1] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[0][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[0][2] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[1][1] == -1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[2][1] == -1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[2][1] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == -1 && xoxChar[1][2] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == -1 && xoxChar[2][2] == -1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][2] == -1 && xoxChar[2][2] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][1] == 1 && xoxChar[2][2] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[2][2] == 1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[1][0] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[2][0] == 1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[2][0] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[1][1] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[0][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[0][2] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[1][1] == 1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[2][1] == 1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[2][1] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == 1 && xoxChar[1][2] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == 1 && xoxChar[2][2] == 1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][2] == 1 && xoxChar[2][2] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[1][1] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[2][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[2][2] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[0][1] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[0][2] == 1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[0][2] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[1][1] == 1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[1][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[1][2] == 1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[2][1] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else{
                while(goOn == 0){
                    srand(time(0));
                    int i = printRandoms(0,2,1);
                    int j = printRandoms(0,2,1);
                    if(checkXox[i][j] != 0){
                        xoxChar[i][j] = -1;
                        checkXox[i][j] = 0;
                        gameMove++;
                        goOn = 1;
                    }
                }
            }
        }else if(gameMove == 7){
            if(xoxChar[0][0] == 1 && xoxChar[1][1] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[1][1] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[2][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[2][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[2][2] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[2][2] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[0][1] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[0][1] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[0][2] == 1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[0][2] == -1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[0][2] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[0][2] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[1][1] == 1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[1][1] == -1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[1][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[1][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[1][2] == 1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[1][2] == -1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[2][1] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[2][1] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[2][2] == 1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[2][2] == -1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[2][1] == 1 && xoxChar[2][2] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[2][1] == -1 && xoxChar[2][2] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[1][0] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[1][0] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == 1 && xoxChar[2][0] == 1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[0][0] == -1 && xoxChar[2][0] == -1 && checkXox[1][0] != 0){
                xoxChar[1][0] = -1;
                checkXox[1][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == 1 && xoxChar[2][0] == 1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[1][0] == -1 && xoxChar[2][0] == -1 && checkXox[0][0] != 0){
                xoxChar[0][0] = -1;
                checkXox[0][0] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[1][1] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[1][1] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == 1 && xoxChar[0][2] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[2][0] == -1 && xoxChar[0][2] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[0][2] == 1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[0][2] == -1 && checkXox[2][0] != 0){
                xoxChar[2][0] = -1;
                checkXox[2][0] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[0][1] == 1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[0][1] == -1 && checkXox[2][1] != 0){
                xoxChar[2][1] = -1;
                checkXox[2][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == 1 && xoxChar[2][1] == 1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[1][1] == -1 && xoxChar[2][1] == -1 && checkXox[0][1] != 0){
                xoxChar[0][1] = -1;
                checkXox[0][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == 1 && xoxChar[2][1] == 1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][1] == -1 && xoxChar[2][1] == -1 && checkXox[1][1] != 0){
                xoxChar[1][1] = -1;
                checkXox[1][1] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == 1 && xoxChar[1][2] == 1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == -1 && xoxChar[1][2] == -1 && checkXox[2][2] != 0){
                xoxChar[2][2] = -1;
                checkXox[2][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == 1 && xoxChar[2][2] == 1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[0][2] == -1 && xoxChar[2][2] == -1 && checkXox[1][2] != 0){
                xoxChar[1][2] = -1;
                checkXox[1][2] = 0;
                gameMove++;
            }else if(xoxChar[1][2] == 1 && xoxChar[2][2] == 1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else if(xoxChar[1][2] == -1 && xoxChar[2][2] == -1 && checkXox[0][2] != 0){
                xoxChar[0][2] = -1;
                checkXox[0][2] = 0;
                gameMove++;
            }else {
                while(goOn == 0){
                    srand(time(0));
                    int i = printRandoms(0,2,1);
                    int j = printRandoms(0,2,1);
                    if(checkXox[i][j] != 0){
                        xoxChar[i][j] = -1;
                        checkXox[i][j] = 0;
                        gameMove++;
                        goOn = 1;
                    }
                }
            }

        }
        printBoard(xoxChar);

        if(xoxChar[0][0] == 1 && xoxChar[0][1] == 1 && xoxChar[0][2] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[0][0] == -1 && xoxChar[0][1] == -1 && xoxChar[0][2] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[1][0] == 1 && xoxChar[1][1] == 1 && xoxChar[1][2] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[1][0] == -1 && xoxChar[1][1] == -1 && xoxChar[1][2] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[2][0] == 1 && xoxChar[2][1] == 1 && xoxChar[2][2] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[2][0] == -1 && xoxChar[2][1] == -1 && xoxChar[2][2] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[0][0] == 1 && xoxChar[1][1] == 1 && xoxChar[2][2] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[0][0] == -1 && xoxChar[1][1] == -1 && xoxChar[2][2] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[0][0] == 1 && xoxChar[1][0] == 1 && xoxChar[2][0] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[0][0] == -1 && xoxChar[1][0] == -1 && xoxChar[2][0] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[2][0] == 1 && xoxChar[1][1] == 1 && xoxChar[0][2] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[2][0] == -1 && xoxChar[1][1] == -1 && xoxChar[0][2] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[0][1] == 1 && xoxChar[1][1] == 1 && xoxChar[2][1] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[0][1] == -1 && xoxChar[1][1] == -1 && xoxChar[2][1] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
        if(xoxChar[0][2] == 1 && xoxChar[1][2] == 1 && xoxChar[2][2] == 1){
            doesWin = 1;
            whoWin = 'X';
            doesPlay = 1;
        }else if(xoxChar[0][2] == -1 && xoxChar[1][2] == -1 && xoxChar[2][2] == -1){
            doesWin = 0;
            whoWin = 'O';
            doesPlay = 1;
        }
    }
    if(doesWin == 0 && gameMove != 9){
        printf("\n********************\nYOU LOSE LOSER!!\n********************\n");
    }else if (doesWin == 1 && gameMove != 9){
        printf("\n********************\n%c WIN WIN WIN!!\n********************\n",whoWin);
    }else printf("\n**********************\nNo one win the game !\n**********************\n");
    srand(time(0));
    printRandoms(0,2,1);


    return 0;
}
void printBoard(int xoxInt[3][3]){
    char xoxChar[3][3];
    for(int i = 0; i <= 3; i ++){
        for(int j = 0; j <= 3; j++){
            if(xoxInt[i][j] == 1){
                xoxChar[i][j] = 'X';
            }else if (xoxInt[i][j] == -1) {
                xoxChar[i][j] = 'O';
            }else xoxChar[i][j] = ' ';
        }
    }
    printf("\t   a   b   c\n\t -------------\n\t1| %c | %c | %c |\n\t2| %c | %c | %c |\n\t3| %c | %c | %c |\n\t -------------\n",xoxChar[0][0],xoxChar[0][1],xoxChar[0][2],xoxChar[1][0],xoxChar[1][1],xoxChar[1][2],xoxChar[2][0],xoxChar[2][1],xoxChar[2][2]);
}
int printRandoms(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        return num;
    }
}
