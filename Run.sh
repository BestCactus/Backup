#!/bin/bash

echo "Spustim program Run_x " $1
cd /home/cactus/Coding/WorkCERN/ttbar
./bin/Run_x $1
cd -
