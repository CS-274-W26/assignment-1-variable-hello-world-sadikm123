#include <stdio.h> // Necessary for printf()
#include <stdlib.h> // Necessary for srand() and rand()
#include <time.h> // Necessary for time()

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	
	srand(time(NULL)); // Seed the random number generator
	int myrand = rand() % 10; // synthesize our preferred random number range

	printf("The rando number was: %d\n", myrand);

	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand >= 5 && myrand <= 9) {
		printf("FRODO LIVES\n");
	} else if (myrand == 10) {
		printf("Larn is the best roguelike\n");
	}
}
