#!/bin/bash
arr=$(id -Gn $FT_USER)
echo ${arr// /,}