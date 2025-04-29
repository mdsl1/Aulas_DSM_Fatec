<?php
    session_start();;
    $usuario = strtolower($_POST["usuario"]);

    if($_POST["senha"] == "1234" && $usuario == "marcos") {
        $_SESSION["logado"] = true;
        $_SESSION["usuario"] = $usuario;
        header("Location: entradaAdmin.php");
    }
    else {
        $_SESSION["logado"] = false;
    }
    // O conteúdo abaixo só será mostrado se a senha não estiver correta
?>

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <title>Acesso Negado</title>
    </head>
    <body>
        <h1>Acesso Negado</h1>
        <p>
        <?php
            if($usuario != "marcos") {
                echo "O usuario digitado está incorreta.";
            }
            else {
                echo "A senha digitada está incorreta.";
            }
        ?> Tente logar novamente.</p>
        <a href="login.php">Tentar novamente</a>
    </body>
</html>