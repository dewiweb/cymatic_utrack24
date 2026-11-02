// rea decompile_all
// name: CMFCButton::SetImageInternal
// address: 0x10052053
// body: available
// range: 0x10052053-0x10052263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCButton::SetImageInternal(struct HICON__ *,int,struct HICON__
   *,int,struct HICON__ *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCButton::SetImageInternal
          (CMFCButton *this,HICON__ *param_1,int param_2,HICON__ *param_3,int param_4,
          HICON__ *param_5,int param_6)

{
  HDC pHVar1;
  HGDIOBJ h;
  int iVar2;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  ICONINFO local_68;
  CDC local_54 [4];
  HDC local_50;
  HANDLE local_44;
  int local_40;
  HICON local_3c;
  int local_38;
  HICON local_34;
  CMFCButton *local_30;
  HICON local_2c;
  HICON local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x1005205f;
  local_34 = param_3;
  local_3c = param_1;
  local_2c = param_5;
  ClearImages(this,param_4);
  if (param_1 != (HICON__ *)0x0) {
    local_40 = 0;
    local_38 = (local_2c != (HICON)0x0) + 2;
    if (local_38 != 0) {
      do {
        iVar2 = local_40;
        local_28 = local_3c;
        if ((local_40 != 0) && (local_28 = local_34, local_40 != 1)) {
          local_28 = local_2c;
        }
        if (param_4 == 0) {
          if (local_40 == 0) {
            local_30 = this + 0xe4;
          }
          else {
            local_30 = this + 0x1f0;
            if (local_40 != 1) {
              local_30 = this + 0x2fc;
            }
          }
        }
        else if (local_40 == 0) {
          local_30 = this + 0x408;
        }
        else {
          local_30 = this + 0x514;
          if (local_40 != 1) {
            local_30 = this + 0x620;
          }
        }
        if (local_28 != (HICON)0x0) {
          GetIconInfo(local_28,&local_68);
          GetObjectW(local_68.hbmColor,0x18,local_80);
          *(undefined4 *)(this + 0xd4) = local_7c;
          *(undefined4 *)(this + 0xd8) = local_78;
          if (iVar2 == 0) {
            FUN_1001714b((undefined4 *)local_54);
            local_8 = 0;
            pHVar1 = CreateCompatibleDC((HDC)0x0);
            CDC::Attach(local_54,pHVar1);
            local_44 = CopyImage(local_68.hbmColor,0,0,0,0x2000);
            if (local_44 != (HANDLE)0x0) {
              h = SelectObject(local_50,local_44);
              local_24.right = *(LONG *)(this + 0xd4);
              local_24.bottom = *(LONG *)(this + 0xd8);
              local_24.left = 0;
              local_24.top = 0;
              FillRect(local_50,&local_24,DAT_10166b34);
              DrawIconEx(local_50,0,0,local_28,*(int *)(this + 0xd4),*(int *)(this + 0xd8),0,
                         (HBRUSH)0x0,3);
              if (h != (HGDIOBJ)0x0) {
                SelectObject(local_50,h);
              }
              DeleteObject(local_44);
              iVar2 = local_40;
            }
            local_8 = 0xffffffff;
            CDC::~CDC(local_54);
          }
          DeleteObject(local_68.hbmColor);
          DeleteObject(local_68.hbmMask);
          *(undefined4 *)(local_30 + 0x50) = local_7c;
          *(undefined4 *)(local_30 + 0x54) = local_78;
          if (param_6 == 0) {
            CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)local_30,DAT_10166ab4);
          }
          CMFCToolBarImages::AddIcon((CMFCToolBarImages *)local_30,local_28,param_6);
        }
        local_40 = iVar2 + 1;
      } while (local_40 < local_38);
    }
    if (param_2 != 0) {
      DestroyIcon(local_3c);
      if (local_34 != (HICON)0x0) {
        DestroyIcon(local_34);
      }
      if (local_2c != (HICON)0x0) {
        DestroyIcon(local_2c);
      }
    }
  }
  FUN_100f90cf();
  return;
}

