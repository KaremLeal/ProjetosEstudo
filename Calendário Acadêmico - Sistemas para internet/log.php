<?php
$host = 'localhost'; 
$port = '5432'; 
$dbname = 'login';
$user = 'seu_usuario';
$password = 'sua_senha';

// Estabelecer a conexão
$dsn = "pgsql:host=$host;port=$port;dbname=$dbname;user=$user;password=$password";
$conexao = new PDO($dsn);
?>
