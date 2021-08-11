//%attributes = {"invisible":true,"shared":true,"preemptive":"capable"}
C_TEXT:C284($0)

$executablePath:=z7_Get_path
$command:=$executablePath

C_BLOB:C604($stdIn; $stdOut; $stdErr)
LAUNCH EXTERNAL PROCESS:C811($command; $stdIn; $stdOut; $stdErr)

$copyright:=BLOB to text:C555($stdOut; Choose:C955(Is macOS:C1572; UTF8 text without length:K22:17; Mac text without length:K22:10))

ARRAY LONGINT:C221($pos; 0)
ARRAY LONGINT:C221($len; 0)

If (Match regex:C1019("([.0-9]+)[: (x86|64)]*Copyright"; $copyright; 1; $pos; $len))
	
	$0:=Substring:C12($copyright; $pos{1}; $len{1})
	
End if 