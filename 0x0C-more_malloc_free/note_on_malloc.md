To create a memory for any type use the char *pointer type: why??

-probably because it occupies 1 byte as such it is a factor for all data type sizes.
-because of the above reason, each byte can be initiallized to a particular value: combintions of which
 can give rise to different values for different data type.. eg a 0 in all bytes will eventually give a
 a zero in all values if it is returned to a pointer of type int.
-can be returned to pointer of any type provided the right size was allocated and such pointer can input
 values peculiar to its type without any problems.
