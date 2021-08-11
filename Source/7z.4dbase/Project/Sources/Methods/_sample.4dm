//%attributes = {"invisible":true}
$version:=z7_Get_version

$sourcePath:=Get 4D folder:C485(Logs folder:K5:19)
$targetPath:=System folder:C487(Desktop:K41:16)+Generate UUID:C1066+".zip"
$password:=""
$error:=""
If (z7_Archive($sourcePath; $targetPath; $password; ->$error))
	SHOW ON DISK:C922($targetPath)
End if 

$sourcePath:=$targetPath
$targetPath:=Substring:C12($targetPath; 1; Length:C16($targetPath)-4)
CREATE FOLDER:C475($targetPath)
$error:=""
If (z7_Extract($sourcePath; $targetPath; $password; ->$error))
	SHOW ON DISK:C922($targetPath)
End if 
