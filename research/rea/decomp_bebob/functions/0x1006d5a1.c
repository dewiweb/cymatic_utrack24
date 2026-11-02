// rea decompile_all
// name: CMFCRibbonBar::DrawMenuImage
// address: 0x1006d5a1
// body: available
// range: 0x1006d5a1-0x1006d6fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCRibbonBar::DrawMenuImage(class CDC *,class CMFCToolBarMenuButton
   const *,class CRect const &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonBar::DrawMenuImage
          (CMFCRibbonBar *this,CDC *param_1,CMFCToolBarMenuButton *param_2,CRect *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar1 = DAT_10166c84;
  if (uVar2 != 0) {
    if (uVar2 == 0xffffd8ee) {
      uVar2 = 0xe123;
    }
    if (uVar2 == 0xffffd8ed) {
      uVar2 = 0xe122;
    }
    if (uVar2 == 0xffffd8ec) {
      uVar2 = 0xe125;
    }
    if (uVar2 == 0xffffd8eb) {
      uVar2 = 0xe12a;
    }
    piVar3 = (int *)FUN_1006d478(this,uVar2,0,1);
    uVar1 = DAT_10166c84;
    if (piVar3 != (int *)0x0) {
      DAT_10166c84 = 0;
      (**(code **)(*piVar3 + 0x70))(&local_20,1);
      if ((((local_20 != 0) || (local_1c != 0)) &&
          (local_20 <= *(int *)(param_3 + 8) - *(int *)param_3)) &&
         (local_1c <= *(int *)(param_3 + 0xc) - *(int *)(param_3 + 4))) {
        local_18.left = *(LONG *)param_3;
        local_18.top = *(LONG *)(param_3 + 4);
        local_18.right = *(LONG *)(param_3 + 8);
        local_18.bottom = *(LONG *)(param_3 + 0xc);
        InflateRect(&local_18,-(((*(int *)(param_3 + 8) - *(int *)param_3) - local_20) / 2),
                    -(((*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) - local_1c) / 2));
        iVar4 = (**(code **)(*piVar3 + 0x38))();
        iVar5 = (**(code **)(*piVar3 + 0x3c))();
        piVar3[0x1e] = *(uint *)(param_2 + 0x24) & 0x40000;
        piVar3[0x1f] = *(uint *)(param_2 + 0x24) & 0x10000;
        (**(code **)(*piVar3 + 0xb8))
                  (param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
        piVar3[0x1e] = iVar4;
        piVar3[0x1f] = iVar5;
      }
    }
  }
  DAT_10166c84 = uVar1;
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

