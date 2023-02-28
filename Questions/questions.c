This is a makefile for building a static library named libft.a. The makefile defines some variables such as CC, CFLAGS, SRC, BONUS, OBJ, and BONUS_OBJ.

CC is the compiler being used, which is gcc. CFLAGS are the flags passed to the compiler, which include -Wall, -Wextra, and -Werror.

SRC is a list of all source files in the current directory that match the pattern "ft_.c" and not "ft_lst.c"
BONUS is a list of all source files in the current directory that match the pattern "ft_lst*.c"
OBJ is a list of object files that correspond to the source files in SRC
BONUS_OBJ is a list of object files that correspond to the source files in BONUS

The makefile has several targets:

    all: the default target, which builds the library using the object files in OBJ
    %.o: %.c: a pattern rule for building object files from source files
    $(NAME): the target for building the library from the object files
    bonus: a target that builds the library from the object files in OBJ and BONUS_OBJ
    clean: a target for removing object files
    fclean: a target for removing object files and the library
    re: a target for running fclean and then all
    .PHONY: declares all the targets to be phony targets, meaning that they are not filenames

When the makefile is run, it will look for the target specified on the command line and execute the commands specified for that target. If no target is specified, it will execute the commands for the all target by default.

In this makefile, re is a target that is defined to run the fclean target followed by the all target. This means that when the re target is run, it will first remove any object files and the library created by previous builds, and then build the library again from the source files.

The re target is used to rebuild the entire project from scratch. It is an easy way to clean up the previous build and start a new one.

It is a common practice to have a clean and fclean targets to remove object files and binary files respectively and a re target which first calls fclean and then all to rebuild the project from scratch.

The re target can be useful in several situations:

    When the source code has been modified and the library needs to be rebuilt to include the changes.
    When the library is being built on a different machine or environment, and the previous build files may not be compatible.
    When debugging and troubleshooting, it can be useful to start with a clean build to ensure that no stale files or settings are causing issues.

Additionally, using a re target can also serve as a best practice. It makes the build process more predictable, and ensures that the library is built in a consistent way every time. It also makes it easy to switch between different build environments without having to worry about the previous build files.

It is also useful when you want to distribute your library and you want to ensure that it will work on different platforms.


memcmp vs strncmp

The reason we use a pointer typecast in ft_memcmp is because the function is designed to compare binary data represented as void pointers. Since void pointers do not have a defined size, we cannot dereference them directly.

In ft_memcmp, we cast s1 and s2 to unsigned char * pointers, which allows us to dereference them as if they were pointers to unsigned char data. This enables us to compare the binary data byte-by-byte by subtracting the two unsigned char values pointed to by s1 and s2.

On the other hand, in ft_strncmp, the function is designed to compare two strings represented as char * pointers. Since char is a well-defined type with a size of 1 byte, we can dereference s1 and s2 directly as char values, and then cast them to unsigned char before subtracting them.

///SAME

if(!*s)
return(0)

if(!*s)
return(NULL)

if(*s == NULL)
return(NULL)

if(*s == NULL)
return(0)

if(*s == 0)
return(0)

if(*s == 0)
return(NULL)


//SAME

while (*str != 0)
str++;
 
 while(*str)
{str++}


while(*str != '\0')
{str++}

while (*str != NULL)
str++;

// Different

while(!*str)
{str++}


while (!*str) is not the same as the others. It will loop as long as the value pointed to by str is 0 (i.e. false), which is not necessarily the same as the end of the string (represented by the null character). 
//

Yes, *s_1 and s_1[0] will give the same output. They both refer to the first element of the array s_1. during const char 



