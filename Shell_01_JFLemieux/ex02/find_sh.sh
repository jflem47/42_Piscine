#!/bin/bash
arr=$(find . -name "*.sh" -exec basename {} \;)
echo $arr