# Project3
Summarize the project and what problem it was solving.
  The project goal was to recieve input from a file about the items that were sold at the grocery store. Each item was a line in a text file. The data would be accessed by the program and would calculate the number of times each item was sold. A menu display enables the user to search for an item by name, see a list of all items sold with frequency number, or see a histogram displaying all of the items sold.
What did you do particularly well?
  I think I had a clear seperation of functions. I kept main for calling functions, and dealing with opening and closing files, and there associated error messages. Once the mainMenu class is called, there is no return to main until the program ends.
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
  Im sure my code could be streamlined to work in a more efficient way in terms of a computing power or memory way. While i did use that map strutcute, I didnt put any more thought or consideration into memory or anything like that after that. 
Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
  The most challenging part was debugging. It took me a while to figure out the my MainMenu class did not have access to the Grocery class, so it had no ability to print the Grocery items list. The code still compiled, and when i selected options 2 or 3 from the main menu, it would just display the main menu again and not throw any errors. 
What skills from this project will be particularly transferable to other projects or course work?
  I think the overall sturcturing of the code would be useful for projects in the future. Being able to create different objects and access them through other classes seems like it will be a useful skill to have. 
How did you make this program maintainable, readable, and adaptable?
  I tried to accomplish those goals in this program by clearly seperating classes and functions to keep the main code bloack as clean as possible. If the program were to scale up, I would probably add more functions for opening, writing, and closing files
