#!/usr/bin/python3
"""Defines the island_perimeter function"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid:
    rid is a list of list of integers:

    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one
    island (or nothing).
    The island doesn’t have “lakes” (water inside that
    isn’t connected to the water around the island).
    """
    perimeter = 0

    for i in range(len(grid) - 1):
        for j in range(len(grid[i]) - 1):
            if grid[i][j] == 0 or i == 0 or j == 0:
                continue

            is_head = grid[i - 1][j] + grid[i + 1][j] + \
                grid[i][j + 1] + grid[i][j - 1] == 1

            if is_head:
                perimeter += 3
            else:
                perimeter += 2

    return perimeter
