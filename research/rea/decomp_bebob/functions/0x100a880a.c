// rea decompile_all
// name: CMFCColorBar::CreateControl
// address: 0x100a880a
// body: available
// range: 0x100a880a-0x100a8955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCColorBar::CreateControl(class CWnd *,class CRect const
   &,unsigned int,int,class CPalette *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCColorBar::CreateControl
          (CMFCColorBar *this,CWnd *param_1,CRect *param_2,uint param_3,int param_4,
          CPalette *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CMFCToolBar::EnableLargeIcons((CMFCToolBar *)this,0);
  if (param_4 < 1) {
    if (param_5 == (CPalette *)0x0) {
      iVar2 = 0x14;
    }
    else {
      iVar2 = CPalette::GetEntryCount(param_5);
    }
    if (0 < iVar2) {
      param_4 = iVar2;
      do {
        iVar1 = ((*(int *)(param_2 + 8) + *(int *)(this + 0xd74) * -2) - *(int *)param_2) / param_4;
        if ((iVar1 != 0) &&
           (iVar5 = (*(int *)(param_2 + 0xc) + *(int *)(this + 0xd70) * -2) - *(int *)(param_2 + 4),
           iVar1 = (iVar2 / param_4) * iVar1, iVar1 - iVar5 != 0 && iVar5 <= iVar1)) {
          param_4 = param_4 + 1;
          break;
        }
        param_4 = param_4 + -1;
      } while (0 < param_4);
      if (0 < param_4) goto LAB_100a88aa;
    }
    param_4 = -1;
  }
LAB_100a88aa:
  iVar2 = (**(code **)(*(int *)this + 0x44c))(param_1,0x50002000,param_3,param_5,param_4,0,0);
  if (iVar2 != 0) {
    iVar2 = *(int *)this;
    uVar3 = (**(code **)(iVar2 + 0x1bc))();
    (**(code **)(iVar2 + 0x1e0))(uVar3 & 0xffbff0ff);
    local_18 = *(undefined4 *)param_2;
    uStack_14 = *(undefined4 *)(param_2 + 4);
    uStack_10 = *(undefined4 *)(param_2 + 8);
    uStack_c = *(undefined4 *)(param_2 + 0xc);
    (**(code **)(*(int *)this + 0x230))(&local_18,1,0);
    ContextToSize(this,1,1);
    (**(code **)(*(int *)this + 0x234))
              (&DAT_101665c0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x13,0);
    if (param_1 == (CWnd *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(this + 0x54) = uVar4;
    *(uint *)(this + 0xd8c) = param_3;
    *(undefined4 *)(this + 0xb40) = 0;
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

