<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Red Team HQ</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" type="text/css" media="screen" href="main.css" />
</head>
<body>
    <div class="login-page-anim">
        <p>
            <span style="color: darkcyan">
            <?php
            $target_dir = "uploads/";
            $target_file = $target_dir . basename($_FILES["fileToUpload"]["name"]);
            $uploadOk = 1;
            $imageFileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));
            
            if (file_exists($target_file)) {
                echo "A report of this name was already Uploaded.";
                $uploadOk = 0;
            }
            
            if ($_FILES["fileToUpload"]["size"] > 500000) {
                echo "File is too Large.";
                $uploadOk = 0;
            }
            
            if ($uploadOk == 0) {
                echo "Sorry, your file was not uploaded.";
            } else {
                if (move_uploaded_file($_FILES["fileToUpload"]["tmp_name"], $target_file)) {
                    echo basename( $_FILES["fileToUpload"]["name"]). " has been uploaded.";
                } else {
                    echo "Sorry, there was an error uploading your file.";
                }
            }
            ?>
        </span>
            <br><br><br>
            <span style="color:cyan">$</span> News for Red Team.
            We are attacking a Blue Team.
            We are secretly operating from this Server.
            This is Top secret.
            <br><br><br>
            <span style="color:cyan">$</span> Also, Just so you know. This server is completely Hidden and cannot be discovered by an Outsider.<br>
            Such as a Blue team Member attacking us.
            <br><br><br>
            <span style="color:darkorchid">Lynx@TheCreatorOfUAfcionado$> </span> Hey Red Team! This is top secret chat! <br><br>
            <span style="color:mediumslateblue">Mr.Robot$> </span> Hello Lynx! How are you!<br><br>
            <span style="color:yellow">Guest@ScriptKidde$></span> How to heck fb on andreod<br><br>
            <span style="color:darkorchid">Lynx@TheCreatorOfUAfcionado$> </span> That was a Joke. <br><br>
            <span style="color:yellow">Guest@ScriptKidde$></span> Yes haahah<br><br>
            <span style="color:mediumslateblue">Mr.Robot$> </span> hahahha<br><br>
            <span style="color:magenta">TheHater$> </span> I am spiderman.<br><br>
            <span style="color:darkorchid">Lynx@TheCreatorOfUAfcionado$> </span> JUST DO IT <br><br>
            <span style="color:mediumslateblue">Mr.Robot$> </span> UR MOM Gay<br><br>
            <span style="color:yellow">Guest@ScriptKidde$></span> NO U<br><br>
            <span style="color:darkorchid">Lynx@TheCreatorOfUAfcionado$> </span> => To be continued. <br><br>
            <span style="color:yellow">Guest@ScriptKidde$></span> Metasploit Pro is a myth. Change my mind.<br><br>
            <span style="color:mediumslateblue">Mr.Robot$> </span> Doge Approves.<br><br>
            <span style="color:magenta">TheHater$> </span> I don't always use Git. But when I do, IT'S FOR CLONING UAFICIONADO!<br><br>

        </p>
    </div>
    
</body>
</html>