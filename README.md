# Programmer-Reconfigurable Inline Native Trace GDB (printGDB)

printGDB is a novel debugger that addresses all problems with every other debugger. Most debuggers fail to meet the needs of our programmers. In particular, most debuggers present two problems. 1) Users must memorize a list of arcane commands in order to make use of terminal-based debuggers such as GDB. Users must overcome a significant learning curve before controlling the debugger feels intuitive. 2) The way in which the debugger displays values offers very little flexibility. In many cases, we may want to customize the format of the output of structured data, perhaps using tables or ascii art.

printGDB addresses both of these challenges. For challenge (1), printGDB debugger does away with obscure commands and keywords. Instead, the programmer can use C/C++ syntax to direct the behavior of the debugger. By leveraging programmers' pre-existing familiarity with C/C++, it becomes easy for them to use the debugger. For example, with gdb you would set a conditional breakpoint like this:
```
(gdb) condition <breakpoint> <condition>
```
Whereas with printGDB, you can simply use C-style syntax to do:
```
if(<condition>) { <debugger command> }
```
For challenge (2), printGDB allows the user to specify the format of the output, including spacing, ascii art, number formats etc. by providing a simple format template.

My hope is that printGDB will be the next great advancement in programming practice, analogous to the transition from assembly programming to high-level languages. I have released printGDB on github under the open source MIT license.
