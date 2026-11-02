// rea decompile_all
// name: FUN_004a171a
// address: 0x4a171a
// body: available
// range: 0x4a171a-0x4a17a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004a171a(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 unaff_EBX;
  float10 fVar3;
  float10 fVar4;
  
  FUN_004652e4(unaff_EBX);
  FUN_0049f50b();
  FUN_004d076d();
  fVar3 = (float10)FUN_0049fa7b(unaff_EBX);
  fVar4 = (float10)FUN_0049fa3d();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(float *)(param_1 + 0x14) = (float)fVar3;
  *(float *)(param_1 + 0x18) = (float)fVar4;
  *(undefined1 *)(param_1 + 0x24) = param_4;
  cVar1 = FUN_00465e93(10);
  if (cVar1 == '\0') {
    cVar1 = FUN_00465e93(0xd);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_004a179d;
  }
  uVar2 = 1;
LAB_004a179d:
  *(undefined1 *)(param_1 + 0x25) = uVar2;
  return param_1;
}

