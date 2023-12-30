#!/bin/bash
clear
sudo cp *.py /bin/
echo "alias fix='python3 /bin/betty_fixer.py'" >> ~/.bashrc
echo "Ready to use the spectacular Betty Fixer ..."
echo "Created by MoeAlsir"