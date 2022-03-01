#include <iostream>
#include <fstream> 
#include <string>
#include <time.h>

using namespace std;

string stopList[] = { "a","able","about","above","abst","accordance","according","accordingly","across","act","actually","added","adj","affected","affecting","affects","after","afterwards","again","against","ah","all","almost","alone","along","already","also","although","always","am","among","amongst","an","and","announce","another","any","anybody","anyhow","anymore","anyone","anything","anyway","anyways","anywhere","apparently","approximately","are","aren","arent","arise","around","as","aside","ask","asking","at","auth","available","away","awfully","b","back","be","became","because","become","becomes","becoming","been","before","beforehand","begin","beginning","beginnings","begins","behind","being","believe","below","beside","besides","between","beyond","biol","both","brief","briefly","but","by","c","ca","came","can","cannot","can't","cause","causes","certain","certainly","co","com","come","comes","contain","containing","contains","could","couldnt","d","date","did","didn't","different","do","does","doesn't","doing","done","don't","down","downwards","due","during","e","each","ed","edu","effect","eg","eight","eighty","either","else","elsewhere","end","ending","enough","especially","et","et-al","etc","even","ever","every","everybody","everyone","everything","everywhere","ex","except","f","far","few","ff","fifth","first","five","fix","followed","following","follows","for","former","formerly","forth","found","four","from","further","furthermore","g","gave","get","gets","getting","give","given","gives","giving","go","goes","gone","got","gotten","h","had","happens","hardly","has","hasn't","have","haven't","having","he","hed","hence","her","here","hereafter","hereby","herein","heres","hereupon","hers","herself","hes","hi","hid","him","himself","his","hither","home","how","howbeit","however","hundred","i","id","ie","if","i'll","im","immediate","immediately","importance","important","in","inc","indeed","index","information","instead","into","invention","inward","is","isn't","it","itd","it'll","its","itself","i've","j","just","k","keep","keeps","kept","kg","km","know","known","knows","l","largely","last","lately","later","latter","latterly","least","less","lest","let","lets","like","liked","likely","line","little","'ll","look","looking","looks","ltd","m","made","mainly","make","makes","many","may","maybe","me","mean","means","meantime","meanwhile","merely","mg","might","million","miss","ml","more","moreover","most","mostly","mr","mrs","much","mug","must","my","myself","n","na","name","namely","nay","nd","near","nearly","necessarily","necessary","need","needs","neither","never","nevertheless","new","next","nine","ninety","no","nobody","non","none","nonetheless","noone","nor","normally","nos","not","noted","nothing","now","nowhere","o","obtain","obtained","obviously","of","off","often","oh","ok","okay","old","omitted","on","once","one","ones","only","onto","or","ord","other","others","otherwise","ought","our","ours","ourselves","out","outside","over","overall","owing","own","p","page","pages","part","particular","particularly","past","per","perhaps","placed","please","plus","poorly","possible","possibly","potentially","pp","predominantly","present","previously","primarily","probably","promptly","proud","provides","put","q","que","quickly","quite","qv","r","ran","rather","rd","re","readily","really","recent","recently","ref","refs","regarding","regardless","regards","related","relatively","research","respectively","resulted","resulting","results","right","run","s","said","same","saw","say","saying","says","sec","section","see","seeing","seem","seemed","seeming","seems","seen","self","selves","sent","seven","several","shall","she","shed","she'll","shes","should","shouldn't","show","showed","shown","showns","shows","significant","significantly","similar","similarly","since","six","slightly","so","some","somebody","somehow","someone","somethan","something","sometime","sometimes","somewhat","somewhere","soon","sorry","specifically","specified","specify","specifying","still","stop","strongly","sub","substantially","successfully","such","sufficiently","suggest","sup","sure","t","take","taken","taking","tell","tends","th","than","thank","thanks","thanx","that","that'll","thats","that've","the","their","theirs","them","themselves","then","thence","there","thereafter","thereby","thered","therefore","therein","there'll","thereof","therere","theres","thereto","thereupon","there've","these","they","theyd","they'll","theyre","they've","think","this","those","thou","though","thoughh","thousand","throug","through","throughout","thru","thus","til","tip","to","together","too","took","toward","towards","tried","tries","truly","try","trying","ts","twice","two","u","un","under","unfortunately","unless","unlike","unlikely","until","unto","up","upon","ups","us","use","used","useful","usefully","usefulness","uses","using","usually","v","value","various","'ve","very","via","viz","vol","vols","vs","w","want","wants","was","wasnt","way","we","wed","welcome","we'll","went","were","werent","we've","what","whatever","what'll","whats","when","whence","whenever","where","whereafter","whereas","whereby","wherein","wheres","whereupon","wherever","whether","which","while","whim","whither","who","whod","whoever","whole","who'll","whom","whomever","whos","whose","why","widely","willing","wish","with","within","without","wont","words","world","would","wouldnt","www","x","y","yes","yet","you","youd","you'll","your","youre","yours","yourself","yourselves","you've","z","zero" };

string toLowerCase(string);
string readingText();
void readingQuestions();
string removeStopList(string);
string sentenceMatcher(string, string);
bool isMatched(string, string);
string removePunctuation(string);



