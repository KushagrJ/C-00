// C17 Standard
// This program doesn't require input validation.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


void get_string_from_user(char **, size_t);
size_t count_and_locate_units(const char *, const char ***, size_t **, size_t,
                              bool);
void print_units(const char **, size_t *, size_t, bool);


int main(void)
{

    size_t assumed_size_of_string_array = 100;
    char * string = (char *) malloc(assumed_size_of_string_array);
    if (string == NULL)
    {
        fprintf(stderr, "Unsuccessful allocation!\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter a string (EOF to stop) :-\n");
    get_string_from_user(&string, assumed_size_of_string_array);


    size_t assumed_number_of_sentences = 10;

    const char ** starting_addresses_of_sentences = (const char **)
        malloc(assumed_number_of_sentences * sizeof (const char *));
    if (starting_addresses_of_sentences == NULL)
    {
        fprintf(stderr, "Unsuccessful allocation!\n");
        exit(EXIT_FAILURE);
    }

    size_t * lengths_of_sentences = (size_t *)
        malloc(assumed_number_of_sentences * sizeof (size_t));
    if (lengths_of_sentences == NULL)
    {
        fprintf(stderr, "Unsuccessful allocation!\n");
        exit(EXIT_FAILURE);
    }

    size_t actual_number_of_sentences =
        count_and_locate_units(string, &starting_addresses_of_sentences,
                               &lengths_of_sentences,
                               assumed_number_of_sentences, true);

    print_units(starting_addresses_of_sentences, lengths_of_sentences,
                actual_number_of_sentences, true);


    size_t assumed_number_of_words = 100;

    const char ** starting_addresses_of_words = (const char **)
        malloc(assumed_number_of_words * sizeof (const char *));
    if (starting_addresses_of_words == NULL)
    {
        fprintf(stderr, "Unsuccessful allocation!\n");
        exit(EXIT_FAILURE);
    }

    size_t * lengths_of_words = (size_t *)
        malloc(assumed_number_of_words * sizeof (size_t));
    if (lengths_of_words == NULL)
    {
        fprintf(stderr, "Unsuccessful allocation!\n");
        exit(EXIT_FAILURE);
    }

    size_t actual_number_of_words =
        count_and_locate_units(string, &starting_addresses_of_words,
                               &lengths_of_words,
                               assumed_number_of_words, false);

    print_units(starting_addresses_of_words, lengths_of_words,
                actual_number_of_words, false);


    free(string);
    free(starting_addresses_of_sentences);
    free(lengths_of_sentences);
    free(starting_addresses_of_words);
    free(lengths_of_words);

    return 0;

}


void get_string_from_user(char ** ptr_string,
                          size_t assumed_size_of_string_array)
{

    size_t i = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        (*ptr_string)[i] = c;

        i++;
        if (i == assumed_size_of_string_array)
        {
            assumed_size_of_string_array *= 2;

            char * temp = realloc(*ptr_string, assumed_size_of_string_array);
            if (temp == NULL)
            {
                fprintf(stderr, "Unsuccessful allocation!\n");
                exit(EXIT_FAILURE);
            }
            *ptr_string = temp;
        }
    }
    (*ptr_string)[i] = '\0';

    size_t actual_size_of_string_array = i+1;

    char * temp = realloc(*ptr_string, actual_size_of_string_array);
    if (temp == NULL)
    {
        fprintf(stderr, "Unsuccessful allocation!\n");
        exit(EXIT_FAILURE);
    }
    *ptr_string = temp;

}


size_t count_and_locate_units(const char * string,
                              const char *** ptr_starting_addresses_of_units,
                              size_t ** ptr_lengths_of_units,
                              size_t assumed_number_of_units,
                              bool sentences)
{

    // If (sentences == true), then 'units' means 'sentences'.
    // Else, 'units' means 'words'.

    // Any sequence of characters starting with a non-whitespace character and
    // ending with either
    // (1) a full stop followed by whitespace, or
    // (2) an exclamation mark followed by whitespace, or
    // (3) a question mark followed by whitespace, or
    // (4) End-of-file
    // is considered to be a sentence by this function.

    // Any sequence of non-whitespace characters is considered to be a word by
    // this function.

    size_t i = 0, j = 0;
    while (true)
    {
        while (isspace(string[j]))
            j++;

        if (string[j] == '\0')
            break;

        if (i == assumed_number_of_units)
        {
            assumed_number_of_units *= 2;

            const char ** temp1 =
                realloc(*ptr_starting_addresses_of_units,
                        assumed_number_of_units * sizeof (const char *));
            if (temp1 == NULL)
            {
                fprintf(stderr, "Unsuccessful allocation!\n");
                exit(EXIT_FAILURE);
            }
            *ptr_starting_addresses_of_units = temp1;

            size_t * temp2 =
                realloc(*ptr_lengths_of_units,
                        assumed_number_of_units * sizeof (size_t));
            if (temp2 == NULL)
            {
                fprintf(stderr, "Unsuccessful allocation!\n");
                exit(EXIT_FAILURE);
            }
            *ptr_lengths_of_units = temp2;
        }

        (*ptr_starting_addresses_of_units)[i] = &string[j];
        (*ptr_lengths_of_units)[i] = 0;

        while (string[j] != '\0')
        {
            if (sentences)
            {
                if (isspace(string[j]))
                {
                    if ((string[j-1] == '.') || (string[j-1] == '!') ||
                            (string[j-1] == '?'))
                        break;
                }
            }
            else
            {
                if (isspace(string[j]))
                    break;
            }

            ((*ptr_lengths_of_units)[i])++;
            j++;
        }

        i++;
    }

    size_t actual_number_of_units = i;

    if (actual_number_of_units)
    {
        const char ** temp1 =
            realloc(*ptr_starting_addresses_of_units,
                    actual_number_of_units * sizeof (const char *));
        if (temp1 == NULL)
        {
            fprintf(stderr, "Unsuccessful allocation!\n");
            exit(EXIT_FAILURE);
        }
        *ptr_starting_addresses_of_units = temp1;

        size_t * temp2 =
            realloc(*ptr_lengths_of_units,
                    actual_number_of_units * sizeof (size_t));
        if (temp2 == NULL)
        {
            fprintf(stderr, "Unsuccessful allocation!\n");
            exit(EXIT_FAILURE);
        }
        *ptr_lengths_of_units = temp2;
    }
    else
    {
        free(*ptr_starting_addresses_of_units);
        *ptr_starting_addresses_of_units = NULL;

        free(*ptr_lengths_of_units);
        *ptr_lengths_of_units = NULL;
    }

    return actual_number_of_units;
}


void print_units(const char ** starting_addresses_of_units,
                 size_t * lengths_of_units,
                 size_t actual_number_of_units,
                 bool sentences)
{

    // If (sentences == true), then 'units' means 'sentences'.
    // Else, 'units' means 'words'.

    printf("\n\nNumber of %s = %zu\n\n",
           (sentences ? "sentences" : "words"), actual_number_of_units);

    for (size_t x = 0; x < actual_number_of_units; x++)
    {
        printf("%s No. %0*zu: ", (sentences ? "Sentence" : "Word"),
               (sentences ? 2 : 3), x+1);
        for (size_t y = 0; y < lengths_of_units[x]; y++)
        {
            if (starting_addresses_of_units[x][y] == '\n')
                putchar(' ');
            else
                putchar(starting_addresses_of_units[x][y]);
        }
        printf("\n");
    }

}
