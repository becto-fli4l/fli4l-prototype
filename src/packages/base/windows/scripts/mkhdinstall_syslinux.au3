; -------------------------------------------------------------------------
; call syslinux for the pre HD-Install                         __FLI4LVER__
;
; Creation: lanspezi 2008-08-14
; $Id: mkhdinstall_syslinux.au3 52030 2018-03-13 14:03:39Z lanspezi $
; -------------------------------------------------------------------------
#include-once
#RequireAdmin

$drive_hdinstall = $CmdLine[1]

If UBound ($CmdLine) > 2 Then
    $syslinux_option = $CmdLine[2]
Else
    $syslinux_option = ""
EndIf

If @OSArch = "X64" Then
    $val = RunWait ("opt\img\syslinux\syslinux64.exe " & $syslinux_option & " " & $drive_hdinstall, @WorkingDir, @SW_HIDE)
Else
    $val = RunWait ("opt\img\syslinux\syslinux.exe " & $syslinux_option & " " & $drive_hdinstall, @WorkingDir, @SW_HIDE)
EndIf

Exit $val
