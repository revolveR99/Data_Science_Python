import sys  # Import sys module to access command-line arguments


# Function to encode a given text into Morse code
def encode_to_morse(text):
    # Dictionary to map characters to their corresponding Morse code
    morse_code_dict = {
        'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.',
        'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-',
        'L': '.-..', 'M': '--', 'N': '-.', 'O': '---', 'P': '.--.',
        'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-', 'U': '..-', 'V': '...-',
        'W': '.--', 'X': '-..-', 'Y': '-.--', 'Z': '--..', '0': '-----',
        '1': '.----', '2': '..---', '3': '...--', '4': '....-', '5': '.....',
        '6': '-....', '7': '--...', '8': '---..', '9': '----.', ' ': '/',
    }
    
    # List to store the encoded Morse code characters
    morse_text = []
    
    # Loop through each character in the input text (converted to uppercase)
    for char in text.upper():
        # If the character is in the Morse code dictionary, add its corresponding Morse code
        if char in morse_code_dict:
            morse_text.append(morse_code_dict[char])
        else:
            # Raise an error if the character is not supported
            raise AssertionError("Unsupported character: {}".format(char))
    
    # Return the encoded Morse code as a string, with each code separated by a space
    return ' '.join(morse_text)


# Main function to handle input and output
def main():
    try:
        # Check if the number of arguments is exactly 2 and the input is a non-empty string
        if len(sys.argv) != 2 or len(sys.argv[1]) == 0 or not isinstance(sys.argv[1], str):
            # Raise an error if the arguments are invalid
            raise AssertionError("Usage: python3.10 morse_encoder.py <text>")
        
        # Store the input text
        input_text = sys.argv[1]
        
        # Call the encode_to_morse function and store the result
        morse_result = encode_to_morse(input_text)
        
        # Print the Morse code result
        print(morse_result)
    
    except AssertionError as error:
        # If an error occurs, print the error message
        print(error)


# Entry point: Run the main function if the script is executed directly
if __name__ == "__main__":
    main()
