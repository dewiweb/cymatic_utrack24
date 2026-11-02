// rea decompile_all
// name: FUN_10004550
// address: 0x10004550
// body: available
// range: 0x10004550-0x1000465c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004628 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10004550(void *param_1)

{
  uint uVar1;
  DWORD DVar2;
  CObject *pCVar3;
  int iVar4;
  undefined4 local_114;
  uint local_110;
  uint local_10c;
  undefined4 auStack_108 [64];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (0 < *(int *)((int)param_1 + 0x38)) {
    iVar4 = 0;
    do {
      if ((iVar4 < 0) || (*(int *)((int)param_1 + 0x38) <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      FUN_100085b9(*(void **)(*(int *)((int)param_1 + 0x34) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)param_1 + 0x38));
  }
  CUIntArray::SetSize((CUIntArray *)((int)param_1 + 0x30),0,-1);
  _memset(&local_10c,0,0x104);
  DVar2 = FUN_100014d0(param_1,&local_10c);
  uVar1 = local_110;
  if (DVar2 == 0) {
    local_110 = 0;
    uVar1 = 0;
    if (local_10c != 0) {
      do {
        local_114 = auStack_108[local_110];
        pCVar3 = FUN_1000858a(0x200);
        DVar2 = FUN_10001560(param_1,&local_114,pCVar3);
        if (DVar2 == 0) {
          CObArray::SetAtGrow((CObArray *)((int)param_1 + 0x30),*(int *)((int)param_1 + 0x38),pCVar3
                             );
        }
        else {
          FUN_100085b9(pCVar3);
        }
        local_110 = local_110 + 1;
        uVar1 = local_110;
      } while (local_110 < local_10c);
    }
  }
  local_110 = uVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

