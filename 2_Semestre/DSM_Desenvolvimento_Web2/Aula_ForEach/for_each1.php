<?php

    $aprovados = ["Maria da Silva", "José de Souza", "Ana Ribeiro", "Marcos Almeida", "Carla Vieira", "Joaquim Alves", "Márcia Andrade"];
?>

<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <title>Lista de Aprovados da Fatec 2025</title>
    </head>
    <body>
        <h1>Aprovados no Vestibular Fatec 2025</h1>
        <h2>Total de Aprovados: <?= count($aprovados); ?></h2>
        <ol>
            <?php foreach($aprovados as $ap) {echo "<li>$ap;</li>";} ?>
        </ol>
    </body>
</html>