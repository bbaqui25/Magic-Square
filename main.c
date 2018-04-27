/* ----------------------------------------------
 * Basic Calculator with + - / % *
 *
 * class: CS 141, Spring 2016. Tue 9am lab.
 * System: Windows 10, DevC++
 * Author: Bushra Baqui
 *
 * To Do: Identify the mind-reading letter
 * ----------------------------------------------
 */

#include<stdio.h>          // standard library header defines various functions for input and output
#include<stdlib.h>        // standard library header for random number generation
#include<time.h>         // header utilized for manupulating date and time

int main() {
	
	// printf function produces formatted output. Here, we are using it to print the program header information
	printf ("Program #1: Russian Magic Square\n");  
    printf ("Author: Bushra Baqui\n");
    printf ("TA: Chenwei Zhang   Lab: Tues 9am\n");
    printf ("Date: January 22, 2016\n");
    printf ("System:  DevC++ on Windows 10\n\n");
    
	int rows, col, num;                 /*Declaration of integer variables. 
	                                    We are declaring 3 integer variables- rows, col and num*/
	char letters, mindReadingLetter;    /*Declaration of character variables. 
	                                    We are declaring 2 character variables- letters and mindReadingLetter*/
	
	srand((char)time(0));	            //Seeds a random letter using the system time
	
	mindReadingLetter = rand () % 26 + 97;      /*assigning variable (mindReadingLetter) value to be a 
	                                              random lower-case alphabet*/
	
	//Using 'for' loop to create the table array of the numbers with assigned random letters
	
	for(rows = 99; rows >= 9; rows -= 10) {   //Creates table array with numbers counting down from 99 down to 0
	    for (col = 0; col <= 9; col++) {
		
		letters = (rand() % 26 + 97 );          //this generates a random lower-case alphabet
		
		num = rows - col;						//Defining a num variable with its value being rows-col
		
		if((num % 9 == 0) && (num != 0)) {      /*condition to decide which will be the 'mind-reading' letter. 
			                                      Mind-reading letter is a multiple of 9. So, if the number 
			                                      is a multiple of 9 (i.e.(num % 9 == 0)) and the number is 
												  not 0 (i.e.(num != 0)), then we assign that number to a 
												  mind-reading letter. */    
		    letters = mindReadingLetter;
		}
		
		if ((num % 2 == 0) && (num % 9 != 0)){   /*checking to see if it is even or odd to choose whether to 
		                                         generate a lowercase or uppercase ASCII character. 
		                                         If the numbers are even and not a multiple of 9 then I
		                                         assign those numbers to a random upper-case alphabet 
												 else all the other odd numbers excluding number 0 will be
												 assigned to a random lower-case alphabet*/
			letters = rand() % 26 + 65;
		}
		printf ("%2d:%c  ", num, letters);      /*output table array with 0-99 numbers paired to 
		                                         random letters and utilizing the mindreadingletter logic*/
		
		
	}
	printf ("\n");      // new line character. separates each row
	
	
 }
	printf ("\n\n");     //shows space between the table and the user instructions
	
	//prompt user instructions for the game
	printf ("1. Choose any two-digit number in the table above (e.g. 73).\n");
	printf ("2. Subtract its two digits from itself (e.g. 73 - 7 - 3 = 63)\n");
	printf ("3. Find this new number (e.g. 63) and remember the letter next to it.\n");
	printf ("4. Now press the return key and I'll read your mind...\n\n");
	
	//scan for user input of pressing the return key
	scanf ("'\r'");                                          
	
	//Provide the 'mind-reading' letter output, along with the TA name and lab time
	printf ("You selected the character: %c\n\n", mindReadingLetter);   
	 printf ("TA: Chenwei Zhang   Lab: Tues 9am\n");
	

	return (0);			//describes the exit status of the program
	}




