; -------------------------------------------------------------------------
; creates a fli4l-netbootimage                                 __FLI4LVER__
;
; Creation: lanspezi 2005-04-04
; $Id: mknetboot.au3 11314 2006-04-07 09:59:11Z jw5 $
; -------------------------------------------------------------------------
#include-once

Func mknetboot ()
    msg_lang_read ("mknetboot")
    fli4lbuild_errmsg ($MSG_07_mld1 & @CRLF & $MSG_07_mld2,1)
    $bool_error = "true"
    exit_fli4l_build ()
EndFunc
