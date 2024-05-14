return this->judul;
    }
} bukunya;

int main()
{
    //bukunya.setjudul("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul(); //chain function calls
    return 0;
}