#include "functions.h"


void howManyDigits() {
	int x;
	printf("Podaj dowolna liczbe naturalna: \n");
	scanf( "%d" , &x );
	int suma = 0;
	while( x > 0 )
	{
		suma += 1;
		x = x / 10;
	}
	printf("Ilosc cyfr tej liczby: %d",suma);
}
void angleOfRotation_point( ) {

	double x; // odcieta
	double y; // rzedna

	//cout << "Podaj wspolrzedne punktu x i y: ";
	printf( "Podaj wspolrzedne punktu x i y:\n" );
	//cin >> x >> y;
	scanf( "%f %f" , &x , &y );

	double alpha = 0; //kat obrotu w stopniach
	printf( "Podaj kat obrotu: " );
	scanf( "%f" , &alpha );
	double radians = alpha * PI / 180.0;  //180.


		// co to jest x i y (rezerwujemy pewna ilosc bajtów )
		//wspolrzedne punktu
		//wczytac kat obrotu
		//przeliczyc stopnie do radianow
		//obliczyc wspolrzedne punktu po obrocie
	double x1 = x * cos( radians ) - y * sin( radians );
	double y1 = x * sin( radians ) + y * cos( radians );

	//wypisac wynik
	printf( "x1: %f\t" , x1 );
	printf( "y1: %f" , y1 );

}
void isPrimeNumber( ) {
	/* Program przeliczaj¹cy czy liczba jest liczb¹ pierwsza.
	liczba1;
	liczba_podzielników = 2 lub suma podzielników = liczba 1 + 1.
	*/
	int liczba1;
	printf( "Podaj liczbe. \n" );
	scanf_s( "%d" , &liczba1 );

	int suma = 0;
	for( int i = 1; i <= liczba1; i++ ) {

		if( liczba1 % i == 0 ) {
			suma += i;

		}
	}
	if( suma == liczba1 + 1 ) printf( "To jest liczba pierwsza.\n" );
	else printf( "To nie jest liczba pierwsza. \n" );

}

void simpleCalculator( ) {
	
	float liczba1, liczba2;
	printf( "wypisz liczbe\n" );
	scanf( "%f" , &liczba1 );
	printf( "wpisz 2 liczbe\n" );
	scanf( "%f" , &liczba2 );
	printf( "1.Suma \n2.Roznica \n3.Mnozenie \n4.Dzielenie \n" );
	int option;
	scanf( "%d" , &option );
	switch( option ) {
	case 1:
		printf( "liczba1 + liczba2 = %f" , liczba1 + liczba2 );
		break;
	case 2:
		printf( "liczba1 - liczba = %f" , liczba1 - liczba2 );
		break;
	case 3:
		printf( "liczba1*liczba2 = %f" , liczba1 * liczba2 );
		break;
	case 4:
		if( liczba2 != 0 )
			printf( "liczba1/liczba2 = %f" , liczba1 / liczba2 );
		else printf( "Nie dziel przez 0\n" );
		break;
	default:
		break;

	}
}
void triangleOfNumber( ) {

	for( int i = 1; i <= 9; i++ )
	{
		for( int j = 1; j <= 9 - i; j++ )
			printf( " " );
		for( int j = 1; j <= i; j++ )
			printf( "%1d" , j ); //%d - format dla int-ow lub pochodnych// albo zero// zmienna liczba parametrow
		for( int j = i - 1; j > 0; j-- )
			printf( "%1d" , j );
		printf( "\n" );
	}

}

void trinomial( ) {

	int a , b , c;
	printf( "Podaj wspolczynnik a,b,c\n" );
	scanf_s( "%d %d %d" , &a , &b , &c );
	if( a != 0 )
	{
		//policz delte 
		double delta = ( double ) ( b * b - 4 * a * c );
		if( delta > 0 )
		{
			double x1 = ( -b + sqrt( delta ) ) / 2 * a; 
			double x2 = ( -b - sqrt( delta ) ) / 2 * a;
			printf( "x1 = %f x2= %f \n" , x1 , x2 );
		}
		else if( delta == 0 )
		{
			double x = ( double ) ( -b / ( 2 * a ) ); 
			printf( "x= %f" , x );
		}
		else
			printf( "Nie ma pierwiastkow\n" );
	}
	else
	{
		printf( "Nie ma pierwiastkow, a=0" );
	}
}
//mnozenie za pomoca dodawania
int mult( int x , int y )
{
	int result = 0;
	for( int i = 0; i < x; i++ )
	{
		result = result + y;

	}
	return result;

}
//dzielenie za pomoca odejmowania
int div_( int x , int y )
{
	int w = 0;
	int r = x;
	while( r >= y ) 
	{
		r -= y; // x= x-y
		w++;

	}
	return w;
}
//SUMA N LICZB NIEPARZYSTYCH ZACZYNAJ¥C OD K 
int sumOddNumber( int k , int n )
{
	int sum = 0;
	int next = k;
	for( int i = 0; i < n; i++ )
	{
		sum += next;
		next += 2;

	}
	return sum;
}
//GCD - Najwy¿szy wspolny dzielnik
int GCD( int x , int y )
{
	while( x != y )
	{
		if( x < y ) y = y - x;
		if( y < x ) x = x - y;
	}

	return x;
}

//suma podzielnikow
int sumOfAliquot( int x )
{
	int suma = x + 1;
	for( int i = 2; i <= sqrt( x ); i++ )
	{
		if( x % i == 0 )
		{
			suma += i;
			if( x / i != i ) suma += x / i;
		}

	}
	return suma;
}

int ackerman( int m , int n )
{
	if( m == 0 )
		return n + 1;
	if( m > 0 && n == 0 )
		return ackerman( m - 1 , 1 );
	return ackerman( m - 1 , ackerman( m , n - 1 ) );
}



///fibonacci

ULL fib( int n , int A , int B )
{
	ULL f0 = A;
	ULL f1 = B;
	if( n == 0 )
		return f0;
	if( n == 1 )
		return f1;
	for( int i = 2; i <= n; i++ )
	{
		ULL f = A * f0 + B * f1;
		f0 = f1;
		f1 = f;
	}
	return f1;
}


//ALGORYTM OBLICZANIA WARTOSCI PRZYBLIZONYCH FUNKCJI SIN

#define E 1e-6

double Sin( double x )
{
	double r = 0;
	double t = x;
	int n = 3;
	while( fabs( t ) > E )
	{
		// 1/ (n-2)! -> 1/(n)!
		// 1/(n-2)! / (n-1*n)
		r += t;
		t *= -1;
		t *= x * x;
		t /= ( n - 1 ) * n;
		n += 2;
	}
	return r;
}

//oblczanie symbolu newtona
int newt( int n , int k )
{
	int temp = n - k;
	int r = 1;

	if( temp < k )
	{
		r += k;
	}
	else r += temp;
	int w = 1;
	int i = 1;
	while( r <= n )
	{
		w = ( w * r ) / i;
		r++;
		i++;
	}
	return w;
}