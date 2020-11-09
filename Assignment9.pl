div(s1,div1).
div(s2,div1).
div(s3,div1).
div(s81,div2).
div(s82,div2).
div(s82,div2).

branch(div1,computer).
branch(div2,computer).

teacher(div1,shrida_kalamkar).
teacher(div1,vaibhav_khatavkar).
teacher(div1,pravin_pawar).
teacher(div1,datta_ghaydatak).
teacher(div1,vibhavari_kamble).

teacher(div2,ashwini_matange).
teacher(div2,sumit_hirve).
teacher(div2,jagruti_waykole).
teacher(div2,datta_ghaydatak).
teacher(div2,rohini_sarode).

teaches(pravin_pawar,dld).
teaches(vaibhav_khatavkar,ppl).
teaches(shrida_kalamkar,dsa).
teaches(datta_ghaydatak,odemc).
teaches(vibhavari_kamble,dsgt).

teaches(jagruti_waykole,dld).
teaches(sumit_hirve,ppl).
teaches(ashwini_matange,dsa).
teaches(jatin_majithia,odemc).
teaches(rohini_sarode,dsgt).

div_subject(Div,Sub) :- teacher(Div,T) , teaches(T,Sub).
student_subjects(Student,Subjects) :- div(Student,Div) , div_subject(Div,Subjects).
student_branch(S,B) :- div(S,D) , branch(D,B).
student_teacher(S,T) :- div(S,D) , teacher(D,T).
