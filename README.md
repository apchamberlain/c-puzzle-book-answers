# c-puzzle-book-answers
Answers with commentary/discussion for selected problems from
_The C Puzzle Book, 2nd ed._ by Alan R. Feuer
([buy at Amazon](http://www.amazon.com/The-Puzzle-Book-Alan-Feuer/dp/0201604612)).

(Do not confuse this with
_[The C Answer Book](http://www.amazon.com/The-Answer-Book-Solutions-Programming/dp/0131096532)_--also
a worthy tome, but completely different.)

The number of programming books that have stayed in print, mostly
unchanged, for 20 years, is pretty small.  _The C Puzzle Book_ is an
excellent resource for anyone looking for help learning the arcane
corners of C.  I had intensive instruction in C programming in
college, and used the language for several years professionally
writing device drivers, but I was still surprised, working through the
problems in this book, by how many
intricacies there are to the language that I did not understand
clearly.  Interestingly, many of these details are covered in the
specification of the language--i.e., it's not like they are undefined
behavior because the language has no formal specification other than
its implementation (some widely used languages fall into the latter
category, unfortunately for their heavy users--Ruby comes to mind).
Rather, these details _are_ specified, but poorly understood because they do not
come up every day.  Even with a small language it is not easy to keep
all the rules in mind all the time.

_The C Puzzle Book_ includes answers for the exercises, but the
explanations are sometimes terse or give you the *why* but not the
*how*.  In this repository, as an ongoing project, I'm trying to write down
notes on the problems that I found more interesting or surprising,
with my own more detailed commentary than the original book.  For most
of the
problems that I thought were worth commentary, I've also saved you the
trouble of typing in the code--I had to type it in and run it myself
in order to understand it!

Pull requests will be gratefully considered!  Help me make this another good
source of online C info.

# Copyright Information

All files in this repository with names of the form `[NUMBER]-code.c`
are copyright 1999 Alan R. Feuer.

The preceding paragraph constitutes my acknowledgement in good faith
of the copyright terms applicable to the material here duplicated from
the book _The C Puzzle Book_.  I believe that my act of reproducing
these C language source files falls under the doctrine of fair use,
specifically the provision for works of commentary or criticism.  If I
am incorrect, please send email to `apchamberlain@gmail.com`; I will
gladly remove these files from public availability if notified
by a person with legal authority to make such requests.

All other material in this GitHub repositary is copyright Alex
Chamberlain under the
terms of the GNU General Public License.  See the file `LICENSE`.
