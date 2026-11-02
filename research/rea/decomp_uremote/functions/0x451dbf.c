// rea decompile_all
// name: FUN_00451dbf
// address: 0x451dbf
// body: available
// range: 0x451dbf-0x451e90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00451dbf(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined1 local_1c [4];
  float local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x451dcb;
  local_14 = *(float *)(in_ECX + 0x1c);
  FUN_0044bfc5();
  if (*(char *)(in_ECX + 0x78) != '\0') {
    local_14 = (float)(*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x74));
  }
  local_18 = (float)FUN_005b3fb0();
  FUN_004c09cc(*(undefined4 *)(in_ECX + 0x70),
               ((int)local_14 - (int)local_18) / 2 + *(int *)(in_ECX + 0x74),local_18);
  iVar1 = FUN_0044bfc5();
  local_14 = (float)*(int *)(iVar1 + 8) * 0.5;
  local_18 = (float)(int)local_18 * 0.85;
  fVar3 = (float10)FUN_0043d2e1(local_14,local_18);
  puVar4 = local_1c;
  fVar5 = (float)fVar3;
  FUN_0044bfc5(puVar4,fVar5);
  uVar2 = FUN_0049f81a(puVar4,fVar5);
  local_8 = 0;
  FUN_004e981e(in_ECX + 0x88,uVar2);
  FUN_004c4d7a();
  return;
}

