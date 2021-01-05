/*count blank spaces tabs and new lines*/
#include <stdio.h>

main(){
	// get an input from user
	int user_input, hidden_count;

	user_input = getchar();

	hidden_count = 0;
	printf("hidden first:%d\n", hidden_count);

	if(user_input == '\t')
		printf("user in: %d\n", user_input);
		++hidden_count;
	else if (/* condition */)
	{
		/* code */
	}(user_input == '\n')
		++hidden_count;


	printf("hidden 2nd: %d\n", hidden_count);

	// count the number of hidden characters \t OR \n OR _
}