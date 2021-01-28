#include<stdio.h>
#include<math.h>
#include<stdlib.h>

char menu( void );
void pole_prostokata( void );

void pole_prostokata( void )
{
    float a, b, P;
    printf( "Podaj dlugosci bokow a i b: " );
    scanf( "%f%f", & a, & b );
    P = a * b;
    printf( "Pole prostokata: %f\n", P );
}

int main()
{
    char wybor;
    while( 1 )
    {
        wybor = menu();
        switch( wybor )
        {
        case 'a': pole_prostokata();

            default: menu();
        }
    }
}

char menu( void )
{
    char w;

    puts( "Wybierz figure" );
    puts( "a) pole prostokata" );


    scanf( " %c", & w );
    return w;
}
