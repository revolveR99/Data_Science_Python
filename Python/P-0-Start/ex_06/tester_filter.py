from ft_filter import ft_filter  # Import the custom filter function

# Function to check if a number is even
def is_even(num):
    return num % 2 == 0

# Function to run various test cases for the ft_filter function
def test_filter():
    # Define a list of numbers
    numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    
    # Define a list of strings
    strings = ["apple", "banana", "cherry", "date", "elderberry"]
    
    # Define a list with mixed types (integers, strings, floats)
    mixed_types = [1, "apple", 2.5, "banana", 3, "cherry", 4.7]

    # Test 1: Filter even numbers from the list of numbers
    even_numbers = ft_filter(is_even, numbers)
    assert list(even_numbers) == [2, 4, 6, 8, 10], \
        "\033[31mTest 1 failed\033[0m"  # Red color message if the test fails
    print("\033[32m       ok\033[0m")  # Green color message if the test passes

    # Test 2: Filter odd numbers using a lambda function
    odd_numbers = ft_filter(lambda x: x % 2 != 0, numbers)
    assert list(odd_numbers) == [1, 3, 5, 7, 9], "\033[31mTest 2 failed\033[0m"
    print("\033[32m       ok\033[0m")

    # Test 3: Filter numbers greater than 5
    greater_than_5 = ft_filter(lambda x: x > 5, numbers)
    assert list(greater_than_5) == [6, 7, 8, 9, 10], \
        "\033[31mTest 3 failed\033[0m"
    print("\033[32m       ok\033[0m")

    # Test 4: Filter strings that have a length greater than 5
    long_strings = ft_filter(lambda s: len(s) > 5, strings)
    assert list(long_strings) == ["banana", "cherry", "elderberry"], \
        "\033[31mTest 4 failed\033[0m"
    print("\033[32m       ok\033[0m")

    # Test 5: Filter integers from the mixed types list
    integers = ft_filter(lambda x: isinstance(x, int), mixed_types)
    assert list(integers) == [1, 3], "\033[31mTest 5 failed\033[0m"
    print("\033[32m       ok\033[0m")

    # Test 6: Filter floats from the mixed types list
    floats = ft_filter(lambda x: isinstance(x, float), mixed_types)
    assert list(floats) == [2.5, 4.7], "\033[31mTest 6 failed\033[0m"
    print("\033[32m       ok\033[0m")

    # If all tests pass, print a success message
    print("\033[32mAll tests passed\033[0m")

# Run the test cases
test_filter()
