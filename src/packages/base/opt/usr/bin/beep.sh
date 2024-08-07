#!/bin/sh
#--------------------------------------------------------------------
# /usr/local/bin/beep.sh - send beep to console
#
# Creation:    2006-08-28 hh
# Last Update: $Id: beep.sh 51847 2018-03-06 14:55:07Z kristov $
#--------------------------------------------------------------------
echo -e '\007\c' > /dev/console
( for b in $(echo "$@" | sed -r 's/(^| )(([^-]|-[^n])[^ ]*)\>//g')
do
    sleep 1
    echo -e '\007\c' > /dev/console
done ) &
