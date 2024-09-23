import math

# Helper function to check if a value is NaN (Not a Number)
def isNaN(value):
    return value != value  # NaN is the only value that is not equal to itself

def NULL_not_found(object: any) -> int:
    # Dictionary that maps specific values to their corresponding names
    type_names = {
        None: "Nothing",     # Maps `None` to "Nothing"
        math.nan: "Cheese",  # Maps `math.nan` (Not a Number) to "Cheese"
        '0': "Zero",         # Maps the string '0' to "Zero"
        '': "Empty",         # Maps an empty string to "Empty"
        False: "Fake"        # Maps `False` (boolean) to "Fake"
    }

    # Flag to indicate whether the object type was found in the dictionary
    flag = 0

    # Try to get a human-readable name for the object from the `type_names` dictionary
    type_name = type_names.get(object, "Type not Found")

    # If the object wasn't found in the dictionary, set the flag to 1
    if type_name == "Type not Found":
        flag = 1

    # Check various conditions to identify the type of object and print a corresponding message

    # If the object is `None`, print "Nothing"
    if object is None:
        print(f"Nothing: {object} {type(object)}")

    # If the object is integer 0, print "Zero"
    elif object == 0 and type(object) is int:
        print(f"Zero: {object} {type(object)}")

    # If the object is a float, print "Cheese"
    elif type(object) is float:
        print(f"Cheese: {object} {type(object)}")

    # If the object is an empty string, print "Empty"
    elif object == '':
        print(f"Empty: {object} {type(object)}")

    # If the object is a string and found in the dictionary, print the string's type and its value
    elif type(object) is str and type_name != "Type not Found":
        print(f"{type(object)}: {object}")

    # If the object is `False` and of type boolean, print "Fake"
    elif not object and type(object) is bool:
        print(f"Fake: {object} {type(object)}")

    # If none of the conditions match, print "Type not Found"
    else:
        print("Type not Found")

    # If the object was not found in the dictionary, return 1
    if flag == 1:
        return 1

    # If the object was found in the dictionary, return 0
    return 0
