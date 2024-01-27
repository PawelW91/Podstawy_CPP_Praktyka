object Form1: TForm1
  Left = 468
  Top = 310
  Width = 1305
  Height = 675
  Caption = 'Tic tac Toe v1.0'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object pole1: TImage
    Left = 304
    Top = 168
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole1Click
  end
  object pole2: TImage
    Left = 400
    Top = 168
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole2Click
  end
  object pole3: TImage
    Left = 496
    Top = 168
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole3Click
  end
  object pole4: TImage
    Left = 304
    Top = 264
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole4Click
  end
  object pole5: TImage
    Left = 400
    Top = 264
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole5Click
  end
  object pole6: TImage
    Left = 496
    Top = 264
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole6Click
  end
  object pole7: TImage
    Left = 304
    Top = 360
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole7Click
  end
  object pole8: TImage
    Left = 400
    Top = 360
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole8Click
  end
  object pole9: TImage
    Left = 496
    Top = 360
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole9Click
  end
  object Label1: TLabel
    Left = 624
    Top = 192
    Width = 182
    Height = 37
    Caption = 'Tura gracza:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object tura: TImage
    Left = 816
    Top = 192
    Width = 30
    Height = 30
  end
  object BitBtn1: TBitBtn
    Left = 632
    Top = 288
    Width = 201
    Height = 65
    Cursor = crHandPoint
    Caption = 'Od nowa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end
