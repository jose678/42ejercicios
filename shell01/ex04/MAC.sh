#!/bin/sh
ifconfig -a | grep -w ether | awk '{print }' | cut -d ' ' -f2
