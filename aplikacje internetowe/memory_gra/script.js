
// ------------ZAKRYJ----------------------
function Zakryj() {
    for (let i = 1; i < 65; i++)
        document.getElementById('a' + i).innerHTML = "<img src='pumpkin.jpg'>";
}


let TabImg = ['1', '2', '3', '4', '5', '6', '7', '8',
    '9', '10', '11', '12', '13', '14', '15', '16',
    '17', '18', '19', '20', '21', '22', '23', '24',
    '25', '26', '27', '28', '29', '30', '31', '32', '32',
    '31', '30', '29', '28', '27', '26', '25', '24',
    '23', '22', '21', '20', '19', '18', '17', '16',
    '15', '14', '13', '12', '11', '10', '9', '8',
    '7', '6', '5', '4', '3', '2', '1',];
let TabId = [
    'a1', 'a2', 'a3', 'a4', 'a5', 'a6', 'a7', 'a8',
    'a9', 'a10', 'a11', 'a12', 'a13', 'a14', 'a15', 'a16',
    'a17', 'a18', 'a19', 'a20', 'a21', 'a22', 'a23', 'a24',
    'a25', 'a26', 'a27', 'a28', 'a29', 'a30', 'a31', 'a32',
    'a33', 'a34', 'a35', 'a36', 'a37', 'a38', 'a39', 'a40',
    'a41', 'a42', 'a43', 'a44', 'a45', 'a46', 'a47', 'a48',
    'a49', 'a50', 'a51', 'a52', 'a53', 'a54', 'a55', 'a56',
    'a57', 'a58', 'a59', 'a60', 'a61', 'a62', 'a63', 'a64'];
let TabPos = [
    [100, 100], [200, 100], [300, 100], [400, 100], [500, 100], [600, 100], [700, 100], [800, 100],
    [100, 200], [200, 200], [300, 200], [400, 200], [500, 200], [600, 200], [700, 200], [800, 200],
    [100, 300], [200, 300], [300, 300], [400, 300], [500, 300], [600, 300], [700, 300], [800, 300],
    [100, 400], [200, 400], [300, 400], [400, 400], [500, 400], [600, 400], [700, 400], [800, 400],
    [100, 500], [200, 500], [300, 500], [400, 500], [500, 500], [600, 500], [700, 500], [800, 500],
    [100, 600], [200, 600], [300, 600], [400, 600], [500, 600], [600, 600], [700, 600], [800, 600],
    [100, 700], [200, 700], [300, 700], [400, 700], [500, 700], [600, 700], [700, 700], [800, 700],
    [100, 800], [200, 800], [300, 800], [400, 800], [500, 800], [600, 800], [700, 800], [800, 800],];

// --------------ODKRYJ--------------------

function Odkryj(x) {
    for (let i = 0; i < 64; i++)
        if (x == document.getElementById(TabId[i]))
            x.innerHTML = "<img src=" + TabImg[i] + ".jpg>";
}

// ------------LOSUJ----------------------

function Losuj() {
    Zakryj();
    Znikaj();
    let i = 0;
    for (let k = 0; k < 64; k++) TabPos[k][2] = 0;
    while (i < 64) {
        let x = Math.floor(Math.random() * 64);
        if (TabPos[x][2] == 0) {
            document.getElementById(TabId[i]).style.left = TabPos[x][0] + 'px';
            document.getElementById(TabId[i]).style.top = TabPos[x][1] + 'px';
            i++; TabPos[x][2] = 1;
        }
    }
}

function Znikaj() {
    document.getElementById('losuj').style.top = 10000 + 'px';

}

// ------------GRA-------------------

let p = 0;
let one;
function Gra(x) {
    if (p == 0) {
        Zakryj();
        Odkryj(x);
        one = x;
        p = 1;
    }
    else {
        Odkryj(x);
        if ((one.innerHTML == x.innerHTML) && (one.id != x.id)) {
            one.style.visibility = 'hidden';
            x.style.visibility = 'hidden';
        }

        p = 0;
    }
}

