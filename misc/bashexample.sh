#!/bin/bash
#This tells where to find program to run bash 
#Following two forms gives the same result but second is faster than the first
#cat /tmp/myfile | grep "mystring"
#grep "mystring" /tmp/myfile
#external program "expr" expects a number
#"read" takes an input from the user
#We need to "export" the variable for it to be inherited by another program - including a shell script
echo "What is your name?"
read name
echo "Welcome $name"
