#!/bin/bash
ifconfig -a | awk '/ether/ {print $2}' #| sed 's/$/\n/'
