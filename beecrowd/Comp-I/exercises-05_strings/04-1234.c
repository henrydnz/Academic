#include <stdio.h>
#include <string.h>
#include <ctype.h>

void dancing(char *str){
    for(int i=0; *str; str++){
        //ignorar espaco
        if(*str!=' ') {
            //i%2=0: maiusculo. i%2=1: minusculo
            *str = i%2==0?
                (islower(*str)? toupper(*str): *str):
                (islower(*str)? *str: tolower(*str));
            i++;
        }
    }
}

int main() {
    char str[51];
    while(scanf("%[^\n]%*c", str)!=EOF){
        dancing(str);
        printf("%s\n", str);
    }

    return 0;
}