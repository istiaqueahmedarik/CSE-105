import requests
from bs4 import BeautifulSoup

# URL of the CSES problem set
url = "https://cses.fi/problemset/"

# Make a GET request to the URL and get the HTML content
response = requests.get(url)
html_content = response.content

# Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(html_content, "html.parser")

# Find all the links that contain "problem/" in the href attribute
problem_links = soup.find_all("a", href=lambda href: href and "problem/" in href)

# Extract the problem ID from each link
problem_ids = [link["href"].split("/")[-1] for link in problem_links]

# Print the problem IDs
print(problem_ids)
