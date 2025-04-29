<?php
    $operacoes = ["+", "-", "*", "/"];
?>

<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Calculadora de dois números</title>
    </head>
    <body>
        <h1>Calculadora de Dois Números</h1>
        <form action="calcular.php">
            <div>
                <label for="valor1">1º Valor:</label>
                <input type="number" id="valor1" name="valor1" step="any">
            </div>
            <div>
                <label for="valor2">2º Valor:</label>
                <input type="number" id="valor2" name="valor2" step="any">
            </div>
            <div>
                <select name="operacao" id="operacao">
                <?php
                    foreach($operacoes AS $op){
                        echo "<option value='$op'>$op</option>";
                    }
                ?>
                </select>
            </div>
            <button>Calcular</button>
        </form>
    </body>
</html>