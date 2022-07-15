#!/usr/bin/python3
"""Island perimeter module"""


def island_perimeter(grid):
    """Return the perimeter of the island in grid"""
    value = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    value += 1
                if j == 0 or grid[i][j - 1] == 0:
                    value += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    value += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    value += 1
    return value
