; -------------------------------------------------------------------------
; creates a fli4l-pxeboot    e                                 __FLI4LVER__
;
; Creation: lanspezi 2005-06-11
; $Id: mkpxeboot.au3 11314 2006-04-07 09:59:11Z jw5 $
; -------------------------------------------------------------------------
#include-once

Func mkpxeboot ()
    msg_lang_read ("mknetboot")
    fli4lbuild_errmsg ($MSG_07_mld1 & @CRLF & $MSG_07_mld2,1)
    $bool_error = "true"
    exit_fli4l_build ()
EndFunc
