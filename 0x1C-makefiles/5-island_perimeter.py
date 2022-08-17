#!/usr/bin/python3
"""module contains function island_perimeter"""


def island_perimeter(grid):
    """checks for cells in a grid that contains 1
    each cell with 1 is considered land amidst water ie 0s,
    returns the perimeter of on island"""

    prev_row = 0
    next_row = 0
    prev_index = 0
    next_index = 0
    max_row_length = len(grid[0])
    grid_height = len(grid)
    current_index = 0
    row_index = 0
    perimeter = 0
    while row_index < grid_height:
        current_index = 0
        while current_index < max_row_length:
            current = grid[row_index][current_index]
            if current:
                prev_index = current_index - 1
                if prev_index > -1 and not grid[row_index][prev_index]:
                    perimeter += 1
                next_index = current_index + 1
                if next_index < max_row_length and not \
                        grid[row_index][next_index]:
                    perimeter += 1
                prev_row = row_index - 1
                if prev_row > -1 and not grid[prev_row][current_index]:
                    perimeter += 1
                next_row = row_index + 1
                if next_row < grid_height and not \
                        grid[next_row][current_index]:
                    perimeter += 1

                if prev_index < 0:
                    if prev_row < 0:
                        perimeter += 2
                    elif next_row == grid_height:
                        perimeter += 2
                    else:
                        perimeter += 1
                if next_index == max_row_length:
                    if prev_row < 0:
                        perimeter += 2
                    elif next_row == grid_height:
                        perimeter += 2
                    else:
                        perimeter += 1

                if prev_row < 0 or next_row == grid_height:
                    if prev_index > -1 and next_index < max_row_length:
                        perimeter += 1

            current_index += 1
        row_index += 1

    return perimeter
