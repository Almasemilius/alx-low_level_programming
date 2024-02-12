#include "main.h"

/**
 * append_text_to_fle - a funcion that appends text at the end
 *                      of a fle
 *
 * @fname: fle to hold data
 * @context:  content to add to fle
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_fle(const char *fname, char *context)
{
	int fle, status, wrd = 0;

	if (fname == NULL) 
		return (-1);

	fle = open(fname, O_APPEND | O_WRONLY);
	if (fle == -1) 
		return (-1);

	if (context) 
	{
		while (context[wrd] != '\0') 
			wrd++;

		status = write(fle, context, wrd);
		if (status == -1) 
			return (-1);
	}

	close(fle); 
	return (1);
}
