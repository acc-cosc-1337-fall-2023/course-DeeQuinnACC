//add include statements
#include "func.h"

using std::string;

//Get the percentage of characters that are "G" or "C" in a dna sequence
double get_gc_content(const std::string& dna)
{
    int gc = 0;
    for(int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gc++;
        }
    }

    double gcContent = (double)gc / (double)dna.length();
    return gcContent;
}

//Create a complement to a dna sequence
std::string get_dna_complement(std::string dna)
{
    string reverse = reverse_string(dna);
    string complement = "";
    for(int i = 0; i < reverse.length(); i++)
    {
        switch(reverse[i])
        {
            case 'A':
                complement += 'T';
                break;
            case 'T':
                complement += 'A';
                break;
            case 'C':
                complement += 'G';
                break;
            case 'G':
                complement += 'C';
                break;
            default:
                complement += 'X';
                break;
        }
    }

    return complement;
}

//Reverses any string pass into this function
std::string reverse_string(std::string dna)
{
    string newDNA = "";
    for(int i = dna.length() - 1; i >= 0; i--)
    {
        newDNA += dna[i];
    }

    return newDNA;
}