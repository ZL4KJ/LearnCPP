#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Web::Syndication;
using namespace std;

int main()
{
    winrt::init_apartment();
    wcout << "Setting up RSS Feed Uri\n";
    Uri rssFeedUri{ L"https://blogs.windows.com/feed" };
    wcout << "Setting up Syndication Client\n";
    SyndicationClient syndicationClient;

    SyndicationFeed syndicationFeed = syndicationClient.RetrieveFeedAsync(rssFeedUri).get();

    for (const SyndicationItem syndicationItem : syndicationFeed.Items())
    {
        //...
        winrt::hstring titleAsHstring = syndicationItem.Title().Text();

        // Omitted: there's a little bit of extra work here to remove the trademark symbol from the title text.

        std::wcout << titleAsHstring.c_str() << std::endl;
    }


    //Uri uri(L"http://aka.ms/cppwinrt");
    //printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());
}
