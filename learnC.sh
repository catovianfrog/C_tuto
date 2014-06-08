#!/bin/bash

DefPage="ex19"

if [ -n "$1" ] 
then
    Page=$1
else
    Page=$DefPage
fi

URL="http://c.learncodethehardway.org/book/${Page}.html"
firefox "$URL" &>/dev/null &


