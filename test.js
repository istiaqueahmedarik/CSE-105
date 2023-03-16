const crypto = require('crypto');

const key = "d7b01d728499db18d8fa857a97e6e0fba165b59d";
const secret = "ca7b5dd3f69c2c7e9a27ed8c0f52d5e8f1fa6eca";
const rand = "123456";
const method = "user.friends";
const params = { onlyOnline: true, apiKey: key, time: Math.floor(Date.now() / 1000) };

const sortedParams = Object.keys(params).sort().map(k => `${k}=${params[k]}`).join("&");

const message = `${rand}/${method}?${sortedParams}#${secret}`;
const apiSig = rand + crypto.createHash('sha512').update(message).digest('hex');

params.apiSig = apiSig;

const queryString = Object.keys(params).map(k => `${k}=${params[k]}`).join("&");

fetch(`https://codeforces.com/api/${method}?${queryString}`)
  .then(response => response.json())
  .then(data => {
    console.log(data.result);
  })
  .catch(error => console.log(error));
