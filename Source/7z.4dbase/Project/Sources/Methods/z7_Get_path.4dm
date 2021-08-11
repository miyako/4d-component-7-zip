//%attributes = {"invisible":true,"preemptive":"capable"}
C_TEXT:C284($0; $path)

$path:=Get 4D folder:C485(Database folder:K5:14)+"7z"+Folder separator:K24:12

Case of 
	: (Is macOS:C1572)
		
		If (Application type:C494=4D Remote mode:K5:5)
			SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_CURRENT_DIRECTORY"; $path+"MacOS")
			SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_BLOCKING_EXTERNAL_PROCESS"; "true")
			LAUNCH EXTERNAL PROCESS:C811("chmod 555 7za")
		End if 
		
		$path:=$path+"MacOS"+Folder separator:K24:12+"7za"
		
	: (Is Windows:C1573)
		
		$isWin64:=(System folder:C487(Applications or program files:K41:17)="@(x86)\\")
		
		If ($isWin64)
			$path:=$path+"Windows64"+Folder separator:K24:12+"7za.exe"
		Else 
			$path:=$path+"Windows"+Folder separator:K24:12+"7za.exe"
		End if 
		
		SET ENVIRONMENT VARIABLE:C812("_4D_OPTION_HIDE_CONSOLE"; "true")
		
End case 

$0:=LEP_Escape_path($path)