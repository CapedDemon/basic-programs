		
class SegmentTree {

        int N ; 
        vector<int> tree ;

        int neutral = 0 ; // changeable
        // this can be changes for example for sum , gcd it should be 0 , for max it can be INT_MIN

        int f ( int a , int b ){
                return a+b ; // changeable 
        }
        // can change the function to gcd , sum , prod , lcm  , min , max 
        
        public : 
        
        // call by making empty tree of size n 
        SegmentTree(int n ){
                N = n ;
                tree.assign( 4*(N+1) , 0 ) ; 
        }

        // cal by making a segment tree based on 1 based indexed vector / array 
        SegmentTree(vector<int> arr ){
                N = arr.size()-1 ;
                tree.assign( 4*(N+1) , 0 ) ; 
                build( arr , 1,1,N ) ;
        }

        void build ( vector<int> &arr , int v , int l , int r  ){
                if(l==r){
                        tree[v] = arr[l] ;
                }
                else{
                        int m = (l+r)/2 ;
                        build( arr , 2*v , l , m ) ;
                        build( arr , 2*v+1 , m+1 , r ) ;
                        tree[v] = f( tree[2*v] , tree[2*v +1 ] ) ;
                }
        }

        int query( int ql , int qr , int v  , int l  , int r){

                if( r < ql or qr < l ){
                        return neutral ;
                }
                else if(ql<=l and r<=qr){
                        return tree[v] ;
                }

                int m = (l+r)/2 ;

                return f ( query ( ql , qr , 2*v , l , m  ) ,
                        query ( ql , qr , 2*v+1 , m+1 , r  ) ) ;

        }
        // call for query on segment [l , r]
        int query( int l , int r ){
                return query( l , r , 1 , 1 , N ) ;
        }
        
        void update(int idx , int val  , int v , int l , int r  ){

                if( r < idx or idx < l ){
                        return  ;
                }
                else if( l == r){
                        tree[v] = val  ;  // line to look out for updation 
                        return ;
                }
        
                int m = (l+r)/2 ;
                update( idx , val  , 2*v , l , m ) ;
                update( idx , val  , 2*v+1 , m+1 , r ) ;
                tree[v] = f( tree[2*v] , tree[2*v +1 ] ) ;
        }

        // call to update val at index idx 
        void update(int idx , int val ){
                update( idx , val , 1 ,1 ,N ) ;
        }


};

