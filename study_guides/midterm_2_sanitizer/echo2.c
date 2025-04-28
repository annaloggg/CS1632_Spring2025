#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Usage: echo <string_you_want_to_echo>\n");
        return 0;
    }
    char *str = argv[1]; //this is the string buffer that recieves the argument
    int len = strlen(str);
    // char *buf = (char *) malloc(len);    //this line is not necessary because strndup returns a pointer of size listed

    char *buf = strndup(str, len);  //first command is what you want to copy in, second is how much space you need

    // for (int i = 0; i < len; i++) {      //this way of copying is inefficent and unsafe
    //     buf[i] = str[i];
    // }
    printf("%s\n", buf);
    return 0;
}