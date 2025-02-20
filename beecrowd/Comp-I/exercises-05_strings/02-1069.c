#include <stdio.h>
#include <string.h> 

#define MAX_STR_LEN 1001

void scan_str(char *str){
    fgets(str, MAX_STR_LEN, stdin);
    strtok(str,"\n");
}

int min(int a, int b){
    return a>b? b: a;
}

void remove_dots(char *src){
    char *dest = src;
    //copia src pra dest, se acha . pula uma casa
    while(*src){
        if(*src!='.'){
            *dest=*src;
            dest++;
        }
        src++;
    }
    //final da string, dest -> src
    *dest = '\0';
    strcpy(src, dest);
}

void remove_diamond(char *src, char *diamond){
    char *dest = src;

    //copia src pra dest, se acha <> pula 2 casas 
    while(*src){
        if(src==diamond)
            src+=2;
        else {
            *dest=*src;
            dest++;
            src++;
        }
    }
    //final da string, dest -> src
    *dest='\0';
    strcpy(src,dest);
}

void count(char *str, int *answer){
    remove_dots(str);
    //pointer pra <>
    char *diamond = strstr(str,"<>");
    //se houver <>, remove e conta, ate acabar
    while(diamond!=NULL){
        (*answer)++;
        remove_diamond(str,diamond);
        diamond = strstr(str,"<>");
    }
}

int main(){
    int str_cnt;
    scanf("%d%*c", &str_cnt);
    while(str_cnt--){
        char str[MAX_STR_LEN];
        int answer = 0;
        scan_str(str);
        count(str,&answer);
        printf("%d\n", answer);
    }
}