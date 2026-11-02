// rea decompile_all
// name: CMFCButton::SetImageInternal
// address: 0x10052264
// body: available
// range: 0x10052264-0x100523ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::SetImageInternal(struct HBITMAP__ *,int,struct HBITMAP__
   *,int,int,struct HBITMAP__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCButton::SetImageInternal
          (CMFCButton *this,HBITMAP__ *param_1,int param_2,HBITMAP__ *param_3,int param_4,
          int param_5,HBITMAP__ *param_6)

{
  bool bVar1;
  bool bVar2;
  CMFCToolBarImages *this_00;
  int iVar3;
  ulong uVar4;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  ushort local_1a;
  int local_14;
  CMFCButton *local_10;
  int local_c;
  HBITMAP__ *local_8;
  
  local_10 = this;
  ClearImages(this,param_5);
  if (param_1 != (HBITMAP__ *)0x0) {
    local_14 = (param_6 != (HBITMAP__ *)0x0) + 2;
    local_c = 0;
    if (local_14 != 0) {
      do {
        bVar1 = false;
        local_8 = param_1;
        if ((local_c != 0) && (local_8 = param_3, local_c != 1)) {
          local_8 = param_6;
        }
        if (param_5 == 0) {
          if (local_c == 0) {
            this_00 = (CMFCToolBarImages *)(this + 0xe4);
          }
          else {
            this_00 = (CMFCToolBarImages *)(this + 0x1f0);
            if (local_c != 1) {
              this_00 = (CMFCToolBarImages *)(this + 0x2fc);
            }
          }
        }
        else if (local_c == 0) {
          this_00 = (CMFCToolBarImages *)(this + 0x408);
        }
        else {
          this_00 = (CMFCToolBarImages *)(this + 0x514);
          if (local_c != 1) {
            this_00 = (CMFCToolBarImages *)(this + 0x620);
          }
        }
        if (local_8 == (HBITMAP__ *)0x0) break;
        GetObjectW(local_8,0x18,local_2c);
        if ((param_4 == 0) && ((local_1a < 9 || (0x1f < local_1a)))) {
          bVar2 = false;
LAB_1005233c:
          if ((local_1a == 0x20) && (iVar3 = FUN_10070d8e(), iVar3 != 0)) {
            bVar1 = true;
          }
        }
        else {
          bVar2 = true;
          if (param_4 == 0) goto LAB_1005233c;
        }
        if (local_c == 0) {
          *(undefined4 *)(local_10 + 0xd4) = local_28;
          *(undefined4 *)(local_10 + 0xd8) = local_24;
        }
        if (bVar1) {
          CMFCToolBarImages::PreMultiplyAlpha(local_8,1);
        }
        *(undefined4 *)(this_00 + 0x50) = local_28;
        *(undefined4 *)(this_00 + 0x54) = local_24;
        if (bVar2) {
          uVar4 = 0xc0c0c0;
        }
        else {
          uVar4 = DAT_10166ab4;
          if (bVar1) {
            uVar4 = 0xffffffff;
          }
        }
        CMFCToolBarImages::SetTransparentColor(this_00,uVar4);
        CMFCToolBarImages::AddImage(this_00,local_8,1);
        local_c = local_c + 1;
        this = local_10;
      } while (local_c < local_14);
    }
    if (param_2 != 0) {
      if (param_3 != (HBITMAP__ *)0x0) {
        DeleteObject(param_3);
      }
      DeleteObject(param_1);
      if (param_6 != (HBITMAP__ *)0x0) {
        DeleteObject(param_6);
      }
    }
  }
  return;
}

