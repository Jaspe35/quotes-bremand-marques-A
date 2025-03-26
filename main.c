#include "quotes.h"
#include <time.h>

int main() {
    char * quotes[MAX_QUOTES] = {
        "Sa plaque d'immatriculation c'est FR et RN, si ce mec n'est pas de droite il y a un problème",
        "On va bien s'occuper de ton pouce Emilie",
        "C'est quoi l'onomatopée quand ça fait pas mal ?",
        "I don't always test my code, but when I do, I do it in production.",
        "Why do programmers always mix up Christmas and Halloween? Because Oct 31 == Dec 25!",
        "Why did the programmer quit his job? Because he didn't get arrays.",
        "Why do programmers prefer iOS development? Because the Swift.",
        "Why do programmers prefer dogs over cats? Because dogs have fetch and cats have catch.",
        "Why do programmers hate nature? It has too many bugs.",
        "There are only 10 types of people in the world: Those who understand binary and those who don't."
    };

    srand(time(NULL));
    print_random_quote(quotes);
    return 0;
}
