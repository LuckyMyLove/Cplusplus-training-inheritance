### C ++ training (inheritance)

# The content of the task:

* The Line, Square and Cuboid class inherit from the Figure class.


* Create the Line class object:
default (side length: 0)
parameterized (provide user)


* Create two objects of the Square class:
default (side length: {0,0})
parameterized (provide user)


* Create two objects of the Cuboid class:
default (side length: {0,0,0}
parameterized (provide user)


* Display information on each of the six digits: 
length of sides, field, volume - if it exists for similar dimensions

* remove parameterized objects.

* Modify the lengths of the sides of various figures compared to the computer's memory.

* Showing information.

* Create tables 3 figurines - parameterized:
table [0] - Line (5)
table [1] - Square (5.5)
table [2] - Cuboid (5.5,5)

* Display information about each of the objects.
Remove comprehensive facilities.


# Implementation of:
class: Figure (abstract),
name (class name),
dimension (1D, 2D, 3D),
sides length (table)

* class: Line
1D,
constructors,
methods:
Perimeter

* class: Square
2D,
constructors,
methods:
Perimeter,
Field

* class: Cuboid
3D,
constructors,
methods:
Perimeter,
Field,
Volume
