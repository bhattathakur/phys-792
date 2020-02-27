#!/bin/bash
echo "# phys-792 This directory contains different files related to Phys-792 taught by Prof. Jing Liu." >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/bhattathakur/phys-792.git
git push -u origin master
echo "successful"
echo "Want to learn the behaviour of git branching in this aspect"
echo "Even want to know more about the behaviour of the git in the branch branch1"

