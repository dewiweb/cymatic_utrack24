// rea decompile_all
// name: FUN_10005ae0
// address: 0x10005ae0
// body: available
// range: 0x10005ae0-0x10005c39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005b39 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10005ae0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_44;
  int local_3c;
  int local_38 [2];
  char local_30 [40];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_38[0] = 0;
  local_38[1] = -1;
  piVar4 = local_38;
  piVar1 = param_1;
  for (iVar2 = 0xc; piVar1 = piVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *piVar4;
    piVar4 = piVar4 + 1;
  }
  param_1[0xd] = 0;
  if (*(int *)((int)this + 0x94) != 0) {
    if (DAT_10164a74 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar2 = *DAT_10164a70;
    if (param_2 + 1U <= *(uint *)(iVar2 + 0x34)) {
      piVar1 = (int *)(iVar2 + 0x38 + param_2 * 0x30);
      local_38[0] = *piVar1;
      local_38[1] = param_2;
      _strcpy_s(local_30,0x28,(char *)(piVar1 + 2));
      piVar4 = local_38;
      piVar1 = param_1;
      for (iVar3 = 0xc; piVar1 = piVar1 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar1 = *piVar4;
        piVar4 = piVar4 + 1;
      }
      *param_1 = *(int *)(*(int *)((int)this + 0x94) + 0x24);
      piVar4 = (int *)(iVar2 + 0x98);
      local_3c = 0;
      piVar1 = param_1 + 0xe;
      local_44 = 4;
      do {
        piVar5 = (int *)((iVar2 - (int)param_1) + (int)piVar1);
        piVar6 = piVar1;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        if (piVar1[1] != 0) {
          local_3c = local_3c + 1;
        }
        piVar5 = piVar4 + -0xc;
        piVar6 = piVar1 + 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        if (piVar1[0xd] != 0) {
          local_3c = local_3c + 1;
        }
        piVar5 = piVar4;
        piVar6 = piVar1 + 0x18;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        if (piVar1[0x19] != 0) {
          local_3c = local_3c + 1;
        }
        piVar5 = piVar4 + 0xc;
        piVar6 = piVar1 + 0x24;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        if (piVar1[0x25] != 0) {
          local_3c = local_3c + 1;
        }
        piVar4 = piVar4 + 0x30;
        piVar1 = piVar1 + 0x30;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      param_1[0xd] = local_3c;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

