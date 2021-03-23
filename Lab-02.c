#include <stdio.h>

int main() {
    FILE *fkey, *fout;
    char encode[64];// creates 64 bit empty array
    fkey = fopen("C:\\Users\\uchil\\CLionProjects\\ECE 220 Lab\\Key.dat", "r");
    if (fkey == NULL)//checks if file was read and prints error message
    {
        printf("The encoding file cannot be found\n");
        return -1;
    }
    // file successfully read
    // make the encoding table
    int noReadChar = fread(encode, 1, 64, fkey);
    fclose(fkey);
    fkey = fopen("C:\\Users\\uchil\\CLionProjects\\ECE 220 Lab\\Raw.dat", "r");
    fout = fopen("C:\\Users\\uchil\\CLionProjects\\ECE 220 Lab\\Encoded.dat","w");
    if (fkey == NULL || fout == NULL)//checks if file was read and prints error message
    {
        printf("File couldn't be read\n");
        return -1;
    }
    int outCode = 0, remCode = 0, digCarr = 0, ascii;
    char readChar;
    int i = 0;//declaring variables and initialization
    while(fread(&readChar, 1, 1, fkey) == 1)
    {
        // read till the end of file
        // cast to int
        ascii = (int)(readChar);//converts char to binary
        outCode = (ascii >> (2 + digCarr)) + remCode;
        // write to the file
        // printf("%d %d %d %d\n", ascii, outCode, remCode, digCarr);
        readChar = encode[outCode];
        fwrite(&readChar, 1, 1, fout);
        i++;
        if (i+1 == 8)
        {
            readChar = ' ';
            fwrite(&readChar, 1, 1, fout);
            i = 0;
        }

        remCode = (ascii << (4-digCarr)) & 0b111111;
        digCarr = 2 + digCarr;
        if (digCarr == 6){
            readChar = encode[remCode];
            fwrite(&readChar, 1, 1, fout);
            i++;
            if (i+1 == 8) {
                readChar = ' ';
                fwrite(&readChar, 1, 1, fout);
                i = 0;
            }
            digCarr = 0;
            remCode = 0;
        }
    }
    fclose(fkey);
    fclose(fout);
}