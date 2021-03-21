# Output guide

## Output_1 - Making the .ko (kernel object) file using the Makefile.

## Output_2 - Inserting the .ko file as a module with a parameter (integer variable) passed.

## Output_3 - Created a device file in the /dev directory with major number 11 and minor number 0. The character device driver also has the major number as 11. Whenever the device file is modified the character device driver's open(), read(), write(), close() functions are called within the module, because the device major number is refered by the driver.

## Output_4 - The passed value is shown in the log along with statements indicating that the open(), and read() function has been called. This is because within the terminal "! cat /dev/ex6_device_file" has been called. And cat opens and reads a file. Thus the driver executes it's own read() and open() functions defined.