#!/bin/sh
#------------------------------------------------------------------------------
# syslogd_rotate_cron
#
# Creation:     2009-02-16 LanSpezi
# Last Update:  $Id: syslogd_rotate_cron.sh 51847 2018-03-06 14:55:07Z kristov $
#------------------------------------------------------------------------------

day_old=`date "+%j"`
while [ true ]
do
    day_akt=`date "+%j"`
    if [ $day_old != $day_akt ]
    then
        day_old=$day_akt
        /usr/local/bin/syslogd_rotate.sh
    fi
    sleep 60
done
