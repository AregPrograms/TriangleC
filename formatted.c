#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int size = 20;
    int bd_width = 1;
    char fill = ' ';
    char border = '#';
    if (argc > 1) {
        size = atoi(argv[1]);
        
        if (argc > 2) {
            bd_width = atoi(argv[2]);
            
            if (argc > 3) {
                border = argv[3][0];
                
                if (argc > 4) fill = argv[4][0];
            }
        }
    }
    
    for (int line = 0; line < size; line++) {
        for (int padding = 0; padding  < size-line; padding++) {
            printf(" ");
        }
        for (int character = 0; character < line+(line-1); character++) {
            if (line == 1-(bd_width+1) || line > size-bd_width-1) { printf("%c", border); } else {
                if (character < bd_width || character > line+(line-2-bd_width)) {
                    printf("%c", border);
                } else {
                    printf("%c", fill);
                }
            };
        }
        printf("\n");
    }
    
    return 0;
}