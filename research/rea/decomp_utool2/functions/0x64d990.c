// rea decompile_all
// name: FUN_0064d990
// address: 0x64d990
// body: available
// range: 0x64d990-0x64dae6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64dadb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64dae2 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d990(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int in_ECX;
  
  bVar1 = false;
  if (*(int *)(in_ECX + 0x204) == 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(in_ECX + 0x208);
    }
    if ((param_2 == 3) || ((param_2 == 2 && ((*(uint *)(in_ECX + 0xd0) & 0x20000000) != 0)))) {
      iVar2 = FUN_0064daf0();
      if (iVar2 == 0) goto LAB_0064da8b;
    }
    else {
      FUN_00650a40();
    }
LAB_0064da3b:
    if (param_2 != 3) {
      if (param_2 != 2) goto LAB_0064da8b;
LAB_0064da45:
      if ((*(uint *)(in_ECX + 0xd0) & 0x20000000) == 0) goto LAB_0064da8b;
    }
    iVar2 = *(int *)(in_ECX + 0x240);
    if (iVar2 != 0) {
      if (iVar2 == 1) goto LAB_0064da8b;
      if (iVar2 == 2) {
        *(undefined4 *)(in_ECX + 0x240) = 1;
        FUN_00655fd0();
        goto LAB_0064da8b;
      }
      *(int *)(in_ECX + 0x240) = iVar2 + -1;
    }
    FUN_0064b5a0(in_ECX + 0x248,iVar2);
  }
  else {
    iVar2 = FUN_0064daf0();
    if (iVar2 == 0) goto LAB_0064da8b;
    iVar2 = (**(code **)(in_ECX + 0x204))();
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    if (iVar2 == 0) {
      if (1 < param_2) goto LAB_0064da3b;
      if (*(int *)(in_ECX + 0x208) < 2) {
        FUN_00656020();
        FUN_006561a0();
      }
      goto LAB_0064da45;
    }
  }
  bVar1 = true;
LAB_0064da8b:
  if (*(void **)(in_ECX + 0x250) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_ECX + 0x250));
  }
  *(undefined4 *)(in_ECX + 0x250) = 0;
  if ((!bVar1) && ((*(uint *)(in_ECX + 0xd0) & 0x20000000) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  return;
}

