#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define ULL unsigned long long
#define PI 3.14159265358979 
#include <stdio.h>
#include <cmath>
#include <string>


void howManyDigits( );//oblicza ile jest cyfr w liczbie
void angleOfRotation_point( );//obrot punktu o k¹t
void isPrimeNumber( );//sprawdza czy liczba jest pierwsza
void simpleCalculator( );//prosty kalkulator
void triangleOfNumber( );//wypisuje trojk¹t z³o¿ony z liczb
void trinomial( );//oblicza ax^2+bx+c
int mult( int x , int y );//mno¿enie za pomoc¹ dodawania
int div_( int x , int y );//dzielenie za pomoc¹ odejmowania
int sumOddNumber( int k , int n );//suma liczb nieparzystych
int GCD( int x , int y );//najwiekszy wspolny dzielnik
int sumOfAliquot( int x );//suma podzielnikow danej liczby
int ackerman( int m , int n );
ULL fib( int n , int A , int B );
int newt( int n , int k );
double Sin( double x );
