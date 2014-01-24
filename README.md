Makefile
========

Makefile and Architecture of my project in C or CPP

List of commands:
-----------------

all: compile project

clean: remove tempory .o and obj/ folder

fclean: call clean and remove program

re: call fclean then all

buildrepo: create obj/ and obj's subfolders

debug: switch from normal to debug mode or the other way around then call re

git: call fclean, prompt for commit message and commit versioned files


known issues:
-------------

doesnt display correctly in ubuntu
