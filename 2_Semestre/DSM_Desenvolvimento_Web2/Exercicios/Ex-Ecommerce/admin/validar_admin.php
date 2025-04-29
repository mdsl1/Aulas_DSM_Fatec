<?php
    session_start();

    $usuario = ucfirst(strtolower($_POST["usuario"]));

    if($_POST["senha"] == "s3gr3d0") {
        $_SESSION["admin"] = $usuario;
        $_SESSION["logado"] = true;
        header("Location: index.php");
    }
    else {
        $_SESSION["logado"] = false;
        header("Location: login_admin.php");
    }
?>
