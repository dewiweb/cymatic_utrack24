// rea decompile_all
// name: CDockablePane::CalcRectForSliding
// address: 0x10078565
// body: available
// range: 0x10078565-0x10078710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::CalcRectForSliding(class CRect &,class CRect &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockablePane::CalcRectForSliding(CDockablePane *this,CRect *param_1,CRect *param_2,int param_3)

{
  CRect *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)this + 0x1d8))();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (**(code **)(*(int *)this + 400))();
  if (iVar3 != 0x1000) {
    if (iVar3 != 0x2000) {
      if (iVar3 != 0x4000) {
        if (iVar3 != 0x8000) {
          return;
        }
        pCVar1 = param_1 + 4;
        iVar3 = *(int *)(param_1 + 0xc);
        if (param_3 == 0) {
          *(int *)pCVar1 = *(int *)pCVar1 + *(int *)(this + 0x2f4);
          if (iVar3 < *(int *)pCVar1) {
            *(int *)pCVar1 = iVar3;
          }
        }
        else {
          *(int *)pCVar1 = *(int *)pCVar1 - *(int *)(this + 0x2f4);
          if (*(int *)(this + 0x304) - *(int *)(this + 0x2fc) < iVar3 - *(int *)pCVar1) {
            *(int *)pCVar1 = (*(int *)(this + 0x2fc) - *(int *)(this + 0x304)) + iVar3;
          }
        }
        iVar3 = *(int *)(param_2 + 0xc);
        iVar2 = *(int *)pCVar1;
        *(int *)(param_2 + 0xc) = iVar2;
        *(int *)(param_2 + 4) = iVar2 - (iVar3 - *(int *)(param_2 + 4));
        return;
      }
      if (param_3 == 0) {
        *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x2f4);
        iVar3 = *(int *)(param_1 + 8);
        if (*(int *)param_1 <= iVar3) goto LAB_10078644;
      }
      else {
        *(int *)param_1 = *(int *)param_1 - *(int *)(this + 0x2f4);
        if (*(int *)(param_1 + 8) - *(int *)param_1 <=
            *(int *)(this + 0x300) - *(int *)(this + 0x2f8)) goto LAB_10078644;
        iVar3 = (*(int *)(this + 0x2f8) - *(int *)(this + 0x300)) + *(int *)(param_1 + 8);
      }
      *(int *)param_1 = iVar3;
LAB_10078644:
      iVar3 = *(int *)(param_2 + 8);
      iVar2 = *(int *)param_1;
      *(int *)(param_2 + 8) = iVar2;
      *(int *)param_2 = iVar2 - (iVar3 - *(int *)param_2);
      return;
    }
    if (param_3 == 0) {
      pCVar1 = param_1 + 0xc;
      iVar3 = *(int *)(param_1 + 4);
      *(int *)pCVar1 = *(int *)pCVar1 - *(int *)(this + 0x2f4);
      if (iVar3 <= *(int *)pCVar1) goto LAB_100786a0;
    }
    else {
      pCVar1 = param_1 + 0xc;
      *(int *)pCVar1 = *(int *)pCVar1 + *(int *)(this + 0x2f4);
      if (*(int *)pCVar1 - *(int *)(param_1 + 4) <= *(int *)(this + 0x304) - *(int *)(this + 0x2fc))
      goto LAB_100786a0;
      iVar3 = (*(int *)(this + 0x304) - *(int *)(this + 0x2fc)) + *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 0xc) = iVar3;
LAB_100786a0:
    iVar3 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_2 + 4);
    *(int *)(param_2 + 4) = iVar3;
    *(int *)(param_2 + 0xc) = iVar3 + (*(int *)(param_2 + 0xc) - iVar2);
    return;
  }
  if (param_3 == 0) {
    pCVar1 = param_1 + 8;
    iVar3 = *(int *)param_1;
    *(int *)pCVar1 = *(int *)pCVar1 - *(int *)(this + 0x2f4);
    if (iVar3 <= *(int *)pCVar1) goto LAB_100786f9;
  }
  else {
    pCVar1 = param_1 + 8;
    *(int *)pCVar1 = *(int *)pCVar1 + *(int *)(this + 0x2f4);
    if (*(int *)pCVar1 - *(int *)param_1 <= *(int *)(this + 0x300) - *(int *)(this + 0x2f8))
    goto LAB_100786f9;
    iVar3 = (*(int *)(this + 0x300) - *(int *)(this + 0x2f8)) + *(int *)param_1;
  }
  *(int *)(param_1 + 8) = iVar3;
LAB_100786f9:
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)param_2;
  *(int *)param_2 = iVar3;
  *(int *)(param_2 + 8) = iVar3 + (*(int *)(param_2 + 8) - iVar2);
  return;
}

