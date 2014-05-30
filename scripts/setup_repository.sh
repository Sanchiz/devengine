#!/bin/bash

: '
Example of using:

sh setup_repository.sh /opt/git/instance1 /home/vagrant/sites/instance1development /home/vagrant/sites/instance1staging /home/vagrant/sites/instance1production

/opt/git/instance1 - repository without a working directory
/home/vagrant/sites/instance1development - development repository
/home/vagrant/sites/instance1staging - staging repository
/home/vagrant/sites/instance1production - production repository
'

mkdir -p $1
cd $1
git --bare init
cd $2
git init
git config core.fileMode false
touch test
git add .
git commit -m "Initial commit."
git remote add origin $1
git push origin master
cd $3
git init
git config core.fileMode false
git remote add origin $1
git pull origin master
cd $4
git init
git config core.fileMode false
git remote add origin $1
git pull origin master
