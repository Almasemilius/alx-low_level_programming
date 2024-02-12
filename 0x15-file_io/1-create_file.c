#include "main.h"

/**
 * create_file - a function that creates a fl
 *
 * @fn: name of fl to create
 * @text_content: string to write to fl
 *
 * Return: 1 on success OR -1 on faliure
*/
int create_file(const char* fn, char* text_content)
{
    int fl, ws, wrds = 0;

    if (fn == NULL)
        return (-1);

    /*open fl by creating it and if it exists write but truncate to 0*/
    fl = open(fn, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fl == -1)
        return (-1);

    if (text_content)
    {
        while (text_content[wrds] != '\0')
            wrds++;

        ws = write(fl, text_content, wrds);
        if (ws == -1)
            return (-1);
    }

    close(fl);
    return (1);
}
