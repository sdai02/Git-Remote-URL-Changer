#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "change.h"

int change ( char *username, char *repository){
    char commande[100];

    snprintf(commande, sizeof(commande), "git remote set-url origin git@github.com:%s/%s.git", username, repository);
    system(commande);

    return 0;
}
