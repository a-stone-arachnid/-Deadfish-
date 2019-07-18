//
//  main.c
//  ndft
//
//  Created by a stone arachnid on 7/18/19.
//  Copyright © 2019 a stone arachnid. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int accum;
int vars[13];

bool is_prime(int);
bool eval(const char*);
int getvidx(char);

int main(int argc, const char** argv) {
    // insert code here...
    bool mode;
    if(argc == 1)
        mode = 0;
    else if(argc == 2 && !strcmp(argv[1],"help")) {
        puts("See documentation at https://github.com/a-stone-arachnid/Not-Deadfish-Tilde");
        return 0;
    } else mode = 1;
    if(mode) {
        FILE *f;
        f = fopen(argv[1], "r");
        if(f == NULL) {
            fputs("Bad file.", stderr);
            return -1;
        }
        char x[2048];
        for(bool k = true;k && fgets(x,sizeof(x),f);) k = eval(x);
    } else {
        char x[256];
        bool k = true;
        while(k) {
            printf("\n>> ");
            fgets(x, sizeof(x), stdin);
            k = eval(x);
        }
    }
    return 0;
}

bool eval(const char* code) {
    for(int i=0;code[i];i++) {
        if(code[i] == 'i') accum++;
        else if(code[i] == 'd') accum--;
        else if(code[i] == 's') accum*=accum;
        else if(code[i] == 'o') printf("%d",accum);
        else if(code[i] == 'c') putchar(accum);
        else if(code[i] == 'w') puts("Hello, World!");
        else if(code[i] == '0') return false;
        else if(code[i] == 'a') accum = 65;
        else if(code[i] == 'b') accum = 97;
        else if(code[i] == '~') fputs("This is NOT Deadfish~.", stderr);
        else if(code[i] == '!') accum = -accum;
        else if(code[i] == 'g') accum = vars[getvidx(code[++i])];
        else if(code[i] == 'v') vars[getvidx(code[++i])] = accum;
        else if(code[i] == 'x') {
            int x;
            scanf("%d",&x);
            if(is_prime(x)) accum=34;
        } else if(code[i] == '{') {
            char f[256];
            for(int s=0;code[++i]&&code[i]!='}';s++){
                f[s]=code[i];
                puts(f);
            };
            for(int i=10;i-->0;eval(f));
        }
        if(accum == -1 || accum == 256) accum = 0;
    }
    return true;
}

bool is_prime(int n) {
    if (n<2) return false;
    for(int i=2;i*i<=n;i++) if(!(n%i)) return false;
    return true;
}

int getvidx(char var) {
    switch(var){
        case '`':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '5':
            return 3;
        case '7':
            return 5;
        case '8':
            return 5;
        case '9':
            return 6;
        case '@':
            return 7;
        case '$':
            return 8;
        case '-':
            return 9;
        case '_':
            return 10;
        case '=':
            return 11;
        case '+':
            return 12;
        default:
            return 10;
    }
}
