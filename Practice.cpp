#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/* 
* Description of program.
* This program show how to use new and delete to create and remove memory in program.
*/
//create namespace
/*
* Branch name and description per branch
* master : total program.
* master_test : write program and debug.
*/
//prototype
//--------------------------
//micro
//---------------------
//global variable
//-------------------
//struct
//-------------------
//union
// !-------------------

// TODO classes

// & class get_number_show_number.

/*
* Description of class get_number_show_number.
* class name : get_number_show_number
* This class get two number and show them.
*/

class get_number_show{

private :

int _number_1 , _number_2 ; // //Informative comment : this is private field.

public :

void get_number() ; // // Prototype of function get_number .

void show_number() ; // // Prototype of function show_number .


};

// !-------------------

int main(int argc, char** argv)
{

    get_number_show ob_1_get_number_show ; 

    get_number_show *p ; 

getch();
}
//function variable
// !--------------------------

// TODO Functions and constructors and destructors for classes.

// & Class get_number_show

// ? Functions

/*
* Function name get_number.
* This function get number and insert to private value.
* This function don't receive value and don't sent value.
*/

void get_number_show::get_number(){

int get_number_number1 , get_number_number2 ;

cout << "Enter number1 = " ;
cin >> get_number_number1 ;

cout << "Enter number2 = " ;
cin >> get_number_number2 ;

_number_1 = get_number_number1 ;

_number_2 = get_number_number2 ;

}

/*
* Function name show_number.
* This function show number's that insert to private field's.
* This function don't receive value and don't sent value.
*/

void get_number_show::show_number(){

cout << "Number_1 = " << _number_1 ; // // Show private field1 .

cout << "Number_2 = " << _number_2 ; // // Show private field2 .

}