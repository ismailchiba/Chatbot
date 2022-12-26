#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>

char user_input[];

int main()
{       
    system("cls");

        printf("Tony\n");

        while(1){
                    printf("User==>");
                    gets(user_input);
                        
        if(strcmp(user_input,"off")==0){
                    system("cls");
                    printf("Tony==> have a nice day sir .\n");
                    break;
        }

        else if(strcmp(user_input,"Tony")==0){
                    printf("Tony==> Yes Sir ,how can i help you . \n");
        }

        else if(strcmp(user_input,"open chrome")==0){
                    printf("Tony==> with pleasur sir , opening google chrome . \n");
                    system("start chrome ");
     
        }   

        else if(strcmp(user_input,"Play some music")==0){
                    printf("Tony==> with pleasur sir .\n");
                    system("start www.youtube.com/watch?v=pAgnJDJN4VA");
     
        }
        else if(strcmp(user_input,"date")){
            printf("Tony==>Today\'s date :\n");
            system(" date ");
            
        }

     
        }
        return 0;

}