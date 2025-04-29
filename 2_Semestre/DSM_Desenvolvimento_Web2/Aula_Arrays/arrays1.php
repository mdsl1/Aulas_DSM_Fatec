<?php
    // Primeira forma de criar array associativo e inserir dados
    $pessoa = [];
    $pessoa["nome"] = "Maria";
    $pessoa["cidade"] = "Marília";
    $pessoa["idade"] = 21;
    
    //Segunda forma de criar array associativo e inserir dados
    $produto = [
        "nome" => "Notebook",
        "fabricante" => "Lenovo",
        "preco" => 1999.9
    ];
?>
<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <title>Dados em Arrays Associativos</title>
        <meta charset="utf-8">
    </head>
    <body>
        <h1>Dados em Arrays Associativos</h1>
        <h2>Exemplo: Pessoas</h2>
        <div>
            <h3>1ª Pessoa</h3>
            <ul>
                <li>Nome: <?php echo $pessoa["nome"]; ?></li>
                <li>Cidade: <?php echo $pessoa["cidade"]; ?></li>
                <li>Idade: <?php echo $pessoa["idade"]; ?></li>
            </ul>
        </div>
    </body>
</html>