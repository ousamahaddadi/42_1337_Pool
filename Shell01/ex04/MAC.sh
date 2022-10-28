#!/bin/bash
ifconfig  | grep ether -w | cut  -d  " " -f 2
