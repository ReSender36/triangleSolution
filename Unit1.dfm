object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 202
  ClientWidth = 705
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 40
    Width = 63
    Height = 13
    Caption = #1043#1080#1087#1086#1090#1077#1085#1091#1079#1072':'
  end
  object Edit1: TEdit
    Left = 77
    Top = 37
    Width = 52
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 8
    Top = 64
    Width = 121
    Height = 25
    Caption = #1056#1072#1089#1095#1077#1090' '#1090#1088#1077#1091#1075#1086#1083#1100#1085#1080#1082#1072
    TabOrder = 1
    OnClick = Button1Click
  end
  object StringGrid1: TStringGrid
    Left = 152
    Top = 8
    Width = 409
    Height = 186
    ColCount = 10
    RowCount = 2
    TabOrder = 2
  end
  object Button2: TButton
    Left = 8
    Top = 88
    Width = 75
    Height = 25
    Caption = #1055#1086#1090#1086#1082
    TabOrder = 3
    OnClick = Button2Click
  end
end
