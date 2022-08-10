#include <stdio.h>
#include <version.h>

static void get_prompt(){
    char *version = get_current_version();
    printf("================= FELINUS INTERPRETER %d =================", version);
    printf("> \n");
}

static void get_file(char *file_path){

}