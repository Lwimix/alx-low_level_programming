#!/usr/bin/python3
"""
This is island_perimeter
It is a part of technical interview
preparation
"""
def island_perimeter(grid):
    """
    The island_perimeter function
    It calculates the perimeter of an
    island in a grid
    """
    perim = 0
    if grid != None:
        size = 0
        for small_grid in grid:
            for item in small_grid:
                if item == 1:
                    size = size + 1
                elif item != 0 and item != 1:
                    return 0
        if size != 0:
            perim = (size + 1) * 2
    return perim
