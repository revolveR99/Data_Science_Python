#!/bin/bash
find . \( -type f -o -type d \) | wc -l | tr -d " "
#find . -type f  -o -type d | wc -l | awk '{print $1}'
