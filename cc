0:02
hey good afternoon so why don't we do a
0:07
mod together just so that you get the feel for maybe the new uh way I'm kind
0:13
of working on models and then see how actually I kind of do it and
0:19
then see if you want to adopt some of my methods
0:24
so what I want to do is revisit an old uh an older one I've kind of been
0:31
working on a while and see if I can improve on it a little bit um which is essentially the White Queen
0:39
I to my whole life kind of been working on like months ago it feels like ages but let's
0:47
see how we could try to improve this thing so that it actually is a better uh
0:53
a better model so first thing I'm gonna go and create a new folder here and then and I'm going
0:59
to copy all of those image such that I have a working copy that we can edit so
1:06
I'm going to create a new folder I'm going to call that can image V2
1:13
and then I'm gonna copy all of those image that I've got here including the captions
1:20
I'm going to copy all that stuff into the image YouTube folder and within that folder I'm going to
1:27
create another folder that I'm going to call new folder I'm going to call that
1:35
is Raw I'm going to split all of those image in
1:41
there
1:48
story about that that's my bird that's kind of going nuts so I'm not sure if
1:53
you can hear it on the recording but maybe so if you wonder what that was that's my little parrot that's kind of
2:00
uh squawking down downstairs so uh so I've got all those image so
2:06
just so we have a view let's bring them up and one thing that you really want to
2:11
do uh when you have image like that and one thing I've I've learned a lot is you really need to focus on the subject so
2:19
get rid of anything that does not uh that is not the subject and that will
2:25
throw the learning away so we're gonna have to go and edit all those image to
2:31
kind of clean them up a little bit so I'm going to fire up Photoshop here and I'm going to bring the first image
2:37
and yeah we're going to need to do some cropping just to keep that main subject
2:43
in check so we're just going to go and remove a lot of the content and yeah my resolution is not so great I
2:50
see that I'm gonna have like some sub 500 and 512 by 512 resolution
2:57
um yeah that's that's going to be great but I guess we're just going to go with what we've got sometime now you've got to use
3:04
what you've got this one is going to be like fairly small again definitely some what I wouldn't
3:11
recommend like you don't want to go anything less than 512 by 512 otherwise you get into trouble
3:17
but I guess in this case I'm gonna have much choice and I'm Gonna Keep Going edit that one
3:24
so bring it in check so we just add the subject Focus because that's where the
3:30
learning is going to take place right there's no point in keeping all of that stuff around because that's not what we
3:36
want to learn I just want to learn about the one subject and nothing else so I'm just going to keep going and even though
3:43
those are quite small it will still add valuable information to the model they
3:48
will just be smaller kind of learned parts during the training
3:55
so we're going to keep the hands we're going to go with the back of the air and that sounds good let's keep that one
4:05
I'm gonna go ahead and keep the hand here just chop what's not relevant on the
4:11
left and right so I'm just quickly going through here keeping the hands
4:22
chopping the Mad Hatter sort of in the process
4:32
and if that model turns out good I'm going to publish it on civit AI so
4:45
now I've got a whole bunch of image that are repetitive so that could prove like
4:51
partially problematic it might trigger like the learning process might
4:58
get skewed so this one is quite soft but oh well we can try to see if we can fix
5:03
it in some ways so this this so this one so now I'm kind of going to show like some of those are pretty much well
5:10
cropped this one needs some very cropping not what I would call perfectly corrupt
5:17
subject we're just going to go and focus on the one subject here
5:23
make that going kind of looking at the rest of the image
5:29
they are pretty well corrupt again just looking at those ones there's a cropping
5:35
I could crop that one a little further so we get rid of not that way
5:43
save this one to crop this one well I guess we have broth not bad it
5:50
might just there's too much stuff at the bottom here until we can remove there is nothing to learn there for the model so
5:57
that's not even waste those pixels I'm learning stuff that doesn't matter
6:03
uh quickly going through quickly growing through well let me pause the video and I'm gonna go and
6:09
modify all of them and then we're again the reason when it's done okay so I've got pretty much all of the
6:16
image corrupt the way I want so we have like properly framed
6:22
subject all around so what I might want to do at this stage
6:28
is try to see if I can improve these image a little bit to get like
6:34
cleaner faces because some of them have kind of noisy not so great Faces Sometimes they
6:42
are kind of a little bit uh blurry and whatnot so let's see if we could not
6:48
improve that so what I'm going to do is I'm going to copy here the path to this
6:54
image and I'm going to go into Auto one one one
7:00
and I'm going to go under the extras and I'm going to go under batch from directory and I'm going to load my
7:07
folder here I'm going to put the second one as Gan so I'm going to
7:13
process all of those image and just for a good measure I'm going to resize all
7:18
of them to double their resolution as well so we're gonna double up the resolution of each image and then I'm
7:24
going to run a full gan uh clean up on each of these resized
7:29
image to try to improve the quality of the faces so let's not show the results but for
7:36
now we're just gonna go and um do that for all of the image now the one
7:43
issue that I'm gonna have and that's a challenge with how the process goes and
7:49
maybe I'm not going to do it because of that all of my image are all recaptioned where I've got like very short captions
7:56
that says the White Queen you know what maybe we're just going to ditch that and we're just going to go with something basic for this demo so let's not even
8:04
care about those captions that I've got because they are super basic just essentially it's the name of the subject
8:10
and sometime when there's uh not even in this case like sometimes I
8:15
had had it like if there was a crown or not but let's not even bother with that so let's just skip that let's forget
8:23
about it and let's kind of run this uh upscaling and clean up of the actual
8:30
faces and let's see what happens so now if I go here there should be a new folder that should show up when
8:36
Gan starts to run all right so it's generating
8:43
so it should show up as image two raw so it should be in here and now we should start to see the image
8:50
coming up as cleaned up image if we look at them maybe the face is a little bit
8:58
too clean here there's not we've lost a lot of the details of the face so maybe this is a little too strong
9:06
just a tad too strong but sometimes it could help learning the whole model
9:11
because now the image is a lot less noisy uh you know what we're going to go with
9:17
that we're going to go with that kind of a strength of cleaning up of the face and maybe it's going to turn out good
9:24
maybe it's not going to be so good and we're going to need to redo it with lower again but
9:30
it gives you an idea of what you can do to clean up faces so you can go from
9:35
as looking let's see if I can bring like a face that's a brief pre-actual uh
9:42
let's look at this one for example so that's what it looks like before the
9:48
cleanup and let's bring what it looks like after the cleanup because I've got to wait anyway for it to complete
9:55
so this is the new version after a cleanup and this is the upscaling and
10:01
this is the version before clean up and upscaling so you can see that there's a lot less
10:07
blemishes it might be working against us but it does add a lot of details in the
10:13
hair and scaling up things quite well so it should help with the learning of the
10:18
actual Laura so yeah so that's a process I used to
10:23
actually get a better picture for training by just upscaling and then
10:30
cleaning them up with the I guess with gan so I'm going to pause until we have all
10:37
the image cleaned up and I'm not going to resume so that I don't get you to waste your time watching paint dry
10:44
okay thanks to the magic of editing now all the pictures have been upscaled so
10:50
the next step is to go through all of them and make sure there's no bad pictures that we want to discard so
10:56
let's go and look them one by one that one's fine that one's cool that's fine that one is okay uh okay okay yeah
11:05
that's good that's good fine fine okay good good that one sort of view
11:14
from the back this one is kind of uh blurry all around not good so let's
11:19
delete it uh that would be good good good you see
11:25
the back that's okay it's always good to have you heard a subject that one is sort of
11:30
yeah I don't know let's delete it uh this one is better better
11:36
okay okay can you book all good that one's a
11:42
view from the back um I guess I don't know that it adds much
11:47
so let's delete it uh
11:55
yeah that one's not very good I think the face doesn't look good uh it's kind
12:01
of blurry view from the back that's okay okay
12:06
look good look good look good yeah yeah
12:12
that one not so great so I still need it that one's okay okay okay okay okay
12:19
and that's it now let's make sure there is no issues with any like I've noticed
12:27
when it was kind of upscaling that I've got like this one for example is kind of a reverse image of the other one so this
12:34
one is sort of is it or is it not is it reverse I'm
12:40
seeing pots and pans and I'm seeing kind of the same and all and everything it looks like
12:45
this one is like a reverse image maybe when the yeah maybe it's just like the reversal
12:52
let's delete one of them which one do I want to keep I think I've got plenty of face but fewer of the side so I'm going
12:58
to delete that one uh anything else that kind of jumps this
13:03
one I think is fine those are two sides of the same person so she kind of spun
13:08
around so that's okay uh I think everything else looks okay-ish so I think we're pretty much
13:16
good with this data set which would give us about 30 47 image
13:22
um which is not the perfect number 48 would have been better because it's more of a
13:29
a divisible number by four uh what maybe we need to trim a few just so that we
13:36
get to a number that can be divisible by 4 like 44 for example
13:41
um so let's try to cut down three image and we have quite a bit of repetitions
13:46
in this series so maybe we can cut one of them there so this one is looking different this
13:53
one is serious serious so maybe we cut
14:01
maybe we cut I don't know this one or that one let's cut this one
14:08
now we're down to 46. uh what else could we remove
14:15
think that we could probably do away with maybe one
14:20
of those one does not much value there's no face presence so let's delete
14:28
that one um now we need to cut one more which is
14:35
going to get cut
14:43
[Music] yeah here we almost have like a double
14:48
so it looks like they are different but they are doubled so this one she's got the eyes closed this one
14:55
um I think this one is the right side this one is the wrong side so I'm going to cut the wrong side image okay now we're
15:01
down to 44. we're in a good place okay so now that that's done what we
15:07
need to do is even though we could probably do away without caption what I want to do is caption the image such
15:13
that we have like something that's going to say a unique
15:19
keyword like not the White Queen because it's kind of known within a stable
15:24
diffusion so I would rather use more like a dream boot token that is unique like just the few letters from the name
15:32
and then something that also gonna go and describe things that we want the uh
15:39
system to sort of forget like in this case she's wearing her crown she's not wearing her crown so what I want to do
15:45
is have the crown like an optional thing so I'm going to tell stable diffusion in
15:51
a prom that she's wearing a crown on this picture and in this one I'm not going to State it because she doesn't
15:57
have a crown I also see that there is some image where she's holding a sword so I'm going
16:03
to put sword in those captions for those ones and I'm gonna put swords in uh
16:08
where there's no swords I'm just going to go ahead and do a quick captioning of each image and then we're going to get
16:15
back when it's done through the magic of editing
16:20
oh why don't I show you uh that how I
16:26
actually go and do a quick captioning I'm going to use Koya SS GUI I'm gonna
16:32
go under the utilities and I'm just gonna go under uh basic captioning I'm
16:38
gonna put the actual folder that contains the image which would be in
16:43
this case the rug can folder I'm going to copy that
16:49
I'm going to go here put that into
16:54
section here so I want to get text file I want to overwrite any existing captions because I'm going to need to do
17:00
a couple things so first thing I'm going to go and caption each image with the White Queen so t h e w h i t e q u
17:14
e so the White Queen
17:20
so so that should do the trick the White Queen okay so I'm going to use that as
17:27
the caption text so I'm going to caption each image I'm going to delete anything here so by doing that it's going and
17:35
it's going to create a caption text file that contains that first keyword now I
17:40
noticed that I should have put a comma because it's nice to have commas there's a nice trick when you learn the model
17:46
with about comma so what I'm going to do is I'm going to get rid of this and I'm going to put that into the find text box
17:52
and I want to replace this with a the White Queen with the comma at the end so
17:57
if I hit caption and I come back here and now if I open one of them again you're going to see now that we have the
18:03
comma at the end which is good now with that I'm gonna have to go and manually open one by one uh the ones where she
18:10
has it Crown so now I would go in this one I'm going to say type crown because she's got a crown in this
18:17
picture and I want to add that keyword to every picture where she is wearing it
18:22
brown so I'm gonna save this now I need to technically go in every one of them and add that keyword so I'm going to
18:29
pause this so I'm going to add crown and I'm going to add sword to the ones that I want and then that's going to be it
18:36
for the captioning I think saw a captioning is done so now
18:41
if you look at this one for example we've got the White Queen with the sword if we look at that one we've got the
18:48
white queen with the crown so this is how you get through all of the captions uh and you're kind of listing the
18:55
elements that are unique to it each image that are not part of that subject
19:00
but that are actually kind of addition to it like a sword and a crown so now
19:06
that that's done uh what do we need to do next now we need to go ahead and start to configure how we're gonna train
19:12
this thing so if I go back to in image here see we do we have got two folders four
19:19
um uh Koya says to properly train on these ones we need to have a single folder
19:25
that contains the image so I'm going to create a new one here that I'm going to call
19:30
um I'm going to call it what so maybe I could just use the raw Gan folder I'm
19:36
just going to create the subfolder within it and I'm going to do 50 repeats given the
19:42
number of image maybe 50 is going to be good enough so 50 repeats and I'm gonna put
19:48
the keyword that we've got so that we know that this is the keyword so th
19:55
w h t cubed
20:01
u-e-e-n so the White Queen
20:07
I'm gonna go down here select all the files and move all those files inside
20:12
that folder so now we have that and we have a map we should have a matching
20:19
toolkit right t h w h t q n excellent so let's match it okay now that that's done
20:26
we can copy this this folder name and then we can go into Koya SS GUI and
20:34
go under dream boot Laura and we're gonna start to create this lore so first thing I'm
20:40
gonna do is reuse existing parameters I had for I guess the training I was just doing so I'm going to replace this with
20:48
the path for my image in this case I did a set the White Queen image V2 rugan
20:56
and I'm just going to go and copy and you know what I want I usually put Laura
21:02
in there because I want to differentiate data sets for Laura and textual inversions I'm going to go here and just
21:09
going to go and fix I'm going to fix that here I'm just going to go create a new folder I'm going to call Laura
21:19
and I Gotta Throw This one there and that's where I'm going to grab my
21:25
image so going back here replacing that so now
21:31
we have the Laura and now what I can do is I can go and replace all of my existing reference to the folder
21:39
for the project so now we're good so what we want to do next is actually create a folder in the stable where I'm
21:48
going to put my stable diffusion learning that's so that's going to be the output for the model so I'm going to
21:54
call it why Queen and the name of the bottle is going to
22:01
match the actual token that we have for the moment so if I go back here
22:06
uh select this here so the token is that
22:14
going back to oh yeah I'm gonna put that as my
22:19
opening and I'm going to create e version one I'm going to copy this thing and I'm going to put that as my
22:26
configuration file name so I knew it if this was to config and let's save it let's make sure it did save the file
22:33
without any error so to do that I'm just going to go in and see this is where it
22:39
said save there was no error so we're good with the saving um
22:44
I guess I really don't really need a comment in there anymore so we're good with that that that that part is saved
22:51
we have the configuration now the parameters this is where it's interesting right so I'm using uh I
22:59
guess in this case batch size of a 44 is not going to be divisible by eight so that's going to cause some issue 44
23:06
divided by 8 equal 5.5 so I said yeah
23:11
um I think I will just do four I'm going to do batches of four so that 44 is
23:16
totally divisible by eight by four and it's going to give 11 essentially 11 groups of four image so
23:24
I'm going to do train batch size of four uh we're gonna train for one Epoch we
23:31
have a caption extension called the text we're gonna do in my case I'm gonna do
23:37
mix Precision BF 50 16 for the training but I'm Gonna Save in fp16 for
23:43
compatibility for users out there um learning rate this is something I'm
23:50
not gonna set because I'm kind of using a special version of uh the trainer that
23:56
I've got which is using something called uh
24:01
all right Dynamic adaptation which is going to calculate the learning rate for
24:08
me so I'm not going to have to specify the learning right degree right now still has the fields when in that
24:14
version but that's okay because that's going to be ignored if you are to train without Dynamic adaptation then those
24:20
would be good values to start like zero zero zero one is a good value for
24:26
training and interestingly enough most of the time Dynamic adaptation kind of gets close to this value and it stays
24:34
there and it provides pretty good results um again that learning rate scheduler is
24:41
not going to be used it's going to be ignored um I'm not going to cash late and because I'm going to show you something
24:47
that I'm gonna do during the training so I'm going to create a 128 rank uh Laura
24:52
512 by 5 philosophy solution I want definitely to enable buckets because I've got like a mixed aspect ratio data
25:00
set um in the advanced config side token padding that can use that created
25:06
accumulation steps one that's fine prior loss weight one learning rate number of
25:12
Cycles I'm not doing multiple uh epochs so that doesn't matter keep in token
25:19
um I want I don't really want to enforce like the first to look and to be
25:25
at the beginning all the time so I don't care clip skip I found that leaving it to one does better with actual human
25:32
characters token length yeah 75 we don't need to change that shuffled captions
25:38
because I've got like a couple of captions like where something that it's like it's kind of the word for the
25:45
subject and Crown or sword I'm gonna Shuffle the caption such that they could
25:51
be reversed they can come in different orders so that's a good practice I'm gonna do I'm not using 8-bit idle
25:58
anymore because I find that it gives worse result than when you actually don't use it so I'm taking a bit out and
26:04
out use x formers yes color augmentation no flip augmentation no because it's a
26:10
human and flipping will kind of enforce like weird artifacts because it's going
26:15
to make this subject it's going to make it learn to be a subject with kind of
26:20
symmetrical features but humans are never really symmetrical so it's better to leave it up for humans don't have
26:27
scale buckets with Solutions in our case it's not going to matter because we have
26:32
image bigger than 512 by 512 so if we had smaller image that don't upscale
26:38
would keep them small instead of upscaling them up bucket resolution steps this is an
26:44
interesting one um you could go down to like 16 or 32.
26:51
in my case I'm going to try it at 16. so I'm going to do bucket resolution step
26:57
16. so what that says is that an image can be cropped by 16 pixels if it
27:04
doesn't perfectly fit in the resolution uh that's a multiple of 16 that's going
27:10
to get calculated to be close to 512 by 512 and then total number of pixels
27:17
um that is actually helping with the random
27:23
crop instead of Center crop option that I've got here so what that does is that every time an image is going to be
27:29
learned it's going to slightly crop it in a different location so it's going to
27:34
crop the image so it's it's going to do some kind of Jitter of the image so it's going to move around a little bit and if
27:41
this helps stable diffusion alert the model better and the bigger ear the more
27:47
capacity it's going to have to crop in different locations so if you don't want to go too big but you don't want to go
27:53
too small so maybe I'm going to go with 32 in this case so let's try it as dirty
27:59
um Dropout captions every any bug I want to caption every Epoch so I'm not going to
28:06
do any Dropout of epochs for captioning and a rate of captions Dropout I want to drop 10 percent of the captions so there
28:14
is a 10 percent 10 percent chance that at every step the caption is going to be
28:20
dropped out and this is helping give the model more flexibility in styling so
28:26
it's a good option to have enabled uh safe training State I don't really want
28:31
to do that and Max train Epoch number I don't really want to specify and the max
28:38
number of workers for data loader zero in my case I find makes things go faster
28:44
so by setting this to zero it helps make things faster so this is the config I've
28:49
got for this training so now that things are configured I'm going to go and save this to my config file and we're pretty
28:56
much ready to train um as I said I'm going to show you the the
29:01
learning rate curve that is generated by this version by the way this is a version that uh
29:09
that we've got here uh Korean SS we're just going to go into
29:14
the code so I've got like a branch if you want to use it uh you can go and look at the learning rate free branch
29:21
and this is where the code for the actual learning rate free is located
29:28
so if you want to try it that's where you could find it okay so now let's go and start training
29:36
trade model and now let's quickly look at the output and make sure that it's going to start
29:43
fine without any errors so as you can see here I've got my buckets that contains up to 50 image
29:51
each some have more image because the more pictures were kind of fitted within
29:56
this 512 by 512 resolutions after a cropping which is going to help with
30:02
that Jitter of the image during the training and now it's already started training and we are going to train for
30:09
550 steps total and while this trains let's go and grab
30:15
a look at the actual logs so that we can see the actual learning rate in action
30:20
you're going to start to see here that the dynamic learning rate zero and dynamic learning rate one are going to
30:27
start to increase in value over time because the system is is actually
30:33
kind of looking at the results of the training and deciding if the learning rate should be increased to produce even
30:40
better results so as the training progress this learning rate is going to change throughout the training and this
30:48
is what the dynamic adaptation does it kind of calculates the training the learning rate for you based on the
30:54
results of each training steps so let's go and look at the actual
31:01
folder that contains our logs
31:07
so here this is the folder that contains the logs I'm going to copy that last path and now I'm going to go here and go
31:14
into my uh terminal window where I've got
31:23
the ability to fire up the tensor award which is these which is the viewer to
31:28
actually get to view the logs as it runs I'm going to fire up tensorboard
31:34
and I'm gonna gonna and I'm gonna go and control click on localhost 6006 so it's
31:41
going to open up a view of tensorboard and as you can see we're already starting to see the loss average for the
31:48
actual training of the model and here you can see the ramp up of the actual
31:53
learning rate over the steps that were done so far so it's kind of ramping up
31:59
the learning rate and it kind of plateaued your ear a little bit then kind of plateaued there and now it's got
32:04
like a big Plateau so I think it figured out that this is the appropriate learning rate for this model and if
32:13
everything goes well it's going to stick with that learning rate for the rest of the training session
32:18
and I believe that if you are to go and look at the actual value of that learning
32:26
rate which is uh 2.86 e minus zero five
32:31
for the uh text encoder and 1.14 minus 0
32:38
4 for the unit this is pretty much the value or close to the
32:45
value that we've got as the default this one is twice as small because I'm kind of
32:51
forcing it that way through the hard-coded version of the dynamic adaptation that I've got but this is
32:59
actually pretty close to what we want and what we have in the default
33:04
configuration so that goes to show that that default value of
33:10
0.0001 was actually pretty accurate as being one of the good training value for
33:18
low rows as far as we are concerned so we're gonna we're gonna need to go to
33:25
650 steps so I'm going to pause this and let the training complete and then we
33:30
can look at the result of the model okay so the training just completed and
33:38
as you can see uh we have a fairly nice curve of lots of learning happening at the
33:45
beginning learning very strongly and then it kind of gets into a iteration
33:50
phase here where it just keeps iterating and iterating and it kind of gets better at this point it kind of started to rise
33:57
a little bit so what I would kind of if I was to redo this training it would probably stop at around
34:05
500 or 400 and sort of 70 steps or near
34:11
that point so that's because after that it seems to kind of Rise a little bit then it pretty it's stopped improving it
34:18
pretty started to kind of burn a little bit the models at this point it's over baked but yeah this nice downward
34:27
sloping learning rate curve here is kind of what you want to see and when it kind of rises again like that that's kind of
34:33
a sign that things are not improving much and probably the model is just like
34:38
starting to burn at that point but now let's have a look at what this model looks like so
34:45
um the model was saved again in this location as the White Queen
34:50
v1.0 so I'm just going to copy that and we're gonna go here in stable
34:55
diffusion um and I've had another video I just completed and then recorded and
35:01
published on YouTube but we're going to leverage that same prompt and we're just
35:07
going to replace the Laura that was in this old one with the new one that we
35:12
just created so the White Queen and I'm gonna take the actual token here or the trigger
35:19
word I should say and put that as the trigger word after such that it triggers
35:25
the whole model and then let's make sure there's nothing in there that would kind of break things apart okay kind of bold
35:33
red lips she doesn't have already built so we're just gonna go and take out the red lips
35:40
version here uh um I guess slim body wearing a pebble
35:46
well we don't really want to change our address we want to see if she's going to come with her
35:52
standard white queen dress and we can potentially put it back after it and see if we can change like her actual dress
35:58
or if the model is so rigid that it's not going to allow us to do that okay so I think that's pretty good uh
36:05
everything else is fine so let's give it a try let's generate four pictures of the White Queen in a
36:13
garden and hopefully we're gonna get good results I don't know so far it looks
36:19
pretty good ah yeah that looks like our
36:27
and I guess the garden as you can see it's picking up a lot of the look and feel of the image that uh was the
36:35
sitting for the movie um so a lot of those image so what does it
36:42
look over that one is looking great the face but that's because it's kind of a small smallish piece uh yeah that one
36:49
looks pretty good looking good this one Earth face is a
36:55
little weird but that we could try something like the what I was showing up in the other video let's send that to extras let's
37:05
double up the resolution of that one image so a single image we're just gonna
37:11
double up with swin IR okay so let's run it and then once it's doubled I'm going to
37:18
send it to in paint and we're going to see if we can actually fix the face in a
37:25
right way so now I've got the image what I'm going what I want to do is go back here send this picture which is the bad
37:31
one to in paint now we have all of the text about the Laura and the config there and I want to go back into extras
37:38
and take that abreast picture and send it to in pane so it's going to replace that version that we had but with the
37:46
double resolution version and now I'm just going to go in
37:51
mask the face that we want to sort of in paint
37:56
it may be a better one okay and I'm going to go here and make
38:02
sure we have 512 by 512 resolution for the rendering so we only masked that's
38:09
fine we're going to give it some mean way to recreate so let's try to generate a new face and see if the model is good
38:15
enough to get us a better face indeed when the faces so now we have a much
38:21
much better face compared to what we used to have here if you look at the original face pretty bad if you look at
38:28
the new in painted face much better we could even try to generate a new version just to see if we could get something
38:34
even better just as a test and yeah indeed we have a much like the
38:42
two previous faces were pretty good so now we have a much better version so that's how again you can quickly fix a
38:49
face that kind of looks a little weird and fix it and we could even try to fix this one I don't know if it's going to
38:55
work but like if we wanted to really try we could go and send it extra
39:00
double up the resolution
39:11
send that to in paint remove that put a proper mask around the face for this one
39:18
and let's make sure we have 512 by 512
39:24
let's see how we could improve that face
39:31
much better so now we have a better face on that
39:36
character so yeah so I think that model is uh looking not so bad uh I think it's
39:45
again the Gan might be a little bit too strong because I think it gives like a little bit too clean looking of a face
39:53
but everything else looks very good like the the pearl necklace the hair evening
40:00
is awesome I think we just need to get that face a little less perfect
40:07
so again that's not a bad bottle it may actually be good in some occasions to
40:13
have a model that produces perfect faces like that like so very clean looking but
40:19
I guess it may not be to everyone's face so to fix that then it would be to rerun
40:25
the Gan cleanup but with the Lesser strike maybe at 50 percent instead of a
40:30
full strength and now let's see if we can actually get her to wear a different
40:35
dress so if we go and say a wearing a headlam a Peplum dress
40:42
whatever it means so let's try it and let's see if that would actually enable us to change the model and let's
40:50
let's see it looks fairly rigid as far as the color goes because it's learned
40:55
that she's wearing white now the dress looks slightly different
41:01
from the one that she's usually wearing um
41:06
but again the biking them all really really learned that one dress
41:12
and it's going to be very difficult to make it forget about that one so
41:18
yeah it's uh I think we really learned the look of the character with the dress and with
41:25
the hairstyle and with the face makeup and whatnot uh I guess as you can see
41:30
here none of these characters have a crown the beauty of what we've done is interior should be able to see the White
41:38
Queen I could say crown now that should create image of the
41:44
White Queen wearing a crown because the Laura should have learned based on the
41:50
captioning what Crown means and yep indeed now she's wearing her crown when
41:57
we invoke the crown using the prompt
42:03
and we could even go as far as trying to ask for a sword unless there's only like
42:10
three or four picture where a sword was actually captioned so I'm not sure if it's gonna do a very good job
42:16
but if we look at all of those the actual model is pretty actually pretty good I mean the quality
42:24
is pretty darn good it's very it's looking a lot like the pictures uh of
42:31
the movie and let's try to ask for a sword and let's see if that's going to work I
42:39
don't know can we get er to wear her crown with a
42:45
sword in her hands
42:53
he could kind of tries to do that maybe there is where there was not enough pictures of her holding a sword so it's
43:01
kind of trying it but it's doing a pretty bad job about it so not surprised because there was so
43:08
few image uh yeah so the sword thing is well she was not wearing a crown when
43:14
she was holding a sword so in theory by removing the crown we might be able to
43:20
get better results yeah I'm curious to see if that would work
43:29
the sword is going to come out better now that we are not fighting with the fact that we want a crown and the sword
43:35
in a series of pictures that were never seen now didn't do that great of a job
43:41
with the uh even without the crown but it gives you an idea uh clearly that
43:48
model didn't have enough enough swords in the uh data set to properly learn
43:53
what the sword is in the context but it kind of gives you a hint of
43:58
of a sword so you can see that it was learned in in a weird way but it was learned so anyway I hope you guys found
44:07
this uh interesting and that's how you can create a home and if you're interested I'm gonna probably publish
44:14
that exact model that I just did here on civit AI and I'm going to put the link
44:19
in the description of the YouTube video so you can go and try to play with it and uh enjoy
44:25
bye guys
