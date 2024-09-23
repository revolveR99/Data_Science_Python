import sys  # Import the sys module to handle command-line arguments

# Function to analyze a given text and print various statistics about it
def analyze_text(text):
    """
    text (input string): The text to analyze

    Prints the following information:
    1. The number of characters in the text
    2. The number of upper case letters
    3. The number of lower case letters
    4. The number of punctuation marks
    5. The number of spaces
    6. The number of digits
    """
    # Count the total number of characters in the text
    total_chars = len(text)

    # Count the number of upper case letters
    upper_count = sum(1 for char in text if char.isupper())

    # Count the number of lower case letters
    lower_count = sum(1 for char in text if char.islower())

    # Define the punctuation characters
    punctuation_characters = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"

    # Count the number of punctuation marks
    punctuation_cnt = sum(1 for char in text if char in punctuation_characters)

    # Count the number of spaces
    space_count = sum(1 for char in text if char.isspace())

    # Count the number of digits
    digit_count = sum(1 for char in text if char.isdigit())

    # Print the collected information
    print(f"The text contains {total_chars} characters:")
    print(f"{upper_count} upper letters")
    print(f"{lower_count} lower letters")
    print(f"{punctuation_cnt} punctuation marks")
    print(f"{space_count} spaces")
    print(f"{digit_count} digits")


# Main function to handle input and call the text analysis
def main():
    """
    Analyzes the given text and prints information about its character composition.

    Asks for input if no argument is given:

    raises AssertionError: Too many arguments provided
    """
    try:
        # If no command-line argument is provided, prompt the user for input
        if len(sys.argv) < 2:
            try:
                # Get text input from the user and append a newline character
                s = input("What is the text to count?\n")
                s += "\n"
            except EOFError:
                pass

        # If one argument is provided, use that as the input text
        elif len(sys.argv) == 2:
            s = sys.argv[1]

        # If more than one argument is provided, raise an error
        elif len(sys.argv) > 2:
            raise AssertionError("Too many arguments provided")

        # Analyze the provided text
        analyze_text(s)

    # Handle AssertionError if too many arguments were provided
    except AssertionError as error:
        print(AssertionError.__name__ + ":", error)


# Run the main function if the script is executed directly
if __name__ == "__main__":
    main()
