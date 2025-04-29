<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
    </head>
    <body>
        <h1>Login no Sistema</h1>
        <form action="logar.php" method="post">
            <div>
                <label for="usuario">Usuário:</label>
                <input type="text" id="usuario" name="usuario" size="20" required>
            </div>
            <div>
                <label for="senha">Senha:</label>
                <input type="password"id="senha" name="senha" required>
            </div>
            <button>Enviar</button>
        </form>
    </body>
</html>