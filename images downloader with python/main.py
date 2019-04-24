#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Apr 25 00:32:05 2019

@author: samsil arefin
"""

import requests
from bs4 import BeautifulSoup as bs
import os

def main():
    # website url
    url = 'https://unsplash.com/'
    
    # download page for parsing
    page = requests.get(url)
    soup = bs(page.text, 'html.parser')

    # locate all elements with image tag
    image_tags = soup.findAll('img')

    # create directory for download images
    if not os.path.exists('images'):
        os.makedirs('images')

    # move to new directory
    os.chdir('images')

    # name variable
    x = 1

    # writing/downloading images
    for image in image_tags:
        try:
            url = image['src']
            response = requests.get(url)
            if response.status_code == 200:
                with open('images -' + str(x) + '.jpg', 'wb') as f:
                    f.write(requests.get(url).content)
                    f.close()
                    x += 1
        except:
            pass
        
#drive program
if __name__== "__main__":
    main()            

