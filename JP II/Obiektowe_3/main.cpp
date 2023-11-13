#include <iostream>
#include <string>

using namespace std;


class Index;

class Note{
    friend class Index;

private:
    string subject;
    float note;

public:
    Note(string subject_IN="unspecified", float note_IN=2.0):subject(subject_IN), note(note_IN){}

    void SetSubject(string subject_IN){
        subject = subject_IN;
    }
    void SetNote(float note_IN){
        if(note_IN==2.0 || note_IN==2.5 ||
           note_IN==3.0 || note_IN==3.5 ||
           note_IN==4.0 || note_IN==4.5 ||
           note_IN==5.0)
            note = note_IN;
        else
            cout<<"invalid note format"<<endl;
    }

    string GetSubject(){
        return subject;
    }

    float GetNote(){
        return note;
    }

    void Show(){
        cout<<subject<<" "<<note<<endl;
    }

};

class Index{
    private:
    int n_notes;
    Note *notes;

    public:
    Index(int n_notes_in):n_notes(n_notes_in){
        notes = new Note[n_notes];
    }

    ~Index(){
        delete[] notes;
    }

    void Set(int idx, string subject_in, float note_in){
        if(idx>=0 && idx<n_notes){
            notes[idx].subject=subject_in;
            notes[idx].SetNote(note_in);
        }
    }

    void Change(float note_in, string subject_in){
        for(int i=0; i<n_notes; i++){
            if(notes[i].subject==subject_in){
                notes[i].SetNote(note_in);
                break;
            }
        }
    }

 float Average(){
       float sum=0.0;
       if(n_notes==0)return 0.0;
       for(int i=0;i<n_notes;i++){
            sum+=notes[i].note;
       }
       return (sum/n_notes);
   }

void Show(){
    cout<<"~~~~~"<<"INDEKS"<<"~~~~~"<<endl;
    for(int i=0; i<n_notes; i++){
        cout<<(i+1);
        notes[i].Show();
    }
    cout<<"AVERAGE: "<<Average()<<endl;
}

void Add(string subject, float note_in);
void Remove(string subject_in);
friend float FindNote(string subject_in, Index *index_in);
};

void Index::Add(string subject_in, float note_in){
    Note *notes2;
    notes2 = new Note[n_notes+1];

    for(int i=0; i<n_notes; i++)
        notes2[i]=notes[i];

    delete[] notes;
    notes=notes2;

    notes[n_notes].subject=subject_in;
    notes[n_notes].SetNote(note_in);
    n_notes++;
}


void Index::Remove(string subject_in){
int idx=-1;
    for(int i=0; i<n_notes; i++){
        if(notes[i].GetSubject()==subject_in){
            idx=i;
            break;
        }
    }
    if(idx<0)
        return;

    Note *notes2 = new Note[n_notes-1];
    for(int i=0; i<idx; i++)
        notes2[i]=notes[i];

    for(int i=idx+1; i<n_notes; i++)
        notes2[i-1]=notes[i];

delete[] notes;
notes=notes2;
n_notes--;
}

float FindNote(string subject_in, Index *index_in){
    for(int i=0; i<index_in->n_notes; i++){
        index_in->notes[i].GetSubject()=subject_in;
        return index_in->notes[i].GetNote();
    }
}



int main()
{
    Index ind(3);
    ind.Set(0, "Analysis", 3);
    ind.Set(1, "Algebra", 4);
    ind.Set(2, "Physics", 4);
    ind.Show();
    cout<<"note from Algebra: "<<FindNote("Algebra", &ind)<<endl;
    ind.Change(3, "Algebra");
    ind.Show();
    ind.Add("C++ Programming", 5);
    ind.Show();
    ind.Remove("Physics");
    ind.Show();

    return 0;
}
