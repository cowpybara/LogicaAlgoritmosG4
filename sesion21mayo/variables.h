#define MAX_STRING 60
#define MAX_REGISTRO 1000

typedef struct PERSON
{
    char cif[MAX_STRING];
    char name[MAX_STRING];
    char lastName[MAX_STRING];
    int year;
};

PERSON people[MAX_REGISTRO];
int pos = 0;