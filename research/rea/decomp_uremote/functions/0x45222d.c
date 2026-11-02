// rea decompile_all
// name: FUN_0045222d
// address: 0x45222d
// body: available
// range: 0x45222d-0x4522de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045222d(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 *puVar3;
  float fVar4;
  undefined1 local_18 [4];
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x452239;
  local_14 = *(float *)(in_ECX + 0x1c);
  FUN_0044bfc5();
  if (*(char *)(in_ECX + 0x78) != '\0') {
    local_14 = (float)(*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x74));
  }
  iVar1 = FUN_005b3fb0();
  FUN_004c09cc(*(undefined4 *)(in_ECX + 0x70),((int)local_14 - iVar1) / 2 + *(int *)(in_ECX + 0x74),
               iVar1);
  iVar1 = FUN_0044bfc5();
  puVar3 = local_18;
  fVar4 = (float)*(int *)(iVar1 + 8) * 0.5;
  local_14 = fVar4;
  FUN_0044bfc5(puVar3,fVar4);
  uVar2 = FUN_0049f81a(puVar3,fVar4);
  local_8 = 0;
  FUN_004e5c31(uVar2);
  FUN_004c4d7a();
  return;
}

