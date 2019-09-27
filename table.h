#ifndef TABLE_H

#define MAX_LEXEME 50
#define MAX_TABLE 5000

char tableLexico[MAX_TABLE][MAX_LEXEME];
struct Decla{
    int nature;
    int region;
    int description;
    int suivant;
    int execution;
}
typedef struct Decla tableDeclaration[MAX_TABLE];

