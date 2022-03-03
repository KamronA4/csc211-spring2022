## Mini Programming Challenge #04 (Due Date 03/12)

This mini-challenge is about getting you comfortable with the autograder and basic C++ arethmatic operations. **Arrays, functions, and loops are not allowed. The only libraries allowed for this assignment are `<iostream>` and `<iomanip>`**.  Mini-challenge problemsets are to be completed individually. You are not allowed to share your code with other students. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.

> If you need to post any of your actual source code on Piazza for any reason, **please** be sure to tag the post as being _visible to instructors only_, so that you don't inadvertently share code with others and violate class rules.

### Format details
Your submission will be tested and graded by an autograder, for this reason it cannot be stressed enough that your program must exactly follow the specifications for input and output upon submission.

If the question specifies that it will take a `double` then a `char` you must follow this input order or else fail the test.  For this assignment, you should use the `int` data type for regular whole numbers and as the default when a number format is not specified, you should use the `double` data type for any question which specifies decimal or floating point numbers, and `char` for single letter variables or input.

The output will always be some form of string printed out on a single line. It will always begin on a new line and end with some form of newline character; either `std::endl` or `'\n'`.  Whenever printing a `double` you should always have exactly 4 decimal places; if your decimal number is `3.1415926534`, you should print it as `3.1416`. If your number is `0.0` or `0`, it should print as `0.0000`. You can use `<iomanip>` to accomplish this.

For details on expected submission instructions, please refer to the **Submission and Grading** section at the bottom of the document.


1. *Date converter*. Prompt the user for three integers representing their birthday in the order `<month> <day> <year>`. Print the given date as a string on a single line in the following format: `<month name> <day>, <year>`. `10 3 1997` should output `October 3, 1997`, `1` `1` `2000` should output `January 1, 2000` etc. If a month does not exist, print out `Imaginary month`.

2. *Smallest number*. This program should prompt the user for three integer values, and determine which number is the smallest. The output string should be formatted as follows: `The smallest number entered was <number>`.

3. *Which quadrant*. In mathematics, 2-dimensional cartesian systems can be segmented into four quadrants, depending on whether `x` and `y` are positive and negative. For example, (1.0,1.0) falls in `Quadrant 1`. This program should take an `x` and `y` coordinate from the user in that order, then output which quadrant that point falls into, in the format: `Quadrant 1`, `Quadrant 2` etc. If the point falls on the `x-axis` or the `y-axis`, print `No quadrant`. Use `double` for the coordinate points in this problem.

4. *Is it cold out?* A student from Rhode Island is visiting Germany but doesn't understand Celsius very well. They want to be able to tell whether it is cold out or not without going outside, so they write a program to tell them how cold it is. This program should take a `decimal` number representing Celsius as input and determine its Fahrenheit equivalent. If the F temperature is less than or equal to 32 degrees, the program should print `It is cold out`, if the temp is (32, 65], the program should print `Wear a jacket`, if it is above 65, print `It is nice out`.

### Submission and Grading
You will submit a single _zip file_ named `mc4.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
