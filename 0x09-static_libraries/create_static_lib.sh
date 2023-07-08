#!/bin/bash
files=$(ls *.c)
ar -rcs liball.a $files