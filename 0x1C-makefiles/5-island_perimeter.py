#!/usr/bin/python3
"""Define the perimeter of the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    widthLen = len(grid[0])
    heightLen = len(grid)
    size = 0
    edge = 0

    for i in range(heightLen):
        for n in range(widthLen):
            if grid[i][n] == 1:
                size += 1
                if (n > 0 and grid[i][n - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][n] == 1):
                    edge += 1
    return size * 4 - edge * 2
