/*
Program to sort the records which contains Empid, depid, empname, salary 

Sort in descending order using (Empid, depid, empname);

Input
------
1, 100, 'AAA' , 1000
1, 300, 'BBB', 2000
1, 200, 'CCC', 3000
5, 100, 'DDD', 4000

The expected output
--------------------
5, 100, 'DDD', 4000
1, 300, 'BBB', 2000
1, 200, 'CCC', 3000
1, 100, 'AAA', 1000

 */

#include<iostream>

using namespace std;

class employee {

  private:
    int empid;
    int depid;
    string empname;
    int salary;
 

  public : 

   void putdata(int empid, int depid, string empname, int salary) {
        this->empid = empid;
        this->depid = depid;
        this->empname = empname;
        this->salary = salary;
   }

   static void print_records(vector<employee>&  records) {
        for(int i=0; i < 10; i++) {
            cout << records[i].empid << " " << records[i].depid << " " << records[i].empname << " " << records[i].salary << endl;

        }
    }

    static void sortdecending(vector<employee>&  records) {
        sort(records.begin(), records.end(), compare);
    }

    static bool compare(employee obj1, employee obj2) {
            if (obj1.empid > obj2.empid) {
                return true;
            }
            else if (obj1.empid < obj2.empid) {
                return false;
            } 
            else if (obj1.depid > obj2.depid ) {
                return true;
            }
            else if (obj1.depid < obj2.depid) {
                return false;
            }
            else if (obj1.empname > obj1.empname) {
                return true;
            }
            else 
               return false;
     }
};

int main() {
  vector<employee>  obj;

  for(int i=0; i < 10; i++) {
        obj.push_back(employee());
  }
  
  obj[0].putdata(1,10,"AAA",1000);
  obj[1].putdata(2,20,"BBB",1000);
  obj[2].putdata(3,30,"CCC",1000);
  obj[3].putdata(5,40,"DDD",1000);
  obj[4].putdata(5,30,"EEE",1000);
  obj[5].putdata(5,20,"FFF",1000);
  obj[6].putdata(5,10,"GGG",1000);
  obj[7].putdata(6,10,"HHH",1000);
  obj[8].putdata(6,10,"III",1000);
  obj[9].putdata(6,10,"ZZZ",1000);


  cout << "Before sorting" << endl;
  employee::print_records(obj);

  employee::sortdecending(obj);

  cout << "After sorting" << endl;
  employee::print_records(obj);

  return 0;
}
