#include "score.h"

int error = 0;

// define the function input_scores()

void input_scores(int s[]) {

	// get user's input using a sentinel-controlled loop, if "-1" is entered the loop will end
	int i, input = 0;
	printf("Enter scores, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++) {
		printf("Score %d: ", i+1);
		scanf("%d", &input);
		if (input < -1 || input > 100) {
			printf("error\n");
			i--;
		}
		else if (input <= 100 || input >=0) {
			int output = input;
			s[i] = output;
		}

	}
	printf("%d scores are given\n", i-1);
}