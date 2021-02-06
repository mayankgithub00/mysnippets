int dx[]={0,0,-1,1,1,1,-1,-1},dy[]={1,-1,0,0,1,-1,1,-1};
 inline bool isValid(int x,int y)
 {
 	if(x>=0 && x<H && y>=0 && y<W)
 		return true;
 	return false;
 }