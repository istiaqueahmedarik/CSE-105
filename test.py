import hashlib
import time

import requests


def authorize_request(method, params, api_key, api_secret):
  # Generate a random string for the apiSig parameter
  rand = "123456"
  # Add the apiKey and time parameters to the request
  params["apiKey"] = api_key
  params["time"] = int(time.time())
  # Sort the request parameters lexicographically
  sorted_params = sorted(params.items(), key=lambda x: (x[0], x[1]))
  # Concatenate the sorted parameters in the format: param1=value1&param2=value2&...&paramN=valueN
  param_str = "&".join(["{}={}".format(k, v) for k, v in sorted_params])
  # Concatenate the apiSig string: <rand>/<methodName>?param1=value1&param2=value2...&paramN=valueN#<secret>
  api_sig_str = "{}/{}?{}#{}".format(rand, method, param_str, api_secret)
  # Calculate the SHA-512 hash of the apiSig string
  api_sig_hash = hashlib.sha512(api_sig_str.encode("utf-8")).hexdigest()
  # Concatenate the apiSig parameter: <rand><api_sig_hash>
  params["apiSig"] = rand + api_sig_hash
  return params

def get_hacks(contest_id, api_key, api_secret):
  API_ENDPOINT = "https://codeforces.com/api/user.friends"
  params = {
    "onlyOnline": sit
  }
  # Authorize the request
  params = authorize_request("user.friends", params, api_key, api_secret)
  # Make the request
  response = requests.get(API_ENDPOINT, params=params)
  if response.status_code == 200:
    return response.json()
  else:
    return None

sit = True
api_key = "d7b01d728499db18d8fa857a97e6e0fba165b59d"
api_secret = "ca7b5dd3f69c2c7e9a27ed8c0f52d5e8f1fa6eca"

hacks = get_hacks(sit, api_key, api_secret)
if hacks:
  print(hacks)
else:
  print("Unable to fetch hacks for contest:", sit)
