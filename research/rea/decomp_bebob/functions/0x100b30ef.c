// rea decompile_all
// name: FUN_100b30ef
// address: 0x100b30ef
// body: available
// range: 0x100b30ef-0x100b3223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b321f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100b30ef(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  tagTEXTMETRICW local_44;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_48 = param_1;
  (**(code **)(*(int *)((int)this + 0xb8) + 0xe0))(param_1);
  iVar2 = 0;
  if (*(int *)((int)this + 0xa8) != 0) {
    GetTextMetricsW(*(HDC *)(param_1 + 8),&local_44);
    iVar2 = CMFCRibbonCategory::GetImageSize
                      (*(CMFCRibbonCategory **)((int)this + 0xa8),(int)local_50);
    if (local_44.tmHeight < *(int *)(iVar2 + 4)) {
      iVar2 = CMFCRibbonCategory::GetImageSize
                        (*(CMFCRibbonCategory **)((int)this + 0xa8),(int)local_58);
      local_44.tmHeight = *(int *)(iVar2 + 4);
    }
    iVar2 = local_44.tmHeight + 6;
  }
  iVar2 = iVar2 * 3;
  iVar3 = (**(code **)(*(int *)((int)this + 0xb8) + 0x54))(local_58,local_48);
  if (iVar2 - *(int *)(iVar3 + 4) == 0 || iVar2 < *(int *)(iVar3 + 4)) {
    iVar2 = (**(code **)(*(int *)((int)this + 0xb8) + 0x54))(local_50,local_48);
    iVar2 = *(int *)(iVar2 + 4);
  }
  local_4c = 0;
  if (0 < *(int *)((int)this + 0x25c)) {
    do {
      if ((local_4c < 0) || (*(int *)((int)this + 0x25c) <= local_4c)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(*(int *)((int)this + 600) + local_4c * 4);
      (**(code **)(*piVar1 + 0xe0))(local_48);
      iVar3 = (**(code **)(*piVar1 + 0x54))(local_58,local_48);
      if (iVar2 <= *(int *)(iVar3 + 4)) {
        iVar2 = (**(code **)(*piVar1 + 0x54))(local_60,local_48);
        iVar2 = *(int *)(iVar2 + 4);
      }
      local_4c = local_4c + 1;
    } while (local_4c < *(int *)((int)this + 0x25c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

