// rea decompile_all
// name: FUN_004c9743
// address: 0x4c9743
// body: available
// range: 0x4c9743-0x4c983d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c9743(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_4c [5];
  undefined4 local_38;
  undefined1 local_34 [16];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x4c974f;
  iVar3 = 2;
  puVar2 = local_4c;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (-1 < iVar3);
  FUN_004e37d9(param_2);
  FUN_004c9506(local_34);
  local_8 = 0;
  FUN_004e46fb(&local_24,param_2);
  local_8 = 0xffffffff;
  FUN_004c0c32();
  FUN_004775b5(local_4c,local_24,local_20,local_4c[0],local_4c[1],local_1c + local_24,local_20,
               local_4c[2],local_4c[3],local_24,local_18 + local_20,local_4c[4],local_38);
  cVar1 = FUN_0047753a();
  if (cVar1 != '\0') {
    FUN_00476f96();
  }
  FUN_004c0cff();
  return;
}

