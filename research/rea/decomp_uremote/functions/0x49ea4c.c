// rea decompile_all
// name: FUN_0049ea4c
// address: 0x49ea4c
// body: available
// range: 0x49ea4c-0x49eafa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float10 FUN_0049ea4c(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  float10 fVar4;
  int *local_1c;
  float local_14;
  
  pcVar1 = (char *)*param_1;
  local_14 = 0.0;
  while (*pcVar1 != '\0') {
    FUN_0044eba8();
    iVar2 = FUN_0049e9d0(1);
    if (iVar2 == 0) {
      FUN_0049e080();
      if ((local_1c != (int *)0x0) && (local_1c != in_ECX)) {
        uVar3 = FUN_00465544();
        fVar4 = (float10)(**(code **)(*local_1c + 0x14))(uVar3);
        local_14 = (float)(fVar4 + (float10)local_14);
        FUN_004652d6();
      }
      FUN_00474d0f();
    }
    else {
      FUN_00460791();
      fVar4 = (float10)FUN_0049e78c();
      local_14 = (float)(fVar4 + (float10)local_14);
    }
  }
  return (float10)local_14;
}

