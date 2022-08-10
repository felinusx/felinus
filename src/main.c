#include "interpreter.h"

int main(int argc, char **argv){
    start(argc, argv);
}

void start(int argc, char **argv){
    if(argc == 0){
            get_prompt();
    }else{
        get_file(argv[0]);
    }
}