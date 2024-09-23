import sys  # Import sys to access command-line arguments
from ft_filter import ft_filter  # Import custom filter function

def main():
    """
    Accepts only 2 arguments:
    1. string
    2. integer

    Returns a list of words that are longer than the integer.
    """
    try:
        # Check if exactly 2 arguments are provided (excluding the script name)
        if len(sys.argv) != 3:
            raise AssertionError("Exactly two arguments (string and integer) are required.")

        # Extract the string (first argument) and the integer (second argument)
        text = sys.argv[1]
        n = int(sys.argv[2])

        # Check if the types of the arguments are correct
        if not isinstance(text, str) or not isinstance(n, int):
            raise AssertionError("Invalid argument types.")

        # Filter the words longer than the integer using a lambda function
        filtered_words = list(ft_filter(lambda word: len(word) > n, text.split()))

        # Print the filtered list of words
        print(filtered_words)

    # Catch ValueError (raised when converting the second argument to an integer)
    except ValueError as error:
        print("ValueError:", error)
    
    # Catch AssertionError (for incorrect number of arguments or wrong argument types)
    except AssertionError as error:
        print("AssertionError:", error)

# Entry point for the program when executed directly
if __name__ == "__main__":
    main()
