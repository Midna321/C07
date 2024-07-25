#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
char ft_strlen(char *str)
{
	int i = 0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*concstring;
	int	i;
	int	j;
	int	c;

	int total_lenght;
	//Setting i to 1 so it doesn't include size of the program name.
	i = 1;
	//Since chars weight 1 byte, we'll calculate the total lenght of the strings plus separator and
	//add it to malloc. We won't need sizeof in this case. 
	while(i < size)
	{
		total_lenght+= ft_strlen(strs[i]);
		if(i < size - 1)
		{
			total_lenght += ft_strlen(sep);
		}
		i++;
	}
	printf("La lunghezza totale è %i\n", total_lenght);
	concstring = (char*)malloc(total_lenght + 1);
	if(concstring == NULL)
		return NULL;
	c = 0;
	//Set this to 1 if you don't wanna print the program name.
	i = 0;
	//Since Size is the amount of strings, we'll use a while loop to go trough them all.
	while(i < size)
	{
		//We reset j to 0 once we've cycled the first string
		j = 0;
		while(strs[i][j] != '\0')
		{
			//Assign characters to concstring from strs.
			concstring[c++] = strs[i][j++];
		}
		//We reset j to 0 to cycle the separator itself to concatenate strings.
		j = 0;
		//Make it so the last string won't have a separator attached.
		if(i < size - 1)
		{
			//Cycle the separator
			while(sep[j] != '\0')
			{
				//Attach the separator to our string. This is similar behaviour of strcat.
				concstring[c++] = sep[j++];
			}
			//Move to the next string.
		}
		i++;
	}
	concstring[c] = '\0';
	return concstring;
}

int main(int ac, char **av)
{
	char *str = ft_strjoin(ac, av, "-");
	printf("La stringa concatenata  è %s\n", str);
}
