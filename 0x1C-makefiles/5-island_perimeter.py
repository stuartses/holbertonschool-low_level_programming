#!/usr/bin/python3

"""Module Island Perimeter

Return the perimeter of a Island.
"""


def island_perimeter(grid):
    """Return the perimeter of a island of 1
    Each cell or zone of 1 has a perimeter of 4
    The perimeter of each zone decrements when has adjacent zones with 1

    Args:
        grid (int): matrix of integers
    Return:
        perimeter (int): the perimeter of complete island
    """

    perimeter = 0

    # grid is always rectangular, same numbers of columns
    n = len(grid)     # number of rows
    m = len(grid[0])  # number of columns

    # the extrem col and rows are always zero
    for i in range(1, n - 1):
        for j in range(1, m - 1):
            if grid[i][j] == 1:
                zone_p = 4
                if grid[i - 1][j] == 1:
                    zone_p -= 1
                if grid[i][j - 1] == 1:
                    zone_p -= 1
                if grid[i][j + 1] == 1:
                    zone_p -= 1
                if grid[i + 1][j] == 1:
                    zone_p -= 1

                perimeter += zone_p

    return perimeter
