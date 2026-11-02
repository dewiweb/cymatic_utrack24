// rea decompile_all
// name: FUN_00658420
// address: 0x658420
// body: available
// range: 0x658420-0x6584ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6584e4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6584eb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00658420(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int in_EDX;
  undefined1 local_48 [68];
  
  uVar1 = FUN_006586d0();
  uVar3 = extraout_ECX;
  if (uVar1 == 0) {
    uVar1 = FUN_00658a20();
    uVar3 = extraout_ECX_00;
    if (uVar1 == 0) {
      iVar2 = FUN_00658600(5);
      uVar1 = (uint)(iVar2 == 0);
      uVar3 = extraout_ECX_01;
    }
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      *(ushort *)(in_EDX + 0x4a) = *(ushort *)(in_EDX + 0x4a) | 0x8000;
      if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
        if (((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) && (*(int *)(in_ECX + 0xd0) != 0)) {
          FUN_00656020();
          return 0;
        }
        FUN_006563b0();
        return 0;
      }
      if (((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) && (*(int *)(in_ECX + 0xd0) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
    }
    else {
      *(ushort *)(in_EDX + 0x4a) = *(ushort *)(in_EDX + 0x4a) | 0x8000;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  uVar3 = FUN_00658500(param_1,local_48,uVar3);
  return uVar3;
}

