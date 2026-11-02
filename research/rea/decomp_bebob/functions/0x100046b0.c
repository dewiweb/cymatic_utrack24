// rea decompile_all
// name: FUN_100046b0
// address: 0x100046b0
// body: available
// range: 0x100046b0-0x10004746 inclusive
// range: 0x10004750-0x100047dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004796 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100046b0(void *param_1)

{
  DWORD DVar1;
  CObject *pCVar2;
  int iVar3;
  undefined4 local_118;
  uint local_114;
  DWORD local_110;
  uint local_10c;
  undefined4 auStack_108 [64];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0x4c)) {
    do {
      if ((iVar3 < 0) || (*(int *)((int)param_1 + 0x4c) <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      FUN_100085b9(*(void **)(*(int *)((int)param_1 + 0x48) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)param_1 + 0x4c));
  }
  CUIntArray::SetSize((CUIntArray *)((int)param_1 + 0x44),0,-1);
  _memset(&local_10c,0,0x104);
  DVar1 = FUN_100014d0(param_1,&local_10c);
  if (DVar1 == 0) {
    local_110 = 0;
    local_114 = 0;
    if (local_10c != 0) {
      do {
        local_118 = auStack_108[local_114];
        pCVar2 = FUN_1000858a(0x338);
        DVar1 = FUN_10001cc0(param_1,&local_118,pCVar2);
        if (DVar1 == 0) {
          CObArray::SetAtGrow((CObArray *)((int)param_1 + 0x44),*(int *)((int)param_1 + 0x4c),pCVar2
                             );
        }
        else {
          FUN_100085b9(pCVar2);
          if (local_110 == 0) {
            local_110 = DVar1;
          }
        }
        local_114 = local_114 + 1;
      } while (local_114 < local_10c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

