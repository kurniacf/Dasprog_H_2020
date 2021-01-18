#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a, b, c, d, e, f, g, h, i;
	double ma, mb, mc, md, me, mf, mg, mh, mi;
	double det;
	
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cin>>g>>h>>i;
	
	//det
	det=(a*e*i)+(b*f*g)+(c*d*h)-(g*e*c)-(h*f*a)-(i*d*b);
	
	/*Minor A= [ ma mb mc ]
				 md me mf
				 mg mh mi
				 
 	//kof=[ + - + ]
 			- + -
			+ - +
	*/			
	ma=(e*i)-(f*h);
	mb=(d*i)-(f*g);
	mc=(d*h)-(e*g);
	md=(b*i)-(c*h);
	me=(a*i)-(c*g);
	mf=(a*h)-(b*g);
	mg=(b*f)-(c*e);
	mh=(a*f)-(c*d);
	mi=(a*e)-(b*d);
	
	mb=(-1)*mb;
	md=(-1)*md;
	mf=(-1)*mf;
	mh=(-1)*mh;
	
	/*ma=ma/det; 
	mb=mb/det; 
	mc=mc/det;
	md=md/det;
	me=me/det;
	mf=mf/det;
	mg=mg/det;
	mh=mh/det;
	mi=mi/det;*/
	
	
	if (det==0){
		cout<<"Gabisa bang"<<endl;
	} else {
		/*printf("%.2lf %.2lf %.2lf\n", ma, md, mg);
		printf("%.2lf %.2lf %.2lf\n", mb, me, mh);
		printf("%.2lf %.2lf %.2lf\n", mc, mf, mi);*/
		cout<<fixed<<setprecision(2)<<ma/det<<" "<<md/det<<" "<<mg/det<<endl;
		cout<<fixed<<setprecision(2)<<mb/det<<" "<<me/det<<" "<<mh/det<<endl;
		cout<<fixed<<setprecision(2)<<mc/det<<" "<<mf/det<<" "<<mi/det<<endl;
	}
	
	
	return 0;
}


	/*printf("%d %d %d\n", ma, md, mg);
	printf("%d %d %d\n", mb, me, mh);
	printf("%d %d %d\n", mc, mf, mi);*/

	/*mb=(-1)*mb;
	md=(-1)*md;
	mf=(-1)*mf;
	mh=(-1)*mi;*/