string readingText()
{
    fstream file;
    file.open("the_truman_show_script.txt");

    string row, textCase;

    if (file.good()) {
        cout << "Reading truman show script!" << endl;
        getline(file, row);

        while (file) {
            textCase = row;
            textCase = toLowerCase(textCase);

            getline(file, row);
        }
        file.close();

    }
    return textCase;
}

void readingQuestions()
{
    int questionNumber = 1;
    fstream file;
    file.open("questions.txt");

    string row, questionCase, text;
    text = readingText();

    if (file.good()) {
        getline(file, row);
        cout << "Reading questions.text!" << endl;
        while (file) {
            questionCase = row;
            questionCase = toLowerCase(questionCase);
            questionCase = removePunctuation(questionCase);

            cout << questionNumber << ")" << row << endl;
            questionNumber++;

            cout << sentenceMatcher(text, questionCase) << endl << endl;

            getline(file, row);
        }
        file.close();
    }
}

string toLowerCase(string str) {

    for (int i = 0; i < str.length(); i++) {

        if (int(str[i] >= 65) && int(str[i] <= 90)) {          //turns every characters to lower as a ASCII
            str[i] = char(int(str[i]) + 32);
        }
    }
    return str;
}

string removePunctuation(string sentence)
{
    int a;
    string temp = sentence;
    if (sentence == "-1")
    {
        return "Couldn't found the answer.";
    }

    while (!(int(temp[0]) >= 97 && int(temp[0]) <= 122) && !(int(temp[0]) >= 48 && int(temp[0]) <= 57))
    {
        temp = temp.substr(1, temp.length() - 1);
    }

    a = temp.length();
    while (!(int(temp[a - 1]) >= 97 && int(temp[a - 1]) <= 122) && !(int(temp[a - 1]) >= 48 && int(temp[a - 1]) <= 57))
    {
        temp = temp.substr(0, temp.length() - 1);
        a = temp.length();
    }
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ',')
        {
            sentence.erase(i, 1);
        }
    }
    temp = removeStopList(temp);
    return temp;
}

string removeStopList(string str)
{
    int blank1 = 0;
    int blank1temp = 0;
    int blank2 = str.find(" ");
    int blank2temp = 1;
    string temp;
    bool first = 0;

    while (1) {
        temp = str.substr(blank1, (blank2 - blank1));
        for (int n = 0; n < 667; n++)
        {
            if (temp == stopList[n])
            {
                if (blank1 == 0)
                {
                    str.erase(str.find(temp), temp.length() + 1);
                    blank1 = 0;
                    blank2 = str.find(" ");
                    first = 1;
                }

                else
                {
                    str.erase(blank1 - 1, temp.length() + 1);
                    blank1 = blank1temp;
                    blank2 = blank2temp;
                }
            }
        }

        if (first == 1)
        {
            first = 0;
            continue;
        }

        blank1temp = blank1;
        blank2temp = blank2;
        blank1++;
        blank2++;
        blank1 = str.find(" ", blank1) + 1;
        blank2 = str.find(" ", blank2);

        if (blank1 == 0)
        {
            break;
        }

        if (blank2 == -1)
        {
            blank2 = str.length();
        }
    }
    return str;
}

string sentenceMatcher(string txt, string question)
{
    int first;
    int last;
    int lastWordPlace = 0;
    string lastWord = question;
    string sentence;
    string text = txt;

    lastWord = lastWord.erase(0, lastWord.find_last_of(' ') + 1);
    lastWord = lastWord.substr(0, lastWord.length());

    while (true)
    {
        lastWordPlace = txt.find(lastWord, lastWordPlace);
        if (lastWordPlace == -1)
        {
            return "-1";
        }

        first = lastWordPlace;
        while (txt[first] != '.')
        {
            first--;
            if (first <= 0)
            {
                first = 0;
                break;
            }
        }

        last = lastWordPlace;
        while (txt[last] != '.')
        {
            last++;
        }

        sentence = txt.substr(first, last - first);
        sentence = removePunctuation(sentence);
        if (isMatched(sentence, question))
        {
            return sentence;
        }
        else
        {
            lastWordPlace++;
        }
    }
}

bool isMatched(string sentence, string question)
{
    int blank1 = 0;
    int blank2 = question.find(" ");
    int matchCount = 0;
    int sentenceBlankCount = 0;
    int blankPoint = 0;
    string temp;

    while (1)
    {
        blankPoint = sentence.find(" ", blankPoint);
        if (blankPoint == -1)
        {
            break;
        }

        blankPoint++;
        sentenceBlankCount++;
    }

    while (1)
    {
        temp = question.substr(blank1, (blank2 - blank1));

        if (sentence.find(temp) != -1)
        {
            matchCount++;
        }

        blank1++;
        blank2++;
        blank1 = question.find(" ", blank1) + 1;
        blank2 = question.find(" ", blank2);
        if (blank1 == 0)
        {
            break;
        }
        /* if (blank2 == -1) { blank2 = question.length() - 1; }*/

    }

    if (matchCount == sentenceBlankCount)
    {
        return true;
    }

    else
    {
        return false;
    }
}


int main()
{

    clock_t start = clock();

    readingQuestions();

    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;

    cout << "Time elapsed: " << elapsed * 1000000 << " microseconds" << endl;

}
