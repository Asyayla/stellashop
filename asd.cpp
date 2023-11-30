#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
     int name;
     double amount;
     char choice, clothes, pantchoice, tshirtchoice,continuechoice, watchchoice, braceletchoice, necklacechoice, earringchoice, jewelerychoice, ringchoice, skirtchoice, sweatshirtchoice, topbodychoice, coatjacketchoice, shirtblousechoice, knitjumperchoice, sockschoice, shoes, sandalsslipperschoice, sneakerschoice, shoeschoice, bootschoice, bagschoice, handbagschoice, shoulderbagchoice, otherbagchoice;
     cout << "Hello, Welcome to Stella Store \n";
     do{ 
          cout <<  "How much money do you  have?\n";
          cin >> amount;
          cin.ignore();
          do{
               cout << "What do you wanna buy? \n";
               cout << "1-Clothes Section 2-Shoes Section 3-Bags Section 4-Watches Section 5-Jewelery Section \n\n";
               cin >> choice;
               switch(choice) { 
                    case '1':
                    cout << "Which kind of clothes do you wanna buy? \n";
                    cout<< "A-Pants B-T-shirt C-Skirt,Shorts D-Sweatshirt E-Top,Body F-Coat,Jacket G-Shirt,Blouse H-Knitwear,Jumper I-Socks \n\n";
                    cin >> clothes;
                    switch(clothes){
                         case 'A':
                              cout << "0-Faux leather flared pants for 45.90$ \n";
                              cout << "1-Classic black fabric pants for 37.80$ \n";
                              cout << "2-Suede pants for 299.90$ \n";
                              cout << "3-High rise buttoned leggins for 35.90$ \n";
                              cout << "4-Wide leg plush pants for 35.90$ \n";
                              cout << "5-Satin effect pants for 49.90$ \n";
                              cout << "6-Cargo pants for 82$ \n";
                              cin >> pantchoice;
                                   switch(pantchoice) {
                                        case '0':
                                             cout << "You bought a Faux leather  flared pants for 45.90$ \n";
                                             amount -=45.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Classic black fabric pants for 37.80$ \n";
                                             amount -=37.80;
                                             break;
                                        case '2':
                                             cout << "You bought a Suede pants for 299.90$ \n";
                                             amount -=299.90;
                                             break;
                                        case '3':
                                             cout << "You bought a High rise buttoned leggins for 35.90$ \n";
                                             amount -=35.90;
                                             break;
                                        case '4':
                                             cout << "You bought a Wide leg plush pants for 35.90 \n";
                                             amount -=35.90;
                                             break;
                                        case '5':
                                             cout << "You bought a Satin effect pants for 49.90$ \n";
                                             amount -=49.90;
                                             break;
                                        case '6':
                                             cout << "You bought a Cargo pants for 82$ \n";
                                             amount -=82;
                                             break;
                                   }
                                   break;
                         case 'B':
                              cout << "0-Ribbed cotton t-shirt for 27.90$ \n";
                              cout << "1-Black basic t-shirt for 14.99$ \n";
                              cout << "2-Metallic t-shirt for 31.90$ \n";
                              cout << "3-Dark blue cropped stretch t-shirt for 10.90$ \n";
                              cout << "4-Gray washed t-shirt for 25.90$ \n";
                              cout << "5-Striped t-shirt for 18.90$ \n";
                              cout << "White straight t-shirt for 21$ \n";
                              cin >> tshirtchoice;
                                   switch(tshirtchoice) {
                                        case '0':
                                             cout << "You bought a Ribbed cotton t-shirt for 27.90$ \n";
                                             amount -=27.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Black basic t-shirt for 14.99$ \n";
                                             amount -=14.99;
                                             break;
                                        case '2':
                                             cout << "You bought a Metallic t-shirt for 31.90$ \n";
                                             amount -=31.90;
                                             break;
                                        case '3':
                                             cout << "You bought a Dark blue cropped stretch t-shirt for 10.90$ \n";
                                             amount -=10.90;
                                             break;
                                        case '4':
                                             cout << "You bought a Gray washed t-shirt for 25.90$ \n";
                                             amount -=25.90;
                                             break;
                                        case '5':
                                             cout << "You bought a White straight t-shirt for 21$ \n";
                                             amount -=21;
                                             break;
                                   }
                                   break;
                         case 'C':
                              cout << "0-Satin effect midi skirt for 54.90$ \n";
                              cout << "1-Black mini skirt for 20.90$  \n";
                              cout << "2-Red leather skirt for 35$ \n";
                              cout << "3-Pleated skort for 45$ \n";
                              cout << "4-Satin effect cargo mini skirt for 60$ \n";
                              cout << "5-Pink skirt for 27$ \n";
                              cout << "6-Denim skirt for 41$ \n";
                              cout << "7-High rise denim shorts for 25$ \n";
                              cout << "8-Faux leather shorts for 45.90$ \n";
                              cout << "9-White pleated shorts for 37.90$ \n";
                              cin >> skirtchoice;
                                   switch(skirtchoice) {
                                        case '0':
                                             cout << "You bought a Satin effect midi skirt for 54.90$ \n";
                                             amount -=54.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Black mini skirt for 20.90$ \n";
                                             amount -=20.90;
                                             break;
                                        case '2':
                                             cout << "You bought a Red leather skirt for 35$ \n";
                                             amount -=35;
                                             break;
                                        case '3':
                                             cout << "You bought a Pleated skort for 45$ \n";
                                             amount -=45;
                                             break;
                                        case '4':
                                             cout << "You bought a Satin effect cargo mini skirt for 60$ \n";
                                             amount -=60;
                                             break;
                                        case '5':
                                             cout << "You bought a Pink skirt  for 27$ \n";
                                             amount -=27;
                                             break;
                                        case '6':
                                             cout << "You bought a Denim skirt for 41$ \n";
                                             amount -=41;
                                             break;
                                        case '7':
                                             cout << "You bought a High rise denim shorts for 25$ \n";
                                             amount -=25;
                                             break;
                                        case '8':
                                             cout << "You bought a Faux leather shorts for 45.90$ \n";
                                             amount -=45.90;
                                             break;
                                        case '9':
                                             cout << "You bought a White pleated shorts for 37.90$ \n";
                                             amount -=37.90;
                                             break; 
                                   }
                                   break;
                         case 'D': 
                              cout << "0-Washed effect gray crop sweatshirt for 90.90$\n";
                              cout << "1-Black sweatshirt for 43$ \n";
                              cout << "2-Oversized white and black sweatshirt for 62.90$ \n";
                              cout << "3-Zipper oversized black sweatshirt for 45.90$ \n";
                              cout << "4-Green printed sweatshirt for 78.90$ \n";
                              cout << "5-Brown oversized sweatshirt for 80$ \n";
                              cout << "White sweatshirt for 34.90$ \n";
                              cin >> sweatshirtchoice; 
                                   switch(sweatshirtchoice) {
                                        case '0':
                                             cout << "You bought a Washed effect gray crop sweatshirt for 90.90$ \n";
                                             amount -=90.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Black sweatshirt for 43$ \n";
                                             amount -=43;
                                             break;
                                        case '2':
                                             cout << "You bought a Oversized white and black sweatshirt for 62.90$ \n";
                                             amount -=62.90;
                                             break;
                                        case '3':
                                             cout <<  "You bought a Zipper oversized black sweatshirt for 45.90$ \n";
                                             amount -=45.90;
                                             break;
                                        case '4':
                                             cout << "You bought a Green printed sweatshirt for 78.90$ \n";
                                             amount -=78.90;
                                             break;
                                        case '5':
                                             cout << "You bought a Brown oversized sweatshirt for 80$ \n";
                                             amount -=80;
                                             break;
                                        case '6':
                                             cout << "You bought a White sweatshirt for 34.90$ \n";
                                             amount -=34.90;
                                             break;
                                   } 
                                   break;
                         case 'E':
                              cout << "0-Sequin halter top for 99.90$ \n";
                              cout << "1-Sequin bandeau top for 49.90$ \n";
                              cout << "2-Checkered top for 35.90$ \n";
                              cout << "3-Buttoned knit top for 40$ \n";
                              cout << "4-Stretchy top for 34.90$ \n";
                              cout << "5-Metallic thread bow top for 69.90$ \n";
                              cout << "6-Structured strapless top for for 39.90$ \n";
                              cout << "7-Fitted hook closure knit top for 25$ \n";
                              cout << "8-Cut out knit wool blend sweater for 55$ \n";
                              cout << "9-Underwire corset for 59.90$ \n";
                              cin >> topbodychoice;
                                   switch(topbodychoice) {
                                        case '0':
                                             cout << "You bought a Sequin halter top for 99.90$ \n";
                                             amount -=99.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Sequin bandeau top for 49.90$ \n";
                                             amount -=49.90;
                                             break;
                                        case '2':
                                             cout << "You bought a Checkered top for 35.90$ \n";
                                             amount -=35.90;
                                             break;
                                        case '3':
                                             cout << "You boght a Buttoned knit top for 40$ \n";
                                             amount -=40;
                                             break;
                                        case '4':
                                             cout << "You bought a Stretchy top for 34.90$ \n";
                                             amount -=34.90;
                                             break;
                                        case '5':
                                             cout << "You bought a Metallic thread bow top for 69.90$ \n";
                                             amount -=69.90;
                                             break;
                                        case '6':
                                             cout << "You bought a Structured strapless top for 39.90$ \n";
                                             amount -=39.90;
                                             break;
                                        case '7':
                                             cout << "You bought a Fitted hook closure knit top for 25$ \n";
                                             amount -=25;
                                             break;
                                        case '8':
                                             cout << "You boght a Cut out knit wool blend sweater for 55$ \n";
                                             amount -=55;
                                             break;
                                        case '9':
                                             cout << "You bought a Underwire corset for 59.90$ \n";
                                             amount -=59.90;
                                             break;
                                   }
                                   break;
                         case 'F':
                              cout << "0-Cable knit coat for 109$ \n";
                              cout << "1-Soft oversized coat for 120$ \n";
                              cout << "2-Cropped faux fur jacket for 199.90$ \n";
                              cout << "3-Denim jacket for 59.90$ \n";
                              cout << "4-Faux leather coat for 89.90$ \n";
                              cout << "5-Short knit coat with scarf for 139$ \n";
                              cout << "6-Metallic finish puffer anorak for 94.90$ \n";
                              cout << "7-Blazer jacket for 59.90$ \n";
                              cout << "8-Quilted printed jacket for 69.90$ \n";
                              cout << "9-Bomber jacket for 399.90$ \n";
                              cin >> coatjacketchoice;
                                   switch (coatjacketchoice) {
                                        case '0':
                                             cout << "You bought a Cable knit coat for 109$ \n";
                                             amount -=109;
                                             break;
                                        case '1':
                                             cout << "You bought a Soft oversized coat for 120$ \n";
                                             amount -=120;
                                             break;
                                        case '2':
                                             cout << "You bought a Cropped faux fur jacket for 199.90$ \n";
                                             amount -=199.90;
                                             break;
                                        case '3':
                                             cout << "You bought a Denim jacket for 59.90$ \n";
                                             amount -=59.90;
                                             break;
                                        case '4':
                                             cout << "You bought a Faux leather coat for 89.90$ \n";
                                             amount -=89.90;
                                             break;
                                        case '5':
                                             cout << "You bought a Short knit coat with scarf for 139$ \n";
                                             amount -=139;
                                             break;
                                        case '6':
                                             cout << "You bought a Metallic finish puffer anorak for 94.90$ \n";
                                             amount -=94.90;
                                             break;
                                        case '7':
                                             cout << "You bought a Blazer jacket for 59.90$ \n";
                                             amount -=59.90;
                                             break;
                                        case '8':
                                             cout << "You bought a Quilted printed jacket for 69.90$ \n";
                                             amount -=69.90;
                                             break;
                                        case '9':
                                             cout << "You bought a Bomber jacket for 399.90$ \n";
                                             amount -=399.90;
                                             break;
                                   }
                                   break;
                         case 'G':
                              cout << "0-Black shirt for 24.90$ \n";
                              cout << "1-White oversized skirt for 34.90$ \n";
                              cout << "2-Satin effect shirt for 54.90$ \n";
                              cout << "3-Oversized trench coat shirt for 39.90$ \n";
                              cout << "4-Asymmetric cape blouse for 99.90$ \n";
                              cout << "5-Metallic shirt for 69.90$ \n";
                              cout << "6-Floral print blouse for 44.90$ \n";
                              cout << "7-Frilly blouse 72$ \n";
                              cout << "8-Striped bow blouse for 49.90$ \n";
                              cout << "9-Denim shirt for 88.90$ \n";
                              cin >> shirtblousechoice;
                                   switch(shirtblousechoice) {
                                        case '0':
                                             cout << "You bought a Black shirt for 24.90$ \n";
                                             amount -=24.90;
                                             break;
                                        case '1':
                                             cout << "You bought a White oversized skirt for 34.90$ \n";
                                             amount -=34.90;
                                             break;
                                        case '2':
                                             cout << "You bought a Satin effect shirt for 54.90$ \n";
                                             amount -=54.90;
                                             break;
                                        case '3':
                                             cout << "You bought a Oversized trench coat shirt for 39.90$ \n";
                                             amount -=39.90;
                                             break;
                                        case '4':
                                             cout << "You bought a Asymmetric cape blouse for 99.90$ \n";
                                             amount -=99.90;
                                             break;
                                        case '5':
                                             cout << "You bought a Metallic shirt for 69.90$ \n";
                                             amount -=69.90;
                                             break;
                                        case '6':
                                             cout << "You bought a Floral print blouse for 44.90$ \n";
                                             amount -=44.90;
                                             break;
                                        case '7':
                                             cout << "You bought a Frilly blouse for 72$ \n";
                                             amount -=72;
                                             break;
                                        case '8':
                                             cout << "You bought a Striped bow blouse for 49.90$ \n";
                                             amount -=49.90;
                                             break;
                                        case '9':
                                             cout << "You bought a Denim shirt for 88.90$ \n";
                                             amount -=88.90;
                                             break; 
                                   }
                                   break;
                         case 'H':
                              cout << "0-Oversized black jumper for 44.90$ \n";
                              cout << "1-Metallic thread knit crop for 29.90$ \n";
                              cout << "2-Basic rib knit sweater for 35.90$ \n";
                              cout << "3-Zippered wool bomber for 109$ \n";
                              cout << "4-Alpaca and wool blend zip sweater for 79.90$ \n";
                              cout << "5-Furry collar knitwear for 149.90$ \n";
                              cout << "6-Cashmere knit sweater for 169$ \n";
                              cout << "7-High collar knit sweater for 49.90$ \n";
                              cout << "8-Basit knit sweater for 39.90$ \n";
                              cin >> knitjumperchoice;
                                   case '0':
                                        cout << "You bought a Oversized black jumper for 44.90$ \n";
                                        amount -=44.90;
                                        break;
                                   case '1':
                                        cout << "You bought a Metallic thread knit crop for 29.90$ \n";
                                        amount -=29.90;
                                        break;
                                   case '2':
                                        cout << "You bought a Basic rib knit sweater for 35.90$ \n";
                                        amount -=35.90;
                                        break;
                                   case '3':
                                        cout << "You bought a Zippered wool bomber for 109$ \n";
                                        amount -=109;
                                        break;
                                   case '4':
                                        cout << "You bought a Alpaca and wool blend zip sweater for 79.90$ \n";
                                        amount -=79.90;
                                        break;
                                   case '5':
                                        cout << "You bought a Furry collar knitwear for 149.90$ \n";
                                        amount -=149.90;
                                        break;
                                   case '6':
                                        cout << "You bought a Cashmere knit sweater for 169$ \n";
                                        amount -=169;
                                        break;
                                   case '7':
                                        cout << "You bought a High collar knit sweater for 49.90$ \n";
                                        amount -=49.90;
                                        break;
                                   case '8':
                                        cout << "You bought a Basic knit sweater for 39.90$ \n";
                                        amount -=39.90;
                                        break;
                                   }
                                   break;
                         case 'I':
                              cout << "0-Cherry socks for 8.90$ \n";
                              cout << "1-Cow socks for 11.90$ \n";
                              cout << "2-Nike socks for 20$ \n";
                              cout << "3-Squidward's socks for 31$ \n";
                              cout << "4-Bugs bunny socks for 21$ \n";
                              cout << "5-Cactus socks for 10$ \n";
                              cout << "6-Black pantyhose for 15$ \n";
                              cout << "7-Skin socks for 9.90$ \n";
                              cout << "8-Black lace sexy socks for 24.90$ \n";
                              cin >> sockschoice;
                                   switch(sockschoice) {
                                        case '0':
                                             cout << "You bought a Cherry socks for 8.90$ \n";
                                             amount -=8.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Cow socks for 11.90$ \n";
                                             amount -=11.90;
                                             break;
                                        case '2':
                                             cout << "You bought a Nike socks for 20$ \n";
                                             amount -=20;
                                             break;
                                        case '3':
                                             cout << "You bought a Squidward's socks for 31$ \n";
                                             amount -=31;
                                             break;
                                        case '4':
                                             cout << "You bought a Bugs bunny socks for 21$ \n";
                                             amount -=21;
                                             break;
                                        case '5':
                                             cout << "You bought a Cactus socks for 10$ \n";
                                             amount -=10;
                                             break;
                                        case '6':
                                             cout << "You bought a Black pantyhose for 15$ \n";
                                             amount -=15;
                                             break;
                                        case '7':
                                             cout << "You bought a Skin socks for 9.90$ \n";
                                             amount -=9.90;
                                             break;
                                        case '8':
                                             cout << "You bought a Black lace sexy socks for 24.90$ \n";
                                             amount -=24.90;
                                             break;
                                   }
                                   break;
                    case '2':
                         cout << "Which kind of shoes do you wanna buy? \n";
                         cout << "A-High Heels Section B-Sandals,Slippers Section C-Sneakers Section D-Boots\n";
                         cin >> shoeschoice;
                         switch(shoeschoice) {
                              case 'A':
                              cout << "0-Black leather high heels for 2.499$ \n";
                              cout << "1-Mesh textured stilettos for 1.999$ \n";
                              cout << "2-Red silk heeled shoes with buckle detail for 1.250$ \n";
                              cout << "3-Black leather heeled shoes with chain detail for 1.499$ \n";
                              cout << "4-Pink feathered heels for 999$ \n";
                              cout << "5-Dark red high heels for 1.299$ \n";
                              cout << "6-Micro stone heeled shoes for 799$ \n";
                              cout << "7-Single strap heeled shoes for 1.152$ \n";
                              cout << "8-Metallic high heels for 699$ \n";
                              cin >> shoeschoice;
                                   switch(shoeschoice) {
                                        case '0':
                                             cout << "You bought a Black leather high heels for 2.499$ \n";
                                             amount -=2.499;
                                             break;
                                        case '1':
                                             cout << "You bought a Mesh textured stilettos for 1.999$ \n";
                                             amount -=1.999;
                                             break;
                                        case '2':
                                             cout << "You bought a Red silk heeled shoes with buckle detail for 1.250$ \n";
                                             amount -=1.250;
                                             break;
                                        case '3':
                                             cout << "You bought a Black leather heeled shoes with chain detail for 1.499$ \n";
                                             amount -=1.499;
                                             break;
                                        case '4':
                                             cout << "You bought a Pink feathered heels for 999$ \n";
                                             amount -=999;
                                             break;
                                        case '5':
                                             cout << "You bought a Dark red high heels for 1.299$ \n";
                                             amount -=1.299;
                                             break;
                                        case '6':
                                             cout << "You bought a Micro stone heeled shoes for 799$ \n";
                                             amount -=799;
                                             break;
                                        case '7':
                                             cout << "You bought a Single strap heeled shoes for 1.152$ \n";
                                             amount -=1.152;
                                             break;
                                        case '8':
                                             cout << "You bought a Metallic high heels for 699$ \n";
                                             amount -=699;
                                             break;
                                   }
                                   break;
                              case 'B':
                              cout << "0-Black stone sandals for 149.90$ \n";
                              cout << "1-Pink furry heeled slippers for 499$ \n";
                              cout << "2-White sandals for 199$ \n";
                              cout << "3-Knitted sandals for 999$ \n";
                              cout << "4-Mom's slippers for 399.90$ \n";
                              cout << "5-Special design crocs for 2.999$ \n";
                              cout << "6-Red high heels crocs for 799.90$ \n";
                              cout << "7-Straw flip-flop sandals for 1.099$ \n";
                              cout << "8-Flip-flops for 299$ \n";
                              cin >> sandalsslipperschoice;
                                   switch(sandalsslipperschoice) {
                                        case '0':
                                             cout << "You bought a Black stone sandals for 149.90$ \n";
                                             amount -=149.90;
                                             break;
                                        case '1':
                                             cout << "You bought a Pink furry heeled slippers for 499$ \n";
                                             amount -=499;
                                             break;
                                        case '2':
                                             cout << "You bought a White sandals for 199$ \n";
                                             amount -=199;
                                             break;
                                        case '3':
                                             cout << "You bought a Knitted sandals for 999$ \n";
                                             amount -=999;
                                             break;
                                        case '4':
                                             cout << "You bought a Mom's slippers for 399.90$ \n";
                                             amount -=399.90;
                                             break;
                                        case '5':
                                             cout << "You bought a Special design crocs for 2.999$ \n";
                                             amount -=2.999;
                                             break;
                                        case '6':
                                             cout << "You bought a Red high heels crocs for 799.90$ \n";
                                             amount -=799.90;
                                             break;
                                        case '7':
                                             cout << "You bought a Flip flops for 299$ \n";
                                             amount -=299;
                                             break;
                                   }
                                   break;
                              case 'C':
                                   cout << "0-Original converse forse for 2.999$ \n";
                                   cout << "1-Vintage converse for 3.299$ \n";
                                   cout << "2-Classic vans for 3.499$ \n";
                                   cout << "3-Nike air force for 3.799$ \n";
                                   cout << "4-Air jordan for 4.499$ \n";
                                   cout << "5-Track sneakars for 3.299 \n";
                                   cout << "6-Nike dunk for 3.099$ \n";
                                   cout << "7-Adidas superstar for 2.799$ \n";
                                   cin >> sneakerschoice;
                                        switch(sneakerschoice) {
                                             case '0':
                                                  cout << "You bought a Original converse for 2.999$ \n";
                                                  amount -=2.999;
                                                  break;
                                             case '1':
                                                  cout << "You bought a Vintage converse for 3.299$ \n";
                                                  amount -=3.299;
                                                  break;
                                             case '2':
                                                  cout << "You bought a Classic vans for 3.499$ \n";
                                                  amount -=3.499;
                                                  break;
                                             case '3':
                                                  cout << "You bought a Nike air force for 3.799$ \n";
                                                  amount -=3.799;
                                                  break;
                                             case '4':
                                                  cout << "You bought a Air jordan for 4.499$ \n";
                                                  amount -=4.499;
                                                  break;
                                             case '5':
                                                  cout << "You bought a Track sneakers for 3.299$ \n";
                                                  amount -=3.299;
                                                  break;
                                             case '6':
                                                  cout << "You bought a Nike dunk for 3.099$ \n";
                                                  amount -=3.099;
                                                  break;
                                             case '7':
                                                  cout << "You bought a Adidas superstar for 2.799$ \n";
                                                  amount -=2.799;
                                                  break;
                                        }
                                        break;
                              case 'D':
                                   cout << "0-Black heeled boots for 4.199$ \n";
                                   cout << "1-Black flat boots for 2.299$ \n";
                                   cout << "2-Off white boots for 1.199$ \n";
                                   cout << "3-Red heeled boots whit stone for 4.499$ \n";
                                   cout << "4-Rain boots for 999$ \n";
                                   cout << "5-Brown leather boots for 1.299$ \n";
                                   cout << "6-Pink boots for 3.333$ \n";
                                   cout << "7-Dark red leather heeled boots for 4.999$ \n";
                                   cin >> bootschoice;
                                        switch(bootschoice) {
                                             case '0':
                                                  cout << "You bought a Black heeled booots for 4.199$ \n";
                                                  amount -=4.199;
                                                  break;
                                             case '1':
                                                  cout << "You bought a Black flat boots for 2.299$ \n";
                                                  amount -=2.299;
                                                  break;
                                             case '2':
                                                  cout << "You bought a Off white boots for 1.199$ \n";
                                                  amount -=1.199;
                                                  break;
                                             case '3':
                                                  cout << "You bought a Red heeled boots whit stone for 4.499$ \n";
                                                  amount -=4.499;
                                                  break;
                                             case '4':
                                                  cout << "You bought a Rain boots for 999$ \n";
                                                  amount -=999;
                                                  break;
                                             case '5':
                                                  cout << "You bought a Brown leather boots for 1.299$ \n";
                                                  amount -=1.299;
                                                  break;
                                             case '6':
                                                  cout << "You bought a Pink boots for 3.333$ \n";
                                                  amount -=3.333;
                                                  break;
                                             case '7':
                                                  cout << "You bought a Dark red leather heeled boots for 4.999$ \n";
                                                  amount -=4.999;
                                                  break;
                                        }
                                        break;
                         }
                         break;
                    case '3':
                         cout << "Which kind of bags do you wanna buy?\n";
                         cout << "A-Handbag B-Shoulder bag C-Other bags";
                         cin >> bagschoice;
                         switch(bagschoice) {
                              case 'A':
                              cout << "0-Baguette bag for 299$ \n";
                              cout << "1-Suede bag for 320$ \n";
                              cout << "2-Leather bag for 899.90$ \n";
                              cout << "3-Quilted crossbody bag for 549.90$ \n";
                              cout << "4-Lock system crocodile pattern bag for 1.999$ \n";
                              cout << "5-Fur bag for 2.999$ \n";
                              cout << "6-Red bag with design lid for 2.499$ \n";
                              cout << "7-Special design stone bags for 2.099$ \n";
                              cin >> handbagschoice;
                                   switch(handbagschoice) {
                                        case '0':
                                             cout << "You bought a Baguette bag for 299$ \n";
                                             amount -=299;
                                             break;
                                        case '1':
                                             cout << "You bought a Suede bag for 320$ \n";
                                             amount -=320;
                                             break;
                                        case '2':
                                             cout << "You bought a Leather bag for 899.90$ \n";
                                             amount -=899.90;
                                             break;
                                        case '3':
                                             cout << "You bought a Quilted crossbody bag for 549.90$ \n";
                                             amount -=549.90;
                                             break;
                                        case '4':
                                             cout << "You bought a Lock system crocodile pattern bag for 1.999$ \n";
                                             amount -=1.999;
                                             break;
                                        case '5':
                                             cout << "You bought a Fur bag for 2.999$ \n";
                                             amount -=2.999;
                                             break;
                                        case '6':
                                             cout << "You bought a Red bag with design lit for 2.499$ \n";
                                             amount -=2.499;
                                             break;
                                        case '7':
                                             cout << "You bought a Special design stone bags for 2.099$ \n";
                                             amount -=2.099;
                                             break;
                                   }
                                   break;
                              case 'B':
                              cout << "0-Cloth bag for 120$ \n";
                              cout << "1-Original leather large shoulder bag for 7900$ \n";
                              cout << "2-Retro model shoulder bags for 299$ \n";
                              cout << "3-Leopard stone bag for 709.90$ \n";
                              cin >> shoulderbagchoice;
                                   switch(shoulderbagchoice) {
                                        case '0':
                                             cout << "You bought a Cloth bag for 120$ \n";
                                             amount -=120;
                                             break;
                                        case '1':
                                             cout << "You bought a Original leather large shoulder bag for 7900$ \n";
                                             amount -=7900;
                                             break;
                                        case '2':
                                             cout << "You bought a Retro model shoulder bags for 299$ \n";
                                             amount -=299;
                                             break;
                                        case '3':
                                             cout << "You bought a Leopard stone bag for 709.90$ \n";
                                             amount -=709.90;
                                             break;
                                   }
                                   break;
                         case 'C':
                         cout << "0-Genuine leather wallet for 1.999$ \n";
                         cout << "1-Sports bag for 299.90$ \n";
                         cout << "2-Patterned waist bag for 109.90$ \n";
                         cout << "3-School bag for 149.90$ \n";
                         cout << "4-Victoria secret wallet for 499.90$ \n";
                         cin >> otherbagchoice;
                              switch(otherbagchoice) {
                                   case '0':
                                        cout << "You bought a Genuine leather wallet for 1.999$ \n";
                                        amount -=1.999;
                                        break;
                                   case '1':
                                        cout << "You bought a Sports bag for 299.90$ \n";
                                        amount -=299.90;
                                        break;
                                   case '2':
                                        cout << "You bought a Patterned waist bag for 109.90$ \n";
                                        amount -=109.90;
                                        break;
                                   case '3':
                                        cout << "You bought a School bag for 149.90$ \n";
                                        amount -=149.90;
                                        break;
                                   case '4':
                                        cout << "You bought a Victoria secret wallet for 499.90$ \n";
                                        amount -=499.90;
                                        break;
                              }
                              break;
                            }
                            break;
                    case '4':
                         cout << "Which watch do you wanna buy? \n";
                         cout << "0-Rolex 1-Omega 2-Carteir 3-Tommy Hilfiger 4-Wesse 5-Casio 6-Guess 7-Emporio Armani\n";
                         cin >> watchchoice;
                         switch(watchchoice) {
                              case '0':
                                   cout << "You bought a Rolex watch for 90124$\n";
                                   amount -=90124;
                                   break;
                              case '1':
                                   cout << "You bought a Omega watch for 46327$\n";
                                   amount -=46327;
                                   break;
                              case '2':
                                   cout << "You bought a Carteir watch for 9879$\n";
                                   amount -=9879;
                                   break;
                              case '3':
                                   cout << "You bought a Tommy Hilfiger watch for 21788$\n";
                                   amount -=21788;
                                   break;
                              case '4':
                                   cout << "You bought a Wesse watch for 12901$\n";
                                   amount -=12901;
                                   break;
                              case '5':
                                   cout << "You bought a Casio watch for 15647$\n";
                                   amount -=15647;
                                   break;
                              case '6':
                                   cout << "You bought a Guess watch for 34562$\n";
                                   amount -=34562;
                                   break;
                              case '7':
                                   cout << "You bought a Emporio Armani for 54317$\n";
                                   amount -=54317;
                                   break;
                              }
                              break;
                    case '5':
                         cout << "Which type jewelery do you wanna buy?: A-Ring B-Necklace C-Earring D-Bracelet \n";
                         cin >> jewelerychoice;
                         switch(jewelerychoice) {
                              case 'A':
                                   cout << "0-Diamond ring for 19999.99$\n";
                                   cout << "1-Emerald ring for 15471$\n";
                                   cout << "2-Ruby ring for 62819$\n";
                                   cout << "3-Sapphire ring for 654177$\n";
                                   cout << "4-Solitaire for 51671$\n";
                                   cout << "5-Special design gold ring for 618910$\n";
                                   cin >> ringchoice; 
                                        switch(ringchoice) {
                                             case '0':
                                                  cout << "You bought a Diomond ring for 1999.99$\n";
                                                  amount -=19999.99;
                                                  break;
                                             case '1':
                                                  cout << "You bought a Emerald ring for 15471$\n";
                                                  amount -=15471;
                                                  break;
                                             case '2':
                                                  cout << "You bought a Ruby ring for 62819$\n";
                                                  amount -=62819;
                                                  break;
                                             case '3':
                                                  cout << "You bought a Sapphire ring for 654177$\n";
                                                  amount -=654177;
                                                  break;
                                             case '4':
                                                  cout << "You bought a Solitaire for 51671$\n";
                                                  amount -=51671;
                                                  break;
                                             case '5':
                                                  cout << "You bought a Special design gold ring for 618910$\n";
                                                  amount -=618910;
                                                  break;
                                        }
                                        break;
                              case 'B':
                                   cout << "0-Golden necklace for 6178.99$\n";
                                   cout << "1-Pearl necklace for 892100$\n";
                                   cout << "2-Millenia necklace for 63189$\n";
                                   cout << "3-Birthstone necklace for 2872.99$\n";
                                   cout << "4-Florere necklace for 719010$\n";
                                   cout << "5-Stella necklace for 811997$\n";
                                   cin >> necklacechoice;
                                        switch(necklacechoice) {
                                             case '0':
                                                  cout << "You bought a Golden necklace for 6178.99$\n";
                                                  amount -=6178.99;
                                                  break;
                                             case '1':
                                                  cout << "You bought a Pearl necklace for 892100$\n";
                                                  amount -=892100;
                                                  break;
                                             case '2':
                                                  cout << "You bought a Millenia necklace for 63189$\n";
                                                  amount -=63189;
                                                  break;
                                             case '3':
                                                  cout << "You bought a Birthstone necklace for 2872.99$\n";
                                                  amount -=2872.99;
                                                  break;
                                             case '4':
                                                  cout << "You bought a Florere  necklace for 719010$\n";
                                                  amount -=719010;
                                                  break;
                                             case '5':
                                                  cout << "You bought a Stella necklace for 811997$\n";
                                                  amount  -=81199;
                                                  break;
                                        }
                                        break;
                              case 'C':
                              cout << "0-Twist hoop earring for 1651$\n";
                              cout << "1-Dextera hoop earring for 3681$\n";
                              cout << "2-Vittore hoop earring for 1881$\n";
                              cout << "3-Bella drop earring for 8191$\n";
                              cout << "4-Louison drop earring for 1901$\n";
                              cout << "5-Golden earring for 8201$\n";
                              cout << "6-Diamond earring for 18781$\n";
                              cin >> earringchoice;
                                   switch(earringchoice) {
                                        case '0':
                                             cout << "You bought a Twist hoop earring for 1651$\n";
                                             amount -=1651;
                                             break;
                                        case '1':
                                             cout << "You bought a Dextera hoop earring for 3681$\n";
                                             amount -=3681;
                                             break;
                                        case '2':
                                             cout << "You bought a Vittore hoop earring for 1881$\n";
                                             amount -=1881;
                                             break;
                                        case '3':
                                             cout << "You bought a Bella drop earring for 8191$\n";
                                             amount -=8191;
                                             break;
                                        case '4':
                                             cout << "You bought a Louison  drop earring for 1901$\n";
                                             amount -=1901;
                                             break;
                                        case '5':
                                             cout << "You bought a Golden earring for 8201$\n";
                                             amount -=8201;
                                             break;
                                        case '6':
                                             cout << "You bought a Diamond earring for 18781$\n";
                                             amount -=18781;
                                             break;
                                   }
                                   break;
                         case 'D':
                         cout << "0-Diamond bracelet for 7862.99$\n";
                         cout << "1-Harmonia bracelet for 61871$\n";
                         cout << "2-Lovely bracelet for 2990$\n";
                         cout << "3-Dextera bracelet for 2810$\n";
                         cout << "4-Zodiac bracelet for 8269$\n";
                         cout << "5-Millenia bracelet for 3682$\n";
                         cin >> braceletchoice;
                              switch(braceletchoice) {
                                   case '0':
                                        cout << "You bought a Diamond bracelet for 7862.99$\n";
                                        amount -=7862.99;
                                        break;
                                   case '1':
                                        cout << "You bought a Harmonia bracelet for 61871$\n";
                                        amount -=61871;
                                        break;
                                   case '2':
                                        cout << "You bought a Lovely bracelet for 2990$\n";
                                        amount -=2990;
                                        break;
                                   case '3':
                                        cout << "You bought a Dextera bracelet for 2810$\n";
                                        amount -=2810;
                                        break;
                                   case '4':
                                        cout << "You bought a Zodiac bracelet for 8269$\n";
                                        amount -=8269;
                                        break;
                                   case '5':
                                        cout << "You bought a Millenia bracelet for 3682$\n";
                                        amount -=3682;
                                        break; 
                              default:
                                   cout << "Invalid choice, please  select a valid option.\n";
                              }
                         }
                         if(amount >= 0){
                              cout << "Your total is " << amount << " $ now.\n";
                         }
                         else{
                              cout << "You are over budget! Cannot make this purchase.\n";
                              continuechoice = 'n';
                         }
                         if(amount >= 0) {
                              cout << "Do you want to continue shopping y/n";
                              cin >> continuechoice;
                         }
                         break;  
               }
               break;
          }while(continuechoice=='y'||choice=='Y');
          if(amount >=0)  {
               cout << "Your total is now " << amount << "$\n";
          }
          else {
               cout << "You are over budget! Cannot make this purchase.\n";
               continuechoice ='n';
          }
          cout << "Would you like to a start new shopping session y/n ";
          cin >> choice;
     }while(choice=='y'||choice=='Y');
     cout << "Thanks for your shopping. See you again...\n";
     return 0;
     }
