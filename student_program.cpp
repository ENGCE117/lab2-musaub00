#include <stdio.h>
#include <string.h>

char* reverse( char str1[ ] ) ;

int main() {
    char text[ 50 ] ;

    printf( "Enter str1 : " ) ;
    scanf( "%49[^\n]" , text ) ; 

    char *output = reverse( text ) ;
    printf( "FUNC : %s\n" , output ) ;
    printf( "MAIN : %s\n" , output ) ;

    return 0 ;
}

char* reverse( char str1[ ] ) {
    static char str2[ 50 ] ; 
    int len = strlen( str1 ) ;

    for (int i = 0; i < len; i++) {
        str2[ i ] = str1[ len - i - 1 ] ;
    }
    str2[ len ] = '\0' ; 

    return str2 ;
}
