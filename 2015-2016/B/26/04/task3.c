#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int create_letter_distribution_diagram();
int thejoker(char [], int []);
char varr[26];
int main(){
    int i;
for( i = 0 ; i < 26 ; i++)
    varr[ i ] = 'a' + i;

create_letter_distribution_diagram();



   return 0;
    }

int find_frequency(char string[], int count[]) {
   int c = 0;

   while (string[c] != '\0') {
      if (string[c] >= 'a' && string[c] <= 'z' )
         count[string[c]-'a']++;
         else if( string[ c ] >= 'A' && string[ c ] <= 'Z')
            count[ string[ c ] - 'A']++;
      c++;
   }return 0;
}






int create_letter_distribution_diagram(){
    char string[1000];
    int  count[26] = {0},k,m,swap,i;
    char swapchar;
    fgets(string,1000,stdin);
    find_frequency(string, count);
    for( k = 0 ; k < 26 ; k++ ) {
            m = k;
            for ( i = k + 1; i < 26; i++ ) {
                if( count [ m ] < count [ i ] ) {
                    m = i;
                }

            swap = count [ m ];
            count [ m ] = count [ k ];
            count [ k ] = swap;
            swapchar = varr [ m ];
            varr [ m ] = varr [ k ];
            varr [ k ] = swapchar;
        }
    }
    for(i=0; i<26; i++) {
            for( k = 0 ; k < 26 ; k++ ) {
                if( count[ k ] == count[ k + 1 ] && k < 26 ) {
                    if( varr[ k ] > varr[ k + 1 ] ) {
                        swap = count [ k + 1 ];
                        count [ k + 1 ] = count [ k ];
                        count [ k ] = swap;
                        swapchar = varr [ k + 1 ];
                        varr [ k + 1 ] = varr [ k ];
                        varr [ k ] = swapchar;
                    }
                }
            }
        }
    for ( i = 0; i < 26 ; i++ ) {
            printf("%c : %d \n", varr[i], count[i]);
        }return 0;

}
