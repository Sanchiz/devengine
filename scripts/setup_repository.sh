#!/bin/bash
cd $1
git init
cd $2
git init
git remote add origin $1
git pull -u origin master
cd $3
git init
git remote add origin $2
git pull -u origin master
