import hashlib
import time

import requests

key = "d7b01d728499db18d8fa857a97e6e0fba165b59d"
secret = "ca7b5dd3f69c2c7e9a27ed8c0f52d5e8f1fa6eca"

rand = "123456"

method = "user.friends"
params = {"onlyOnline": True, "apiKey": key, "time": int(time.time())}

sorted_params = "&".join(sorted(["{}={}".format(k, v) for k, v in params.items()]))

message = "{}/{}?{}#{}".format(rand, method, sorted_params, secret)
apiSig = rand + hashlib.sha512(message.encode()).hexdigest()

params["apiSig"] = apiSig

response = requests.get("https://codeforces.com/api/{}".format(method), params=params)

print(response.json())
