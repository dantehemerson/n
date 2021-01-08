#!/bin/bash

if test -f yarn.lock
then
  echo "yarn $@"
  yarn $@

elif test -f package-lock.json
then
  echo "npm $@"
  npm $@

else
  echo "Package Manager file not found"
  exit 1

fi


