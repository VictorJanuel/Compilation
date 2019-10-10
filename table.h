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
};
typedef struct Decla tableDeclaration[MAX_TABLE];

<<<<<<< HEAD
int insererLexeme(char* text);
=======
int insererLexeme();

>>>>>>> 5c9b0ee71e9b18d01f1bc0f15e1d16eb2bbba37c
#endif