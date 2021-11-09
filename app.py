events_jan=[[1,"Lunar Occulation of Moon"],[2,"C/2021 A1 (Leonard) at perihelion M41 is well placed"],[3,"Quadrantid meteor shower 2022"],[4,"The Earth at perihelion"],[6,"Conjunction of the Moon and Jupiter Close approach of the Moon and Jupiter"],[7,"Mercury at highest altitude in evening sky"],[8,"Mercury at highest altitude in evening sky"],[15,"M47 is well placed"],[17,"NGC 2451 is well placed"]]
events=events_jan
months=["jan","feb","march","april","may","june","july","august","september","october","november","december"]
for i in range(0,12):
    print("month - {}-- {}".format(months[i],i+1))
n=input("Enter Month")
for i in events_jan:
    #if n==1:
    print("Event is {} and Date is {} Jan 2022".format(i[1],i[0]))
