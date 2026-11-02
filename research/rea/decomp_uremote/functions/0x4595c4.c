// rea decompile_all
// name: FUN_004595c4
// address: 0x4595c4
// body: available
// range: 0x4595c4-0x459658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004595c4(void)

{
  int in_ECX;
  float10 fVar1;
  undefined1 *puVar2;
  float fVar3;
  undefined1 local_1c [8];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4595d0;
  FUN_0046537e(local_14);
  local_8 = 0;
  FUN_0043a9ae(local_14,*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x1c) / 2);
  FUN_0049f5e8();
  FUN_004c4d7a();
  local_8 = 0xffffffff;
  FUN_004652d6();
  fVar1 = (float10)FUN_0049fa3d();
  puVar2 = local_1c;
  fVar3 = (float)fVar1;
  FUN_0044bfc5(puVar2,fVar3);
  FUN_0049f81a(puVar2,fVar3);
  FUN_0049f5e8();
  FUN_004c4d7a();
  return;
}

