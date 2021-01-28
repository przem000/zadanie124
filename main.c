#include<stdio.h>
#include<math.h>
#include<stdlib.h>

char menu( void );
void pole_prostokata( void );
void pole_trojkata( void );


void pole_prostokata( void )
{
    float a, b, P;
    printf( "Podaj dlugosci bokow a i b: " );
    scanf( "%f%f", & a, & b );
    P = a * b;
    printf( "Pole prostokata: %f\n", P );
}


void pole_trojkata( void )
{
    float a, h, P;
    printf( "Podaj dlugosc a boku oraz wysokosc h trojkata: " );
    scanf( "%f%f", & a, & h );
    P =( a * h ) / 2.0;
    printf( "Pole trojkata jest rowne: %f\n", P );
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
         break;
          case 'b': pole_trojkata();
            break;

            default: menu();
        }
    }
}

char menu( void )
{
    char w;

    puts( "Wybierz figure" );
    puts( "a) pole prostokata" );
    puts( "b) pole trojkata" );

    scanf( " %c", & w );
    return w;
}
