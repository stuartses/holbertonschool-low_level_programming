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
            zone_p = 4
            lonely = 0

            if grid[i - 1][j] == 1:
                zone_p -= 1
            else:
                lonely += 1

            if grid[i][j - 1] == 1:
                zone_p -= 1
            else:
                lonely += 1

            if grid[i][j + 1] == 1:
                zone_p -= 1
            else:
                lonely += 1

            if grid[i + 1][j] == 1:
                zone_p -= 1
            else:
                lonely += 1

            # verify if is a lonely island
            if grid[i][j] == 1 and lonely == 4:
                return 0

            # verify if is a lake
            if grid[i][j] == 0 and zone_p == 0:
                return 0

            # if is a unique island
            if grid[i][j] == 1:
                perimeter += zone_p

    return perimeter
