<?php 
    $estadosBR = ["","Acre","Alagoas","Amapá","Amazonas","Bahia","Ceará","Distrito Federal","Espírito Santo","Goiás","Maranhão","Mato Grosso","Mato Grosso do Sul","Minas Gerais","Pará","Paraíba","Pernambuco","Piauí","Rio de Janeiro","Rio Grande do Norte","Rondônia","Roraima","São Paulo","Sergipe","Tocantis"];  
?>
<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>Formulário de Cadastro</title>
        <style>
    
            form{
                width: 500px;
                border: 1px solid #000;
                border-radius: 6px;
                padding: 8px;
            }
            .formSection{
                margin-top: 12px;
                display: flex;
                flex-flow: row nowrap;
                gap: 5px;
                justify-content:baseline;
            }
            .formSection label{
                width: 180px;
                text-align: baseline;
                margin-left: 30px;
            }
            .formSection input, .formSection select{
                border-radius: 6px;
                border: 1px solid #000;
                width: 180px;
            }
            form button{
                margin-top: 12px;
            }
        </style>
    </head>
    <body>
        <h1>Formulário de Cadastro</h1>
        <form action="cadastrar.php">
            <div class="formSection">    
                <label for="name">Nome:</label>
                <input type="text" name="name" id="name" required>
            </div>
            <div class="formSection">
                <label for="email">E-mail:</label>
                <input type="email" name="email" id="email" required>
            </div>
            <div class="formSection">
                <label for="password">Senha:</label>
                <input type="password" name="password" id="password" required>
            </div>
            <div class="formSection">
                <label for="state">Estado:</label>
                <select name="state" id="state" required>
                    <?php
                        foreach($estadosBR AS $UF){
                            echo "<option value='$UF'>$UF</option>";
                        }
                    ?>
                </select>
            </div>
            <div class="formSection">
                <label for="city">Cidade:</label>
                <input type="text" name="city" id="city" required>
            </div>
            <div class="formSection">
                <label for="birthday">Data de Nascimento:</label>
                <input type="date" name="birthday" id="birthday" required>
            </div>
            <div style="text-align: center;">
                <button>Enviar</button>
            </div>
        </form>
    </body>
</html>