#!/usr/bin/python3
"""island_perimeter(grid) function module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    h = len(grid)
    w = len(grid[0])
    s = 0
    e = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return ((s * 4) - (e * 2))
