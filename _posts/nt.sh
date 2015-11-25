#!/bin/sh
cp plantilla.md "$1"
echo "$1" >> $1
atom  "$1"
git add  "$1"
git commit -m "$1 v1"  "$1"
git push -u origin master
