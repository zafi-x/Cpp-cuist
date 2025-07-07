#include <iostream>

using namespace std;

class MediaPlayer
{
public:
    virtual void play()
    {
        cout << "Base class media playing" << endl;
    }
    virtual void stop()
    {
        cout << "Base class media stopped" << endl;
    }
};
class AudioPlayer : public MediaPlayer
{
public:
    void play() override
    {
        cout << "playing audio track" << endl;
    }
    void stop() override
    {
        cout << "stopping audio playback" << endl;
    }
};
class VideoPlayer : public MediaPlayer
{
public:
    void play() override
    {
        cout << "playing video file" << endl;
    }
    void stop() override
    {
        cout << "stopping video playback" << endl;
    }
};
class StreamingPlayer : public MediaPlayer
{
public:
    void play() override
    {
        cout << "Streaming Content Online " << endl;
    }
    void stop() override
    {
        cout << "Ending stream session" << endl;
    }
};
int main()
{
    MediaPlayer *player1 = new AudioPlayer();
    MediaPlayer *player2 = new VideoPlayer();
    MediaPlayer *player3 = new StreamingPlayer();

    player1->play();
    player1->stop();
    player2->play();
    player2->stop();
    player3->play();
    player3->stop();

    delete player1;
    delete player2;
    delete player3;

    return 0;
}