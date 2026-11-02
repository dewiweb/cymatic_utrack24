// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawDescription
// address: 0x100dbd86
// body: available
// range: 0x100dbd86-0x100dbe42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolTipCtrl::OnDrawDescription(class CDC *,class
   CRect,int)
   
   Library: Visual Studio 2010 Release */

int * __thiscall
CMFCToolTipCtrl::OnDrawDescription
          (CMFCToolTipCtrl *this,int *param_1,int *param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = 0;
  if (*(int *)(this + 0xa8) == 0) {
    param_1[1] = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x28))(&DAT_10166bbc);
    param_6 = GetFixedWidth(this);
    if ((param_6 < 1) || (iVar1 = *(int *)(this + 0xdc), 0x20 < iVar1)) {
      param_6 = *(int *)(this + 0xbc) + param_4;
    }
    else {
      param_6 = param_4 + param_6;
      if ((0 < iVar1) && (*(int *)(this + 0xa4) != 0)) {
        param_6 = param_6 - (*(int *)(this + 0xe4) + iVar1);
      }
    }
    uVar4 = 0x10;
    if (param_8 != 0) {
      uVar4 = 0x410;
    }
    iVar3 = (**(code **)(*param_3 + 0x68))
                      (*(int *)(this + 0xd8),*(undefined4 *)(*(int *)(this + 0xd8) + -0xc),&param_4,
                       uVar4);
    (**(code **)(*param_3 + 0x28))(uVar2);
    iVar1 = param_6 - param_4;
    param_1[1] = iVar3;
  }
  *param_1 = iVar1;
  return param_1;
}

