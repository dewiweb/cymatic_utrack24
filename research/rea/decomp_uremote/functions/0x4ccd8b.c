// rea decompile_all
// name: FUN_004ccd8b
// address: 0x4ccd8b
// body: available
// range: 0x4ccd8b-0x4cce5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ccd8b(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4ccd97;
  puVar4 = local_18;
  FUN_00472339(puVar4);
  FUN_00461769(puVar4);
  local_8 = 0;
  puVar4 = local_14;
  FUN_00472339(puVar4);
  FUN_00461769(puVar4);
  cVar1 = FUN_0046595f(local_14);
  uVar2 = 1;
  if (cVar1 == '\0') {
    cVar1 = FUN_0046595f(local_14);
    uVar2 = -(uint)(cVar1 != '\0') & 2;
  }
  cVar1 = FUN_0046595f(local_18);
  if (cVar1 == '\0') {
    FUN_0046595f(local_18);
  }
  FUN_00472339(uVar2);
  fVar3 = (float10)FUN_00461752();
  FUN_0047baf0((float)fVar3,uVar2);
  FUN_004652d6();
  FUN_004652d6();
  return param_2;
}

