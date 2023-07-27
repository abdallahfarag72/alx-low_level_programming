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
    row = len(grid)
    col = len(grid[0])
    perimeter = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 0:
                continue

            perimeter += 4
            if i > 0:
                perimeter -= grid[i-1][j]
            if j > 0:
                perimeter -= grid[i][j-1]
            if i < row - 1:
                perimeter -= grid[i+1][j]
            if j < col - 1:
                perimeter -= grid[i][j+1]

    return perimeter
