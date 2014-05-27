#!/bin/bash
cd $1
git init
touch test
git add .
git commit -m "Initial commit."
cd $2
git init
git remote add origin $1
git pull origin master
cd $3
git init
git remote add origin $2
git pull origin master
