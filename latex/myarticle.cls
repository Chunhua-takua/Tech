%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% 所函
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\NeedsTeXFormat{LaTeX2e}[1995/12/01]
\ProvidesClass{myarticle}
              [2021/10/04 v1.4n
 Standard LaTeX document class]

\LoadClass[a4paper, UTF8, 24pt, AutoFakeBold]{ctexbook}

\RequirePackage{color}
\RequirePackage{fancyhdr}
\RequirePackage{geometry}
\geometry{
    top = 37mm,
    left = 28mm,
    right = 26mm,
    bottom = 35mm
}
\RequirePackage{graphicx}
\RequirePackage{hyperref}
\hypersetup{
    colorlinks=true,
    linktocpage=true
}
\RequirePackage{lastpage}
\RequirePackage{titlesec}
\RequirePackage[UTF8, scheme=plain]{ctex}

% 页眉与内容之间的距离
\setlength{\headsep}{80pt}

\date{}

\definecolor{gray}{RGB}{100,100,100}

% 行距
\renewcommand{\baselinestretch}
{1.75}

