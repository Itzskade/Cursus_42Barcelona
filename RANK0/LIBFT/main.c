/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:46:46 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/26 17:32:11 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdio.h>

int	main(void)
{
/* +========================+
   |      ft_isalpha.c      |
   +========================+ */

	puts("-------FT_ISALPHA-------");
	printf("ft_isalpha('A')\n -Expected: 1\n +Result: %d\n", ft_isalpha('A'));
	printf("ft_isalpha('2')\n -Expected: 0\n +Result: %d\n", ft_isalpha('2'));

/* +========================+
   |      ft_isdigit.c      |
   +========================+ */
	puts("-------FT_ISDIGIT-------");
	printf("ft_isdigit('5')\n -Expected: 1\n +Result: %d\n", ft_isdigit('5'));
	printf("ft_isdigit(5)\n -Expected: 0\n +Result: %d\n", ft_isalpha(5));

/* +========================+
   |      ft_isalnum.c      |
   +========================+ */
	puts("-------FT_ISALNUM-------");
	printf("ft_isalnum('Z')\n -Expected: 1\n +Result: %d\n", ft_isalnum('Z'));
	printf("ft_isalnum('.')\n -Expected: 0\n +Result: %d\n", ft_isalnum('.'));

/* +========================+
   |      ft_isascii.c      |
   +========================+ */
	puts("-------FT_ISASCII-------");
	printf("ft_isascii(127)\n -Expected: 1\n +Result: %d\n", ft_isascii(127));
	printf("ft_isascii(128)\n -Expected: 0\n +Result: %d\n", ft_isascii(128));
	
/* +========================+
   |      ft_isprint.c      |
   +========================+ */
	puts("-------FT_ISPRINT-------");
	printf("ft_isprint(' ')\n -Expected: 1\n +Result: %d\n", ft_isprint(' '));
	printf("ft_isprint('\\t')\n -Expected: 0\n +Result: %d\n", ft_isprint('\t'));

/* +========================+
   |      ft_strlen.c       |
   +========================+ */
	puts("--------FT_STRLEN--------");
	printf("ft_strlen(\"Libft\")\n -Expected: 5\n +Result: %zu\n", ft_strlen("Libft"));
	printf("ft_strlen(\"0x4000\")\n -Expected: 6\n +Result: %zu\n", ft_strlen("0x4000"));

/* +========================+
   |      ft_memset.c       |
   +========================+ */
	puts("--------FT_MEMSET--------");
	char ms[6];
	ft_memset(ms, 'X', 5);
	ms[5] = '\0';
	printf("ft_memset(\"\", 'X', 5)\n -Expected: XXXXX\n +Result: %s\n", ms);

	ms[6];
	ft_memset(ms, 'Y', 2);
	ms[5] = '\0';
	printf("ft_memset(\"XXXXX\", 'Y', 2)\n -Expected: YYXXX\n +Result: %s\n", ms);

/* +========================+
   |       ft_bzero.c       |
   +========================+ */
	puts("--------FT_BZERO--------");
	char bz[5] = "abcd";
	ft_bzero(bz, 2);
	printf("ft_bzero(\"abcd\", 2)\n -Expected: cd\n +Result: ");
	fflush(stdout);
	write(1, bz, 4);
	printf("\n");

/* +========================+
   |      ft_memcpy.c       |
   +========================+ */
	puts("-------FT_MEMCPY--------");
	char mcpy[6];
	ft_memcpy(mcpy, "12345", 5);
	mcpy[5] = '\0';
	printf("ft_memcpy(\"\", \"12345\", 5)\n -Expected: 12345\n +Result: %s\n", mcpy);

/* +========================+
   |      ft_memmove.c      |
   +========================+ */
	puts("-------FT_MEMMOVE------");
	char mm[6] = "abcde";
	ft_memmove(mm + 1, mm, 4);
	printf("ft_memmove(\"abcde\" + 1, \"abcde\", 4)\n -Expected: aabcd\n +Result: %.*s\n", 5, mm);

/* +========================+
   |      ft_strlcpy.c      |
   +========================+ */
	puts("------FT_STRLCPY-------");
	char scpy[10];
	ft_strlcpy(scpy, "Libft", sizeof(scpy));
	printf("ft_strlcpy(\"\", \"Libft\")\n -Expected: Libft\n +Result: %s\n", scpy);

/* +========================+
   |      ft_strlcat.c      |
   +========================+ */
	puts("-------FT_STRLCAT-------");
	char scat[20] = "Hola";
	ft_strlcat(scat, " Mundo", sizeof(scat));
	printf("ft_strlcat(\"Hola\", \"Mundo\") \n -Expected: Hola Mundo\n +Result: %s\n", scat);

/* +========================+
   |      ft_toupper.c      |
   +========================+ */
	puts("-------FT_TOUPPER-------");
	printf("ft_toupper('a')\n -Expected: 'A'\n +Result: '%c'\n", ft_toupper('a'));
	printf("ft_toupper('z')\n -Expected: 'Z'\n +Result: '%c'\n", ft_toupper('z'));
	printf("ft_toupper('1')\n -Expected: '1'\n +Result: '%c'\n", ft_toupper('1'));

/* +========================+
   |      ft_tolower.c      |
   +========================+ */
	puts("-------FT_TOLOWER-------");
	printf("ft_tolower('A')\n -Expected: 'a'\n +Result: '%c'\n", ft_tolower('A'));
	printf("ft_tolower('Z')\n -Expected: 'z'\n +Result: '%c'\n", ft_toupper('Z'));
	printf("ft_tolower('3')\n -Expected: '3'\n +Result: '%c'\n", ft_toupper('3'));

/* +========================+
   |      ft_strchr.c       |
   +========================+ */
	puts("-------FT_STRCHR-------");
	printf("ft_strchr(\"Hola\", 'l')\n -Expected: \"la\"\n +Result: %s\n", ft_strchr("Hola", 'l'));
	printf("ft_strchr(\"MundoFacundo\", 'u')\n -Expected: \"undoFacundo\"\n +Result: %s\n", ft_strchr("MundoFacundo", 'u'));

/* +========================+
   |      ft_strrchr.c      |
   +========================+ */
	puts("------FT_STRRCHR------");
	printf("ft_strrchr(\"Hola\", 'l')\n -Expected: \"la\"\n +Result: %s\n", ft_strrchr("Hola", 'l'));
	printf("ft_strrchr(\"MundoFacundo\", 'l')\n -Expected: \"undo\"\n +Result: %s\n", ft_strrchr("MundoFacundo", 'u'));

/* +========================+
   |      ft_strncmp.c      |
   +========================+ */
	puts("------FT_STRNCMP------");
	printf("ft_strncmp(\"abc\", \"abd\", 2)\n -Expected: 0\n +Result: %d\n", ft_strncmp("abc", "abd", 2));
	printf("ft_strncmp(\"abc\", \"abd\", 3)\n -Expected: -1\n +Result: %d\n", ft_strncmp("abc", "abd", 3));
	printf("ft_strncmp(\"abc\", \"aba\", 3)\n -Expected: 2\n +Result: %d\n", ft_strncmp("abc", "aba", 3));

/* +========================+
   |      ft_memchr.c       |
   +========================+ */
	puts("-------FT_MEMCHR-------");
	printf("ft_memchr(\"abcdef\", 'c', 6)\n -Expected: \"cdef\"\n +Result: %s\n", (char *)ft_memchr("abcdef", 'c', 6));
	printf("ft_memchr(\"abcdef\", 'e', 9)\n -Expected: \"ef\"\n +Result: %s\n", (char *)ft_memchr("abcdef", 'e', 9));

/* +========================+
   |      ft_memcmp.c       |
   +========================+ */
	puts("-------FT_MEMCMP-------");
	printf("ft_memcmp(\"abc\", \"abh\", 3)\n -Expected: < 0\n +Result: %d\n", ft_memcmp("abc", "abd", 3));
	printf("ft_memcmp(\"abc\", \"abc\", 3)\n -Expected:  0\n +Result: %d\n", ft_memcmp("abc", "abc", 3));

/* +========================+
   |      ft_strnstr.c      |
   +========================+ */
	puts("------FT_STRNSTR-------");
	printf("ft_strnstr(\"Hola Mundo\", \"Mun\", 10)\n -Expected: \"Mundo\"\n +Result: %s\n", ft_strnstr("Hola Mundo", "Mun", 10));
	printf("ft_strnstr(\"Free Libft\", \"L\", 6)\n -Expected: \"Libft\"\n +Result: %s\n", ft_strnstr("Free Libft", "L", 6));
	printf("ft_strnstr(\"Free Libft\", \"L\", 5)\n -Expected: \"(null)\"\n +Result: %s\n", ft_strnstr("Free Libft", "L", 5));

/* +========================+
   |       ft_atoi.c        |
   +========================+ */
	puts("--------FT_ATOI--------");
	printf("ft_atoi(\"42\")\n -Expected: 42\n +Result: %d\n", ft_atoi("  42"));
	printf("ft_atoi(\"-404\")\n -Expected: -404\n +Result: %d\n", ft_atoi("-404"));

/* +========================+
   |      ft_substr.c       |
   +========================+ */
	puts("-------FT_SUBSTR-------");
	printf("ft_substr(\"Libft\", 1, 3)\n -Expected: ibf\n +Result: %s\n", ft_substr("Libft", 1, 3));
	printf("ft_substr(\"Murcielago\", 6, 4)\n -Expected: lago\n +Result: %s\n", ft_substr("Murcielago", 6, 4));

/* +========================+
   |      ft_strjoin.c      |
   +========================+ */
	puts("------FT_STRJOIN-------");
	printf("ft_strjoin(\"Hola\", \"Mundo\")\n -Expected: Hola Mundo\n +Result: %s\n", ft_strjoin("Hola", " Mundo"));
	printf("ft_strjoin(\"42\", \"School\")\n -Expected: 42School\n +Result: %s\n", ft_strjoin("42", "School"));

/* +========================+
   |      ft_strtrim.c      |
   +========================+ */
	puts("-------FT_STRTRIM------");
	printf("ft_strtrim('   Libft  ',  " ")\n -Expected: Libft\n +Result: %s\n", ft_strtrim("  Libft  ", " "));
	printf("ft_strtrim('12345uccess54321', \"12345\")\n -Expected: Success\n +Result: %s\n", ft_strtrim("12345Success54321", "12345"));

/* +========================+
   |       ft_split.c       |
   +========================+ */
	puts("-------FT_SPLIT--------");
	char **split = ft_split("uno,dos,tres", ',');
	printf("ft_split(\"uno,dos,tres\", ',')""\n -Expected: uno dos tres\n +Result:\n");
	for (int i = 0; split[i]; i++) {
    	printf("  [%d] %s\n", i, split[i]);
	}

/* +========================+
   |       ft_itoa.c        |
   +========================+ */
	puts("--------FT_ITOA--------");
	printf("ft_itoa(42)\n -Expected: 42\n +Result: %s\n", ft_itoa(42));
	printf("ft_itoa(-123)\n -Expected: -123\n +Result: %s\n", ft_itoa(-123));

/* +========================+
   |      ft_strmapi.c      |
   +========================+ */
	puts("-------FT_STRMAPI-------");
	char ft_tolower_iter(unsigned int i, char c) {
		(void)i;
		c = ft_tolower(c);
		return (c);
	}
	char *mapped = ft_strmapi("ABC", ft_tolower_iter);
	printf("ft_strmapi(\"ABC\")\n -Expected: abc\n +Result: %s\n", mapped);

	
	char xor_cipher1(unsigned int i, char c) {
		(void)i;
		unsigned char key = (32 + 7);
		c ^= key;
		return (c);
	}
	char *mappedxor = ft_strmapi("XorCipher", xor_cipher1);
	printf("ft_strmapi(\"XorCipher\", xor_cipher1)\n +Expected: HUdNWOBU \n -Result: %s\n", mappedxor);

/* +========================+
   |     ft_striteri.c      |
   +========================+ */
	puts("------FT_STRITERI-------");
	void toupper_iter(unsigned int i, char *c) {
		(void)i;
		*c = ft_toupper(*c);
	}
	char str[] = "abc";
	ft_striteri(str, toupper_iter);
	printf("ft_striteri(\"abc\")\n -Expected: ABC\n +Result: %s\n", str);


	void xor_cipher2(unsigned int i, char *c) {
		(void)i;
		unsigned char key = (42 + 17);
		*c ^= key;
	}
	char str1[] = "XorCipher";
	ft_striteri(str1, xor_cipher2);
	printf("ft_striteri(\"XorCipher\", xor_cipher2)\n +Expected: cTIxRKS^I\n -Result: %s\n", str1);
/* +========================+
   |    ft_putchar_fd.c     |
   +========================+ */
	puts("-----FT_PUTCHAR_FD------");
	printf("ft_putchar_fd('L')\n -Expected: L\n +Result: ");
	fflush(stdout);
	ft_putchar_fd('L', 1);
	write(1, "\n", 1);

/* +========================+
   |     ft_putstr_fd.c     |
   +========================+ */
	puts("------FT_PUTSTR_FD------");
	printf("ft_putstr_fd(\"Hola\"); ft_putstr_fd(\"Mundo\")\n -Expected: HolaMundo\n +Result: ");
	fflush(stdout);
	ft_putstr_fd("Hola", 1); ft_putstr_fd("Mundo", 1);
	write(1, "\n", 1);

/* +========================+
   |    ft_putendl_fd.c     |
   +========================+ */
	puts("-----FT_PUTENDL_FD------");
	printf("ft_putendl_fd(\"Hola\"); ft_putendl_fd(\"Mundo\")\n -Expected: Hola\nMundo\n +Result: ");
	fflush(stdout);
	ft_putendl_fd("Hola", 1); ft_putendl_fd("Mundo", 1);

/* +========================+
   |     ft_putnbr_fd.c     |
   +========================+ */
	puts("------FT_PUTNBR_FD------");
	printf("ft_putnbr_fd(1234)\n -Expected: 1234\n +Result: ");
	fflush(stdout);
	ft_putnbr_fd(1234, 1);
	write(1, "\n", 1);

	printf("ft_putnbr(-5678)\n -Expceted: -5678\n +Result: ");
	fflush(stdout);
	ft_putnbr_fd(-5678, 1);
	write(1, "\n", 1);
}
