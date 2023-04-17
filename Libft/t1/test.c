#include "libft.h"

int main(void)
{
    int option = 1;
    char *buff;

    while (option > 0)
    {
        printf("Choose a test (# from 1 to 21 and any negative to quit):\n\
        1: isalpha\n\
        2: isdigit\n\
        3: isalnum\n\
        4: isascii\n\
        5: isprint\n\
        6: strlen\n\
        7: memset\n\
        8: bzero\n\
        9: memcpy\n\
        10: memmove\n\
        11: strlcpy\n\
        12: strlcat\n\
        13: toupper\n\
        14: tolower\n\
        15: strchr\n\
        16: strrchr\n\
        17: strncmp\n\
        18: memchr\n\
        19: memcmp\n\
        20: strnstr\n\
        21: atoi\n\n Test: ");

        scanf("%s", buff);
        printf("You've choosen %s.\n", buff);
        option = ft_atoi(buff);
        char a = 0;
		char *dest = malloc(sizeof(char) * 20);
		char *src = malloc(sizeof(char) * 20);

		if (!dest || !src)
			return (1);
        if (option == 1)
                break;
        else if (option == 2)
        {
			printf("Enter a char: ");
			scanf(" %c", &a);
			printf("%c is digit: %i\n", a, ft_isdigit(a));
			break;
        }
		else if (option == 12)
		{
			printf("Enter the dest: ");
			scanf(" %s", dest);
			printf("Enter the src: ");
			scanf(" %s", src);
			printf("%c is digit: %i\n", a, ft_isdigit(a));
			break;
		}
		else if (option == 20)
		{
			printf("Enter the dest: ");
			scanf(" %s", dest);
			printf("Enter the dest: ");
			scanf(" %s", src);
			printf("%c is digit: %i\n", a, ft_isdigit(a));
			break;
		}
        //////STRLEN
        //char str[20];
        //scanf("%s", str);
        //printf("%s\nstrlen: %zu", str, ft_strlen(str));

        ////MEMMOVE
        //char str[20];
        //ft_memcpy(str, "hello world!", 11);
        //ft_memmove(str + 3, str, 5);
        //printf("%s\n", str);
        //    default:
        //        printf("No valid option...\n");
        //        break;
		free(dest);
		free(src);
		break;
    }
}