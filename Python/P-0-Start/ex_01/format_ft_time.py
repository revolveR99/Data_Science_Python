import time
import locale
import datetime

# Set locale to the user's default setting so that numbers use the appropriate format
# This includes using a comma as a thousands separator if it's part of the locale.
locale.setlocale(locale.LC_ALL, '')

# Get the current time as a floating-point number representing seconds since January 1, 1970
current_time = time.time()

# Format the current time with 4 decimal places, and group by thousands (if applicable in the locale)
formatted_current_time = locale.format_string("%.4f", current_time, grouping=True)

# Get the current date using the `datetime` module
current_date = datetime.date.today()

# Print the number of seconds since January 1, 1970, in both regular format and scientific notation
print(f"Seconds since January 1, 1970: {formatted_current_time} or {current_time:.2e} in scientific notation")

# Print the current date in the default format (YYYY-MM-DD)
print(f"{current_date}")

# Print the current date with the month as a full name, followed by day and year (e.g., September 23 2024)
print(f"{current_date.strftime('%B')} {current_date.day} {current_date.year}")

# Print the current date in abbreviated format (e.g., Sep 23 2024)
print(f"{current_date.strftime('%b %d %Y')}")
