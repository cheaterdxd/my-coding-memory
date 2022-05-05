set projectName=%1
if %2==r (
    C:\masm32\bin\ml /c /Zd /coff %projectName%.asm
    C:\masm32\bin\Link /SUBSYSTEM:CONSOLE %projectName%.obj
    %projectName%.exe
) else (
    C:\masm32\bin\ml /c /Zd /coff %projectName%.asm
    C:\masm32\bin\Link /SUBSYSTEM:CONSOLE %projectName%.obj)