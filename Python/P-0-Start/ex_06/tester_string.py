from ft_filter import ft_filter  # Import the custom filter function

# Function to test multiple cases for the ft_filter function
def test_filter():
    # Define a list of test cases where each case contains:
    # 1. A string of words (text)
    # 2. An integer (n)
    # 3. The expected result (a list of words longer than n)
    test_cases = [
        ("Hello World", 4, ["Hello", "World"]),  # Test case 1
        ("Python is fun", 2, ["Python", "fun"]),  # Test case 2
        ("", 0, []),  # Test case 3, empty string input
        ("abc def ghi", 1, ["abc", "def", "ghi"]),  # Test case 4
        ("One Two Three", 4, ["Three"]),  # Test case 5
        ("Zero Nani Three", 5, []),  # Test case 6, no words longer than 5 characters
    ]
    
    # Counter to track how many tests passed
    passed_tests = 0
    
    # Loop through each test case
    for text, n, expected_result in test_cases:
        # Filter words that are longer than the integer n
        filtered_words = list(ft_filter(lambda word: len(word) > n, text.split()))
        
        # Check if the result matches the expected output
        if filtered_words == expected_result:
            passed_tests += 1  # Increment the count of passed tests
            print("\033[32m       ok\033[0m")  # Print "ok" in green if the test passed
        else:
            # Print a failure message in red if the test failed
            print("\033[31mTest failed for input '{}', {}: Expected {}, got {}\033[0m"
                  .format(text, n, expected_result, filtered_words))
    
    # After all tests, print how many tests passed out of the total number of test cases
    print("\033[32m{} out of {} tests passed\033[0m"
          .format(passed_tests, len(test_cases)))

# Entry point: Run the test_filter function if the script is executed directly
if __name__ == "__main__":
    test_filter()
