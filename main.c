#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main() {
    
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int choix_nombre = 0; 

    while (choix_nombre != random_number)
    {
        printf("Choisissez un nombre entre 1 et 100.\n");
        scanf("%d", &choix_nombre);

        if (choix_nombre < random_number) {
            printf("C'est plus grand !\n");
        }

        else if (choix_nombre > random_number) {
            printf("C'est moins !\n");
        }

        else {
            printf("Gagné !\n");
            
        }
    }

    exit(0);
}
