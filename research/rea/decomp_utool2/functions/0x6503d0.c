// rea decompile_all
// name: FUN_006503d0
// address: 0x6503d0
// body: available
// range: 0x6503d0-0x6504bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6504bb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006503d0(undefined4 param_1,uint *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  uint uVar4;
  
  uVar4 = 0x400;
  if (*(int *)(in_ECX + 0x34) != *(int *)(in_ECX + 0xd0)) {
    *(char **)(in_ECX + 0x50) = "zstream unclaimed";
    return 0xfffffffe;
  }
  *(undefined4 *)(in_ECX + 0x44) = param_3;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  do {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      uVar1 = *param_2;
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      *param_2 = uVar1 - uVar4;
      if (uVar4 != 0) {
        if (*(code **)(in_ECX + 0x10) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
        (**(code **)(in_ECX + 0x10))();
        FUN_006598a0(uVar4);
      }
      *(undefined4 *)(in_ECX + 0x38) = in_EDX;
      *(uint *)(in_ECX + 0x3c) = uVar4;
    }
    if (*(int *)(in_ECX + 0x48) == 0) {
      iVar2 = *param_4;
      iVar3 = -1;
      if (iVar2 != -1) {
        iVar3 = iVar2;
      }
      *(int *)(in_ECX + 0x48) = iVar3;
      *param_4 = iVar2 - iVar3;
    }
    iVar2 = FUN_006161a0();
  } while ((iVar2 == 0) && ((*param_4 != 0 || (*(int *)(in_ECX + 0x48) != 0))));
  *param_4 = *param_4 + *(int *)(in_ECX + 0x48);
  *(undefined4 *)(in_ECX + 0x48) = 0;
  FUN_00658fd0();
  return extraout_EDX;
}

