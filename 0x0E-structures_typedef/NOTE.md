What is a struct?

	A kind of object that holds other objects / data. In a contigious block of memory.
	When an already defined struct is called / declared: Its sub objects are automatically created, so its left
	for the programmer to initiallize the subobjects to values they want. Subobjects may be of int, char, ptr etc type.

	declaring and initiallizing a struct (after it has already been defined) is quite easy and straight forward for a single
	to few new objects of the struct. However, it would be extremely difficult to do so for many objects of the same struct
	hence to do that a function may be required to automatically create new objects of the struct by passing arguments to 
	initiallize its members appropriately. These function will require the use of pointers.

Why use pointers to struct?

	This is necessary if there is need to use a function to create new objects of type struct in cases where many 
	objects will be created. The struct will be used as the function return type (ptr type), a ptr to the type struct 
	will be created in the function,
	creating adequate memory for the struct by using <sizeof(struct)>, initiallizing all or relevant members (made possible by
	dereferencing the ptr which will dereference to the object of type struct hence having its members just like in declaring
	a new object of type struct) and then returning the ptr to the fucttion caller (a pointer to struct also). 
	Its values can be accessed by dereferencing the receiving r_ptr by either of 2 ways (*r_ptr).member or r_ptr->member.


Why do you have to create values of a struct of its own?
	
	Beacuse if those values are of another variable, if those values are destroyed or the variable by say exiting
		a function it is created in, your struct cannot access value assigned to it anylonger
			eg a struct with a *name pointing to an array in a function, when that function exits or resturns the
			array is destroyed in which case your struct is now pointing to an empty address or address filled with
			gabbage.
