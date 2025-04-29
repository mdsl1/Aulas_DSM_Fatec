<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Login</title>
    </head>
    <body>
        <h1>Fazer Login</h1>
        <form action="validar.php" method="POST">
            <label for="usuario">Usuário:</label>
                <input type="text" id="usuario" name="usuario" size="15">
            <label for="senha">Senha:</label>
                <input type="password" id="senha" name="senha">
                <button>Entrar</button>
        </form>
    </body>
</html>