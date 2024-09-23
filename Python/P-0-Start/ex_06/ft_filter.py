def ft_filter(function, iterable):
    """
    filter(function or None, iterable) --> filter object
    Return an iterator yielding those items of iterable for which function(item)
    is true. If function is None, return the items that are true.
    """
    
    # If a function is provided (not None), use it to filter the iterable
    if function:
        # Return a generator expression that yields items for which the function returns True
        return (item for item in iterable if function(item))
    
    # If no function is provided (function is None), return only the truthy items in the iterable
    return (item for item in iterable if item)
