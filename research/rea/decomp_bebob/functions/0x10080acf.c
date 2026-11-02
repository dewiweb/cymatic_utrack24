// rea decompile_all
// name: CMFCToolBarImages::MapTo3dColors
// address: 0x10080acf
// body: available
// range: 0x10080acf-0x10080cb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::MapTo3dColors(int,unsigned long,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarImages::MapTo3dColors(CMFCToolBarImages *this,int param_1,ulong param_2,ulong param_3)

{
  HDC pHVar1;
  int iVar2;
  COLORREF CVar3;
  COLORREF color;
  undefined1 local_64 [4];
  int local_60;
  int local_5c;
  short local_52;
  CDC local_4c [4];
  HDC local_48;
  CDC local_3c [4];
  HDC local_38;
  HGDIOBJ local_2c;
  HBITMAP local_28;
  int local_24;
  int local_20;
  HGDIOBJ local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x10080adb;
  if ((*(int *)(this + 0x88) != 0) && ((param_2 == 0xffffffff || (param_3 != 0xffffffff)))) {
    FUN_1001714b((undefined4 *)local_3c);
    local_8 = 0;
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_3c,pHVar1);
    iVar2 = GetObjectW(*(HANDLE *)(this + 0x88),0x18,local_64);
    if (iVar2 != 0) {
      if (*(HGDIOBJ *)(this + 0x88) == (HGDIOBJ)0x0) {
        local_1c = (HGDIOBJ)0x0;
      }
      else {
        local_1c = SelectObject(local_38,*(HGDIOBJ *)(this + 0x88));
      }
      if (local_1c != (HGDIOBJ)0x0) {
        local_24 = local_60;
        local_20 = local_5c;
        local_28 = CreateCompatibleBitmap(local_38,local_60,local_5c);
        if (local_28 == (HBITMAP)0x0) {
          SelectObject(local_38,local_1c);
        }
        else {
          FUN_1001714b((undefined4 *)local_4c);
          local_8._0_1_ = 1;
          pHVar1 = CreateCompatibleDC(local_38);
          CDC::Attach(local_4c,pHVar1);
          local_2c = SelectObject(local_48,local_28);
          if (local_2c != (HGDIOBJ)0x0) {
            BitBlt(local_48,0,0,local_24,local_20,local_38,0,0,0xcc0020);
            local_18 = 0;
            if (0 < local_24) {
              do {
                local_14 = 0;
                if (0 < local_20) {
                  do {
                    CVar3 = GetPixel(local_48,local_18,local_14);
                    if (param_2 == 0xffffffff) {
                      if ((local_52 == 0x18) && (DAT_10161460 == 0)) {
                        color = FUN_10080351(CVar3);
                      }
                      else {
                        color = MapToSysColor(CVar3,param_1);
                      }
                      if (CVar3 != color) goto LAB_10080c47;
                    }
                    else {
                      color = param_3;
                      if (CVar3 == param_2) {
LAB_10080c47:
                        SetPixel(local_48,local_18,local_14,color);
                      }
                    }
                    local_14 = local_14 + 1;
                  } while (local_14 < local_20);
                }
                local_18 = local_18 + 1;
              } while (local_18 < local_24);
            }
            SelectObject(local_48,local_2c);
            SelectObject(local_38,local_1c);
            DeleteObject(*(HGDIOBJ *)(this + 0x88));
            *(HBITMAP *)(this + 0x88) = local_28;
            local_8 = (uint)local_8._1_3_ << 8;
            CDC::~CDC(local_4c);
            local_8 = 0xffffffff;
            CDC::~CDC(local_3c);
            return 1;
          }
          SelectObject(local_38,local_1c);
          DeleteObject(local_28);
          local_8 = (uint)local_8._1_3_ << 8;
          CDC::~CDC(local_4c);
        }
      }
    }
    local_8 = 0xffffffff;
    CDC::~CDC(local_3c);
  }
  return 0;
}

