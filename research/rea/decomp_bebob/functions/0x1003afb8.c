// rea decompile_all
// name: FUN_1003afb8
// address: 0x1003afb8
// body: available
// range: 0x1003afb8-0x1003b08e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b08a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1003afb8(CWnd *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*(int *)param_1 + 0x1c4))(&local_18);
  CMFCCaptionButton::GetSize();
  iVar5 = *(int *)(param_1 + 0x104);
  iVar2 = ((local_c - local_28) - local_14) / 2 + local_14;
  iVar3 = local_10 - DAT_101680a0;
  local_24 = DAT_101680a0 + local_18;
  while( true ) {
    if (iVar5 == 0) {
      FUN_1003aeaf(param_1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar5 == 0) break;
    iVar1 = *(int *)(iVar5 + 8);
    iVar5 = *(int *)(iVar5 + 4);
    if (*(int *)(iVar1 + 0xc) == 0) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar4 = iVar3 - local_2c;
        if (iVar3 - local_2c <= local_18) {
          iVar4 = local_18;
        }
        *(int *)(iVar1 + 0x24) = iVar4;
        *(int *)(iVar1 + 0x28) = iVar2;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        iVar3 = iVar4 - DAT_1016065c;
      }
      else {
        *(int *)(iVar1 + 0x24) = local_24;
        *(int *)(iVar1 + 0x28) = iVar2;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        local_24 = local_24 + DAT_1016065c + local_2c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

