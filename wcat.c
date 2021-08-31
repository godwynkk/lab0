//
//  wcat.c
//  wcat
//
//  Created by Godwyn Akabogu on 8/31/21.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    //Loops txt files
    for(int i = 1; i < argc; i++) {

        FILE* file = fopen(argv[i], "r");
        if(file == NULL) {
            printf("wcat: cannot open file\n");
            exit(1);
        }

        char buffer[200];
        //Reads and prints the current lines
        while(fgets(buffer, 200, file)) {
            printf("%s", buffer);
        }

        fclose(file);

    }
    
    return 0;
}
