# get_next_line_1337cursis
The project is about a function returns a line read from a file descriptor
------------------------------------------------------------------------
***what you should learn about to get to the project:***
- File descriptor.
- System calls (`read`, `write`, `open`, `close`).
- Static variable.

------------------------------------------------------------------------

***Functions used:***

**<a href="https://github.com/UNES01/get_next_line_1337cursis/blob/main/get_next_line.c">get_next_line.c</a>/<a href="https://github.com/UNES01/get_next_line_1337cursis/blob/main/get_next_line_bonus.c">get_next_line_bonus.c:</a>**<br><br>
*`line_check()`* : the function check if there is a new line or not:<br>
	                -if it is exist it should return the index value (the index which the \n found).<br>
	                -if not it should return a negative value (-1 in that case).<br>
*`print_line()`* : the function checks if there is a \n or not with `line_check()`, if it's exist it returns the 1st line till the \n, and next time from the \n till the end of file of another new line if it's exist, and that's on..<br>
*`_free()`* : this function helps to free the string and its copy which we put the line we return from the previous function, and set them to NULL.<br>
*`get_next_line()`* : is the project main function where we check the BUFFER_SIZE and read from the fd based on it..<br><br>

**<a href="https://github.com/UNES01/get_next_line_1337cursis/blob/main/get_next_line_utils.c">get_next_line_utils.c</a>/<a href="https://github.com/UNES01/get_next_line_1337cursis/blob/main/get_next_line_utils_bonus.c">get_next_line_utils_bonus.c:</a>**<br><br>
*`ft_strlen()`* : is a function does the same behavior as `strlen()` from string.h which is count the length of the string given as parameter.<br>
*`ft_substr()`* : returns a sub string from the one given as parameter. <br>
*`ft_strjoin()`* : it concatenate the two strings given as parameters.

-------------------------------------------------------------------------

***Bonus part:***

The bonu part is the same as the mandatory; the little deffirence is that the bonus part can manage multiple file descriptors at the same time.
For example, if you can read from the file descriptors 3, 4 and 5, you should be
able to read from a different fd per call without losing the reading thread of each
file descriptor or returning a line from another fd.
It means that you should be able to call get_next_line() to read from fd 3, then
fd 4, then 5, then once again 3, once again 4, and so forth.
