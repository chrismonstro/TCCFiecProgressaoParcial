///>>>index.js<<<///

const express = require('express');
const path = require('path');   
const bodyparser = require('body-parser');
const cors = require('cors');
const jwt = require('jsonwebtoken');


const app = express();

app.use('/', express.static(path.join(__dirname, 'public')));

app.get('/home', (req,res)=>{
    
    res.sendFile(__dirname + '/public/home.html');
});

app.listen(38000, '0.0.0.0', () => console.log('Servidor Ligado!'));

