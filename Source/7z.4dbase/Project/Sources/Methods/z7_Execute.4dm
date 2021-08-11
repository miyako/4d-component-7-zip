//%attributes = {"invisible":true,"shared":true,"preemptive":"capable"}
C_TEXT:C284($1)
C_POINTER:C301($2)
C_BLOB:C604($3)
C_BOOLEAN:C305($0)

C_LONGINT:C283($params)
$params:=Count parameters:C259

C_BLOB:C604($stdIn; $stdOut; $stdErr)

If ($params>1)
	
	$argument:=$1
	$executablePath:=z7_Get_path
	$command:=$executablePath+$argument
	$pReponse:=$2
	
	If ($params>2)
		$stdIn:=$3
	End if 
	
	LAUNCH EXTERNAL PROCESS:C811($command; $stdIn; $stdOut; $stdErr)
	
	If (BLOB size:C605($stdErr)=0)
		
		$output:=BLOB to text:C555($stdOut; Choose:C955(Folder separator:K24:12=":"; UTF8 text without length:K22:17; Mac text without length:K22:10))
		
		ARRAY LONGINT:C221($pos; 0)
		ARRAY LONGINT:C221($len; 0)
		
		If (Match regex:C1019("(Error:|Errors:|WARNING:|CRC Failed)\\s*(.*)"; $output; 1; $pos; $len))
			$error:=Substring:C12($output; $pos{2}; $len{2})
			If (Not:C34(Is nil pointer:C315($2)))
				Case of 
					: (Type:C295($2->)=Is text:K8:3)
						$2->:=$error
					: (Type:C295($2->)=Is BLOB:K8:12)
						CONVERT FROM TEXT:C1011($error; "utf-8"; $2->)
				End case 
			End if 
		Else 
			$0:=True:C214
		End if 
	Else 
		$0:=False:C215
		If (Not:C34(Is nil pointer:C315($2)))
			Case of 
				: (Type:C295($2->)=Is text:K8:3)
					
					$2->:=BLOB to text:C555($stdErr; Choose:C955(Folder separator:K24:12=":"; UTF8 text without length:K22:17; Mac text without length:K22:10))
					
				: (Type:C295($2->)=Is BLOB:K8:12)
					$2->:=$stdErr
			End case 
		End if 
	End if 
	
End if 