// rea decompile_all
// name: FUN_004a0f1a
// address: 0x4a0f1a
// body: available
// range: 0x4a0f1a-0x4a0fca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a0f1a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int in_EDX;
  int *unaff_EBX;
  float10 fVar3;
  float local_18;
  
  fVar3 = (float10)FUN_0049fa43();
  fVar2 = (float)(fVar3 * (float10)0.30000001192092896);
  local_18 = *(float *)(in_EDX + 0x14) + *(float *)(in_EDX + 0xc);
  if ((in_ECX < unaff_EBX[2] + -1) &&
     (iVar1 = in_ECX * 0x1c + *unaff_EBX, *(float *)(in_EDX + 0x10) == *(float *)(iVar1 + 0x2c))) {
    local_18 = *(float *)(iVar1 + 0x28);
  }
  FUN_0047888f();
  FUN_00478eaa(*(undefined4 *)(in_EDX + 0xc),fVar2 + fVar2 + *(float *)(in_EDX + 0x10),
               local_18 - *(float *)(in_EDX + 0xc),fVar2);
  FUN_0047d2ae(extraout_ECX,param_2);
  FUN_004f7994();
  return;
}

