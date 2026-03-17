#include <stdio.h>
#include <stdlib.h>

void runFile(const char* path) {
    // TODO: implement
}

void runPrompt() {
    // TODO: implement
}

int main(int argc, char* argv[]) {
    if (argc > 2) {
        printf("Usage: lox [script]\n");
        exit(64);
    } else if (argc == 2) {
        runFile(argv[1]);
    } else {
        runPrompt();
    }
    return 0;
}