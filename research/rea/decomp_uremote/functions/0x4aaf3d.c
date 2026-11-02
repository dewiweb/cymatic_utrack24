// rea decompile_all
// name: FUN_004aaf3d
// address: 0x4aaf3d
// body: available
// range: 0x4aaf3d-0x4aafb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004aaf3d(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int in_EDX;
  int unaff_EBX;
  
  if (unaff_EBX == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3f000000;
  }
  FUN_00477489();
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(uint *)(param_1 + 0x44) = -(uint)(unaff_EBX != 0) & 0xffffff80;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(int *)(param_1 + 0x50) = param_3 + 1;
  *(int *)(param_1 + 0x4c) = in_EDX;
  *(int *)(param_1 + 0x54) = unaff_EBX;
  *(int *)(param_1 + 0x58) = *(int *)(in_EDX + 0x10) + -1;
  *(int *)(param_1 + 0x5c) = *(int *)(in_EDX + 0x14) + -1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x800;
  FUN_004ab013();
  return param_1;
}

