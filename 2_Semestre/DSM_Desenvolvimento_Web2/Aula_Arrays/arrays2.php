<?php
    // Criando um array indexado
    $alunos = [];
    $alunos[0] = "Maria";
    $alunos[1] = "José";
    $alunos[2] = "Alberto";
    $alunos[3] = "Feichaldo";

    $listaCompras = ["Arroz", "Feijão", "Batata", "Macarrão", "Tomate", "Detergente", "Sabão em Pó", "Cebola"];
?>
<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <title>Arrays Indexados</title>
        <meta charset="utf-8">
    </head>
    <body>
        <h1>Lista de Chamada - 1º Semestre</h1>
        <ol>
            <?php
                foreach($alunos as $nome){
                    echo "<li>$nome</li>";
                }
            ?>
        </ol>

        <h2>Lista de Compras</h2>
        <ul>
            <?php
                foreach($listaCompras as $produto){
                    echo "<li>$produto</li>";
                }
            ?>
        </ul>
    </body>
</html>