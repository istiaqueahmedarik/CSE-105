import hashlib
import time

import requests

key = "***"
secret = "***"

rand = "123456"

method = "user.friends"
params = {"onlyOnline": True, "apiKey": key, "time": int(time.time())}

sorted_params = "&".join(sorted(["{}={}".format(k, v) for k, v in params.items()]))

message = "{}/{}?{}#{}".format(rand, method, sorted_params, secret)
apiSig = rand + hashlib.sha512(message.encode()).hexdigest()

params["apiSig"] = apiSig

response = requests.get("https://codeforces.com/api/{}".format(method), params=params)

print(response.json())
