<?php
    session_start();

    // Opção mais pesada: Destroi a sessão por completo
    // session_destroy();

    // Opção mais leve: limpa as variaveis de sessão
    $_SESSION = array();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Desconectado com sucesso.</h1>
    <p>Caso queira entrar novamente <a href="login_admin.php">Clique aqui</a></p>
</body>
</html>