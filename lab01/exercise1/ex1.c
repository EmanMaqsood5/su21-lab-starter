#include <string.h>
#include "ex1.h"




int num_occurrences(char *str, char letter) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letter) {
            count++;
        }
    }
    return count;
}

void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
  
    DNA_sequence dna = *dna_seq;

    
    dna.A_count = 0;
    dna.C_count = 0;
    dna.G_count = 0;
    dna.T_count = 0;

    
    for (int i = 0; dna.sequence[i] != '\0'; i++) {
        char ch = dna.sequence[i];
        if (ch == 'A') dna.A_count++;
        else if (ch == 'C') dna.C_count++;
        else if (ch == 'G') dna.G_count++;
        else if (ch == 'T') dna.T_count++;
    }

    *dna_seq = dna;
}

