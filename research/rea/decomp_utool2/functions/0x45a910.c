// rea decompile_all
// name: FUN_0045a910
// address: 0x45a910
// body: available
// range: 0x45a910-0x45aa22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45aa14 to 0x4bed22 FUN_004bed22 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45aa1e to 0x4bed22 FUN_004bed22 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045a910(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  
  uVar2 = in_ECX[5];
  piVar4 = in_ECX;
  if (0xf < uVar2) {
    piVar4 = (int *)*in_ECX;
  }
  if (piVar4 < &UNK_00c129a5) {
    piVar4 = in_ECX;
    if (0xf < uVar2) {
      piVar4 = (int *)*in_ECX;
    }
    if (&DAT_00c129a4 < (undefined *)(in_ECX[4] + (int)piVar4)) {
      piVar4 = in_ECX;
      if (0xf < uVar2) {
        piVar4 = (int *)*in_ECX;
      }
      FUN_0045aa30(in_ECX,(int)&DAT_00c129a4 - (int)piVar4,param_2);
      return;
    }
  }
  uVar3 = in_ECX[4];
  if (~uVar3 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_004bed22("string too long");
  }
  uVar1 = uVar3 + param_2;
  if (param_2 != 0) {
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004bed22("string too long");
    }
    if (uVar2 < uVar1) {
      FUN_0045bd50(uVar1,uVar3);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if (0xf < uVar2) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    piVar4 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar4 = (int *)*in_ECX;
    }
    if (param_2 != 0) {
      FUN_004c2c30(in_ECX[4] + (int)piVar4,&DAT_00c129a4,param_2);
    }
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}

