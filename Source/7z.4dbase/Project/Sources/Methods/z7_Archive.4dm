//%attributes = {"invisible":true,"shared":true,"preemptive":"capable"}
C_TEXT:C284($1; $2; $3)
C_POINTER:C301($4)
C_BOOLEAN:C305($0)  //success = true, failure = false

//flags set: 
//-y Assume Yes on all queries  

C_LONGINT:C283($params)
$params:=Count parameters:C259

If ($params>1)
	
	$sourcePath:=$1
	$targetPath:=$2
	
	$command:=" a -y "+LEP_Escape_path($targetPath)+" "+LEP_Escape_path($sourcePath)
	
	If ($params>2)
		If (Length:C16($3)#0)
			$command:=$command+" -p"+LEP_Escape($3)
		End if 
	End if 
	
	C_BLOB:C604($response)
	
	If (z7_Execute($command; ->$response))
		
		$0:=True:C214
		
	Else 
		
		If ($params>3)
			If (Not:C34(Is nil pointer:C315($4)))
				If (Type:C295($4->)=Is text:K8:3)
					$4->:=Convert to text:C1012($response; "utf-8")
				End if 
			End if 
		End if 
		
	End if 
	
End if 