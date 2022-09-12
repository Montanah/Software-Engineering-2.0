cd $HOME
cd
clear
mkdir zero_day
cd zero_day
git init
rm -r zero_day
cd ../
rm -r zero_day
clear
cd ../
sudo apt-get install virtualbox
clear
sudo apt-get update
sudo apt-get install git
clear
cd
mkdir zero_day
cd zero_day
git init
git remote add origin https://github.com/Montanah/zero_day.git
emacs README.md
vi README.md
git add .
git commit -m 'My first commit'
git config --global user.email 'mititi.isaac@gmail.com'
git config --global user.name 'Montanah'
git add .
git commit -m 'My first commit'
git push
git add .
git commit -m 'My first commit'
git push 
clear
exit
git --version
git config --global user.email 'mititi.isaac@gmail.com'
git config --global user.name 'Montanah'
mkdir zero_day
cd zero_day
git init
mkdir 0x00-vagrant
cd 0x00-vagrant
echo 'Vagrant task 1 readme' > README.md
echo 'Linux' > 0-hello_ubuntu
git add .
git commit -m 'First vagrant commit'
git push 
git config --global push.default simple
git push 
git push --set-upstream origin master
exit
ls
rm -r zero_day
