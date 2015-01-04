/* Propositional Tableaux Implementation; from "First-Order Logic and Automated Theorem Proving" by Melvin Fitting; minor modifications by Dorota Leszczyńska-Jasion */
:- op(140,fy,neg).
:- op(160,xfy,[and,or,imp,revimp,uparrow,downarrow,notimp,notrevimp]).

remove(_,[],[]).
remove(X,[X | Tail],Newtail) :-
	!,remove(X,Tail,Newtail).
remove(X,[Head|Tail],[Head|Newtail]) :-
	remove(X,Tail,Newtail).

conjunctive(_ and _).          
conjunctive(neg(_ or _)).     
conjunctive(neg(_ imp _)).    
conjunctive(neg(_ revimp _)). 
conjunctive(neg(_ uparrow _)). 
conjunctive(_ downarrow _).    
conjunctive(_ notimp _).      
conjunctive(_ notrevimp _).    

disjunctive(neg(_ and _)).      
disjunctive(_ or _).		 
disjunctive(_ imp _).            
disjunctive(_ revimp _).	 
disjunctive(_ uparrow _).       
disjunctive(neg(_ downarrow _)). 
disjunctive(neg(_ notimp _)).	 
disjunctive(neg(_ notrevimp _)).

unary(neg neg _).
unary(neg true).
unary(neg false).

components(X and Y,X,Y).
components(neg(X and Y),neg X,neg Y).
components(X or Y,X,Y).
components(neg(X or Y),neg X,neg Y).
components(X imp Y,neg X,Y).
components(neg(X imp Y),X,neg Y).
components(X revimp Y,X,neg Y).
components(neg(X revimp Y),neg X,Y).
components(X uparrow Y,neg X,neg Y).
components(neg(X uparrow Y),X,Y).
components(X downarrow Y,neg X,neg Y).
components(neg(X downarrow Y),X,Y).
components(X notimp Y,X,neg Y).
components(neg(X notimp Y),neg X,Y).
components(X notrevimp Y,neg X,Y).
components(neg(X notrevimp Y),X,neg Y).

component(neg neg X, X).
component(neg true, false).
component(neg false, true).

/* singlestep(Old, New) :- New is the result of applying a single step of the expansion process to Old, which is a generalized disjunction of generalized conjunctions
*/

singlestep([Conjunction | Rest], New) :-
	member(Formula,Conjunction),
	unary(Formula),!,
	component(Formula,Newformula),
	remove(Formula,Conjunction,Temporary),
	Newconjunction = [Newformula | Temporary],
	New = [Newconjunction | Rest].
singlestep([Conjunction | Rest], New) :-
	member(Alpha,Conjunction),
	conjunctive(Alpha),!,
	components(Alpha,Alphaone,Alphatwo),
	remove(Alpha,Conjunction,Temporary),
	Newconjunction = [Alphaone,Alphatwo | Temporary],
	New = [Newconjunction | Rest].
singlestep([Conjunction | Rest], New) :-
	member(Beta,Conjunction),
	disjunctive(Beta),!,
	components(Beta,Betaone,Betatwo),
	remove(Beta,Conjunction,Temporary),
	Newconjunctionone = [Betaone | Temporary],
	Newconjunctiontwo = [Betatwo | Temporary],
	New = [Newconjunctionone, Newconjunctiontwo | Rest].
singlestep([Clause | Rest],[Clause | Newrest]) :-
	singlestep(Rest, Newrest).

/* expand(Old, New) :- New is the result of applying singlestep as many times as possible, starting with Old*/

expand(Disjunction, Newdisjunction) :-
    write(Disjunction),
    write('\n'),
	singlestep(Disjunction, Temporary),!,
	expand(Temporary,Newdisjunction).
/*    if_then_else(_,_,_) :- closed(Newdisjunction),write('tableau closed'),write('tableau opened').*/
/*    if_then_else(closed(Newdisjunction),write('tableau closed'),write('tableau opened')):-*/ 
expand(Dis,Dis).

/* closed(Tableau) :- every branch of Tableau contains a contradiction */

closed([Branch | Rest]) :-
    /*write(Branch),
    write('\n'),*/
	member(false, Branch),!,
	closed(Rest).

closed([Branch | Rest]) :-
    /*write(Branch),
    write('\n'),*/
	member(X, Branch),
	member(neg X, Branch),!,
	closed(Rest).

closed([]).

/* test(X) :- create a complete tableau expansion for neg X, and see if it is closed */

test(X) :-
	expand([[neg X]],Y),
	closed(Y).

