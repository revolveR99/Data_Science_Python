import sys  # Import the sys module to access command-line arguments

# Function to check if a number is odd or even
def check_odd_or_even(number):
    # If the number is divisible by 2, it's even
    if number % 2 == 0:
        return "I'm Even."
    # Otherwise, it's odd
    else:
        return "I'm Odd."

try:
    try:
        # Check if there is at least one command-line argument (excluding the script name)
        if len(sys.argv) < 2:
            exit()  # Exit the program if no argument is provided

        # Convert the first command-line argument to an integer
        number = int(sys.argv[1])
    except ValueError:
        # Raise an AssertionError if the provided argument is not a valid integer
        raise AssertionError("Argument is not an integer")

    # Check if exactly one argument (excluding the script name) is provided
    if len(sys.argv) != 2:
        raise AssertionError("Incorrect number of arguments")

    # Call the function to check if the number is odd or even
    result = check_odd_or_even(number)

    # Print the result ("I'm Even." or "I'm Odd.")
    print(result)

# Catch any AssertionError and print its message
except AssertionError as error:
    # Print the error type and the specific error message
    print(AssertionError.__name__ + ":", error)
