import subprocess  # Import subprocess module to run external commands


# Function to test the morse encoder by running the script and checking the output
def test_morse_encoder(input_text, expected_output):
    try:
        # Run the 'sos.py' script with input_text using Python 3.10
        # Capture the output and any errors
        output = subprocess.check_output(
            ["python3.10", "sos.py", input_text],  # Command and arguments
            stderr=subprocess.STDOUT,  # Capture stderr with stdout
            text=True  # Return the output as a string (text mode)
        )
        
        # Check if the output matches the expected output (strip removes extra spaces/newlines)
        assert output.strip() == expected_output.strip()
        
        # Print success message if test passes
        print(f"Test passed: Input: '{input_text}'")
        print(f"Expected: '{expected_output}', \nOutput: '{output.strip()}'\n")
    
    # Handle errors that occur if the subprocess fails
    except subprocess.CalledProcessError as e:
        # Print failure message and error details if the test fails
        print(f"Test failed: Input: '{input_text}'")
        print(f"Expected: '{expected_output}', \nError: {e.output.strip()}\n")


# Main entry point of the script
if __name__ == "__main__":
    # List of test cases (input text and expected output)
    test_cases = [
        ("Hello World", ".... . .-.. .-.. --- / .-- --- .-. .-.. -.."),  # Test normal sentence
        ("123", ".---- ..--- ...--"),  # Test numbers
        ("Python", ".--. -.-- - .... --- -. "),  # Test a single word
        ("%", "Unsupported character: %"),  # Test unsupported character
        ("Hello?123", "Unsupported character: ?"),  # Test mixed text with unsupported character
        ("   ", "/ / /"),  # Test spaces
        ("", "Usage: python3.10 morse_encoder.py <text>"),  # Test empty input (incorrect usage)
    ]
    
    passed_tests = 0  # Initialize counter for passed tests

    # Loop through each test case
    for input_text, expected_output in test_cases:
        # Call the test function for each case
        test_morse_encoder(input_text, expected_output)
        
        # Print success indicator for each test
        print("\033[32m       ok\033[0m")
        
        # Increment the counter for passed tests
        passed_tests += 1

    # Print the total number of passed tests at the end
    print("\033[32m{} out of {} tests passed\033[0m".format(passed_tests, len(test_cases)))
