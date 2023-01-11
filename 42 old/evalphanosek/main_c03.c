//#include "./ex00/ft_strcmp.c"
//#include "./ex01/ft_strncmp.c"
//#include "./ex02/ft_strcat.c"
//#include "./ex03/ft_strncat.c"
//#include "./ex04/ft_strstr.c"
#include "./ex05/ft_strlcat.c"


#include  <stdio.h>
#include  <string.h>

int main(void)
{
		char str1[] = "ABC";
		char str2[7] = "abc";
		//char str1a[] = "ABC";
		//char str2a[7] = "abc";
		int res; 
		/* 
	printf("\n------ex00---------\n");
		printf("ft_strcmp('Hbllo', 'Hzll') returns (%i)\n\t(should return {%i}\n",  ft_strcmp("Hbllo", "Hzll"), strcmp("Hbllo", "Hzll"));
		printf("ft_strcmp(':)', '') returns (%i)\n\t(should return {%i}\n",  ft_strcmp(":)", ""), strcmp(":)", ""));
		printf("ft_strcmp('ABCD', 'ABCD') returns (%i)\n\t(should return {%i}\n",  ft_strcmp("ABCD", "ABCD"), strcmp("ABCD", "ABCD"));
	
	printf("\n------ex01---------\n");
		printf("ft_strncmp('Hbllo', 'Hzll',5) returns (%i)\n\t(should return {%i}\n",  ft_strncmp("Hbllo", "Hzll",5), strncmp("Hbllo", "Hzll",5));
		printf("ft_strncmp('', ':)',5) returns (%i)\n\t(should return {%i}\n",  ft_strncmp("", ":)",5), strncmp("", ":)",5));
		printf("ft_strncmp('ABab', 'ABCD',2) returns (%i)\n\t(should return {%i}\n",  ft_strncmp("ABab", "ABCD",2), strncmp("ABab", "ABCD",2));
		printf("ft_strncmp('ABab', 'ABCD',4) returns (%i)\n\t(should return {%i}\n",  ft_strncmp("ABab", "ABCD",4), strncmp("ABab", "ABCD",4));
		printf("ft_strncmp('ABCD', 'ABCD',4) returns (%i)\n\t(should return {%i}\n",  ft_strncmp("ABCD", "ABCD",4), strncmp("ABCD", "ABCD",4));
	
	printf("\n------ex02---------\n");

		printf("BEFORE: str1[4]: %s; str2[7]: %s\n",str1, str2);
		printf("should contcatotinate str1 to the end of str2\n");
		ft_strcat(str2, str1);
		printf("AFTER: str1[4]: %s; str2[7]: %s\n",str1, str2);

	printf("\n------ex03---------\n");
		strcpy(str1, "ABC");
		strcpy(str2, "abc");

		printf("BEFORE: str1[4]: %s; str2[7]: %s\n",str1, str2);

		printf("should copy 1st char of {%s} into {%s}\n", str1, str2);
		ft_strncat(str2, str1, 1);
		printf("AFTER: str1[4]: %s; str2[7]: %s\n",str1, str2);
 */

	/* printf("\n------ex04---------\n");
		char str[] = "IAMA1234~hiddenMESSAGE";
		char tofind[] = "hidden";

		printf("string: %s\nto find: %s\n", str, tofind);
		printf("output of FT_strstr - %s\n", ft_strstr(str, tofind));
		printf("output of strstr - %s\n\n", strstr(str, tofind));

		strcpy(str, ":)*noSNosed:\\:( Faces A11oWED!:)");
		strcpy(tofind, ":-)");

		printf("string: %s\nto find: %s\n", str, tofind);
		printf("output of FT_strstr - %s\n", ft_strstr(str, tofind));
		printf("output of strstr - %s\n\n", strstr(str, tofind));

		strcpy(str, "");
		strcpy(tofind, ":-)");

		printf("string: %s\nto find: %s\n", str, tofind);
		printf("output of FT_strstr - %s\n", ft_strstr(str, tofind));
		printf("output of strstr - %s\n\n", strstr(str, tofind));

		strcpy(str, ":))");
		strcpy(tofind, "");

		printf("string: %s\nto find: %s\n", str, tofind);
		printf("output of FT_strstr - %s\n", ft_strstr(str, tofind));
		printf("output of strstr - %s\n\n", strstr(str, tofind));
*/
	printf("\n------ex05---------\n");
		strcpy(str1, "ABC");
		strcpy(str2, "abc");

		printf("BEFORE: str1[4]: %s; str2[7]: %s\n",str1, str2);
		res = ft_strlcat(str2, str1, 5);
		printf("FT:\n");
		printf("AFTER: str1[4]: %s; str2[7]: %s\n",str1, str2);
		printf("return value is: %i, should be str1+str2\n",res);

	return 0;
}
