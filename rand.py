import random

def main():

	#while(1):
		#time.sleep(5)
    f = open ('text/datos.txt','w')
    f.write('data1='+'\"->'+str(random.randrange(500,1200)) +'\"'+';'+'\n')
    f.write('data2='+'\"->'+str(random.randrange(500,1200)) +'\"'+';'+'\n' )
    f.write('data3='+'\"->'+str(random.randrange(500,1200)) +'\"'+';'+'\n')
    f.close()



if __name__ == '__main__':
    main()
