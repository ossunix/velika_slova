#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int position = 0;
	char* word;
	word = (char*) malloc (100 * sizeof(char));
	
	scanf("%s", word);
	
	while (word[position] != '\0' && word[position] != ' ')
	{
		if (word[position] >= 'a' && word[position] <= 'z') 
		{
			word[position] = word[position] - 32;
		}  
		position++;
	}
	printf("%s\n", word);
	return 0;
}
