#!/bin/sh

str=`ifconfig | grep inet | grep  broadcast | cut -d ' ' -f6`

if [ ! -z "$str" -a "$str" == "" ]; then
    echo "je suis perdu"
else
	echo $str
fi
