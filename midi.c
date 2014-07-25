/* 
 / Tuesday, Sept. 18th, 2012
 / James Keary
 / MIDI Converter: Fun with Modulus Arithmatic!
 / Description: Program prompts user to enter a MIDI value (between 0 and 127), and then outputs the equivalent pitch
 */

#include <stdio.h>

int main()
{
	int num_midi;
	int modulus = 12;
	
	printf("\nPlease enter a MIDI value, and I will tell you the note that corresponds: ");
	scanf("%i", &num_midi);
	
	if ( num_midi < 0 || num_midi > 127 ) { // make sure number is in MIDI value range
		printf("Error - MIDI value is out of range, please enter a number between 0 and 127: ");
		scanf("%i", &num_midi);
	} // use modulo arithmatic to determine the note value.  1 through 12 to get the complete octave.
	if ( num_midi % modulus == 0 ) {
		printf("your note is a C\n");
	}
	else if ( num_midi % modulus == 1 ) {
		printf("your note is a C#/Db\n");
	}
	else if ( num_midi % modulus == 2 ) {
		printf("your note is a D\n");
	}	
	else if ( num_midi % modulus == 3 ) {
		printf("your note is a D#/Eb\n");
	}
	else if ( num_midi % modulus == 4 ) {
		printf("your note is an E\n");
	}
	else if ( num_midi % modulus == 5 ) {
		printf("your note is a F\n");
	}
	else if ( num_midi % modulus == 6 ) {
		printf("your note is a F#/Gb\n");
	}
	else if ( num_midi % modulus == 7 ) {
		printf("your note is a G\n");
	}
	else if ( num_midi % modulus == 8 ) {
		printf("your note is a G#/Ab\n");
	}
	else if ( num_midi % modulus == 9 ) {
		printf("your note is an A\n");
	}
	else if ( num_midi % modulus == 10 ) {
		printf("your note is a A#/Bb\n");
	}
	else if ( num_midi % modulus == 11 ) {
		printf("your note is a B\n");
	}
	return 0;
}