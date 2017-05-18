@echo off
ntsd -c q -pn AnyTimeSrv.exe
del /f /s /q "C:\Program Files\YZinfo\DMT 9.0 3D版\AnytimeSrv.exe"
ntsd -c q -pn AdskScSrv.exe
del /f /s /q "C:\Program Files\Common Files\Autodesk Shared\Service\AdskScSrv.exe"
ntsd -c q -pn raysat_3dsMax2009_32server.exe
del /f /s /q "C:\Program Files\Autodesk\3ds Max 2009\mentalray\satellite\raysat_3dsMax2009_32server.exe"
ntsd -c q -pn ICCAgent.exe
Echo 恭喜你已摆脱老师控制！
pause
