#!/bin/bash

#Get the basics
sudo apt update
sudo apt upgrade -y
sudo apt install curl vim build-essentials gnome-tweaks git -y

#Install Volta (volta.sh)
curl https://get.volta.sh | bash

# Install node using volta from the absolute path
$HOME/.volta/bin/volta install node@lts





