#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void line(){
	cout << "\n____________________________________________________________\n\n" ;
}

int fatt ( int x ){
	int pro = 1 ;
	for ( x ; x > 1 ; x -- )
	{
		pro *= x ;
	}
	return pro ;
}

int main(int argc, char** argv) {
	
	int x ;
	
	cout << "Numero = " ;
	cin >> x ;
	
	line () ;
	
	cout << "Il fattoriale = " << fatt (x) ;
	
	return 0;
}
