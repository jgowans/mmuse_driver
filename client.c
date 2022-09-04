#include <stdio.h>

int main(int argc, char *argv[] )  {
    int arg_idx;

    for (arg_idx = 0; arg_idx < argc; ++arg_idx) {
        printf("arg %i = %s\n", arg_idx, argv[arg_idx]);
    }
    return 0;
}
