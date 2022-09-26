/*

C Programming: A Modern Approach (Second Edition)
Chapter 8, Exercise 6, Page 177

PRIESTLEY FOMECHE
27TH AUGUST 2022

Q:  Calculators, watches and other electronic devices often rely on seven-segment displays for numerical output. To form a digit, such devices
    "turn on" some of the seven segments while leaving others "off":

     _        _    _         _    _    _    _    _
    | |   |   _|   _|  |_|  |_   |_     |  |_|  |_|
    |_|   |  |_    _|    |   _|  |_|    |  |_|   _|

    Suppose that we want to set up an array that remembers which segments should be "on" for each digit. Let's number the segments as follows:

    ...

    Here's what the array might look like, with each row representing one digit:

    const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};

    I've given you the first row of the initializer; fill in the rest.


A:  const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                                 {0, 1, 1, 0, 0, 0, 0},
                                 {1, 1 ,0, 1, 1, 0, 1},
                                 {1, 1, 1, 1, 0, 0, 1},
                                 {0, 1, 1, 0, 0, 1, 1},
                                 {1, 0, 1, 1, 0, 1, 1},
                                 {1, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 0, 0, 0, 0},
                                 {1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 1, 1}};


*/