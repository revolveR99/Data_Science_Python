def all_thing_is_obj(object: any) -> int:
    # Dictionary mapping types to their corresponding readable names
    type_names = {
        list: "List",     # Maps list type to the string "List"
        tuple: "Tuple",   # Maps tuple type to the string "Tuple"
        set: "Set",       # Maps set type to the string "Set"
        dict: "Dict",     # Maps dict type to the string "Dict"
        str: "String"     # Maps string type to the string "String"
    }

    # Get the actual type of the input object
    object_type = type(object)

    # Use the dictionary to get a readable name for the object type, 
    # or return "Type not found" if the object type isn't in the dictionary
    type_name = type_names.get(object_type, "Type not found")

    # If the object is a string, print a special message indicating the object is in the kitchen
    if object_type == str:
        print(f"{object} is in the kitchen : {object_type}")

    # If the object is a known type from the dictionary, print the type name and the actual type
    elif type_name != "Type not found":
        print(f"{type_name} : {object_type}")

    # If the object type isn't found in the dictionary, print "Type not found"
    else:
        print(f"{type_name}")

    # Return the integer 42 (could be used as a fixed return value for other purposes)
    return 42
