# -*- coding: utf-8 -*-  
import sys
import os
import re
import glob
import argparse

def main():
	parser = argparse.ArgumentParser(description="This is a Word-Counter.")
	parser.add_argument("-c", metavar = "--char", dest = "char_arg", help = "Return number of characters.")
	parser.add_argument("-w", metavar = "--word", dest = "word_arg", help = "Return number of words.")
	parser.add_argument("-l", metavar = "--line", dest = "line_arg", help = "Return number of lines.")
	args = parser.parse_args()
	if args.char_arg:
		charcount = Char_Count(args.char_arg)
		print("Number of characters：%s" % (charcount))
	if args.word_arg:
		wordcount = Word_Count(args.word_arg)
		print("Number of words：%s" % (wordcount))
	if args.line_arg:
		linecount = Line_Count(args.line_arg)
		print("Number of lines：%s" % (linecount))

def Char_Count(fileName):
	#字符数统计
	charcount = 0
	try:
		with open(fileName, "r", encoding = 'utf-8') as f:
			for line in f:
				match = re.findall(r'[\s]+', line)
				for i in match:
					line = line.replace(i, '')
				charcount += len(line)
		return charcount
	except IOError:
		print("Failed to open file,please check if the path is correct.")

def Word_Count(fileName):
	#单词数统计
	wordcount = 0
	try:
		with open(fileName, "r", encoding = 'utf-8') as f:
			for line in f:
				match = re.findall(r'[a-zA-Z-\']+',line)
				wordcount += len(match)
		return wordcount
	except IOError:
		print("Failed to open file,please check if the path is correct.")
		
def Line_Count(fileName):
	#行数统计
	linecount = 0
	try:
		with open(fileName, "r", encoding = 'utf-8') as f:
			for line in f:
				linecount += 1
		return linecount
	except IOError:
		print("Failed to open file,please check if the path is correct.")
		
if __name__=='__main__':
	main()