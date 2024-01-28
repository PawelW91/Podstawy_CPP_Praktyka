object Form1: TForm1
  Left = 348
  Top = 312
  Width = 1305
  Height = 675
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TBitBtn
    Left = 344
    Top = 184
    Width = 289
    Height = 81
    Caption = 'Dzwiek1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object MediaPlayer1: TMediaPlayer
    Left = 344
    Top = 152
    Width = 29
    Height = 30
    VisibleButtons = [btPlay]
    Visible = False
    TabOrder = 1
  end
  object Button2: TBitBtn
    Left = 632
    Top = 184
    Width = 289
    Height = 81
    Caption = 'Dzwiek2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button2Click
  end
end
