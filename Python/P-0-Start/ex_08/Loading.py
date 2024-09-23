import time  # Import time module to handle timing functions
import shutil  # Import shutil to get the terminal size


def format_time(seconds):
    """
    Convert the time in seconds to a formatted string (MM:SS).

    Args:
        seconds (float): Time in seconds.

    Returns:
        str: Time in MM:SS format.
    """
    m, s = divmod(seconds, 60)  # Divide seconds into minutes and seconds
    return f"{int(m):02d}:{int(s):02d}"  # Format minutes and seconds as 2-digit numbers


def ft_tqdm(lst: range) -> None:
    """
    Simulate a progress bar for iterating through a range, similar to tqdm.

    Args:
        lst (range): A range of numbers to iterate over.

    Yields:
        Any: The current item in the range is yielded.
        This allows for use in loops, just like a generator.
    """
    total = len(lst)  # Get the total number of items in the range
    start_time = time.time()  # Record the start time of the iteration

    # Get terminal width and adjust progress bar size
    terminal_width = shutil.get_terminal_size().columns - 30  # Reduce for time and info space
    progress_bar_width = terminal_width - 10  # Leave space for percentage

    # Loop over the range with an index (i) starting from 1
    for i, item in enumerate(lst, start=1):
        progress = int(i / total * progress_bar_width)  # Calculate progress as a fraction of total
        elapsed_time = time.time() - start_time  # Calculate elapsed time
        speed = i / elapsed_time  # Calculate speed in iterations per second
        eta = (total - i) / speed  # Estimate time remaining (ETA)

        # Format elapsed time and ETA into MM:SS
        elapsed_formatted = format_time(elapsed_time)
        eta_formatted = format_time(eta)

        # Create the progress bar (fill it according to progress)
        progress_bar = f"|{'█' * progress:<{progress_bar_width}}|"
        # Calculate percentage of progress
        progress_percentage = progress * 100 // progress_bar_width
        # Create progress information (percentage, current item, and total)
        progress_info = f"{progress_percentage}%{progress_bar} {i}/{total}"
        # Create time info (elapsed time, ETA, and speed)
        time_info = f"[{elapsed_formatted}<{eta_formatted}, {speed:.2f}it/s]"

        # Print progress bar and info on the same line, updating in place with '\r'
        print(f"\r{progress_info} {time_info}", end="", flush=True)

        # Yield the current item, allowing for iteration over it
        yield item


def main():
    """
    Main function to test the ft_tqdm function with a range.
    """
    # Run a loop over the progress bar for the range from 0 to 333
    for _ in ft_tqdm(range(0, 333)):
        pass  # No operation is needed, just to show the progress bar


if __name__ == "__main__":
    main()  # Call the main function if the script is executed directly
