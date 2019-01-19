# Print out a date, given year, month, and day as numbers

months = [
    'January',
    'February',
    'March',
    'April',
    'May',
    'June',
    'July',
    'August',
    'September',
    'October',
    'November',
    'December'
]

# A list with one ending for each number from 1 to 31
endings = ['st', 'nd', 'rd'] + 17 * ['th'] \
        + ['st', 'nd', 'rd'] +  7 * ['th'] \
        + ['st']

year=input('Year: ')
month=input('Month(1-12): ')
day=input('Day(1-31): ')

mounth_num=int(month)
day_num=int(day)

month_to_print=months[mounth_num-1]
day_to_print=day+endings[day_num-1]

print(month_to_print+' '+day_to_print+', '+year)
