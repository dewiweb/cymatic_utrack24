// rea decompile_all
// name: FUN_004c8bf0
// address: 0x4c8bf0
// body: available
// range: 0x4c8bf0-0x4c8cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c8bf0(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  int unaff_EBX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  undefined1 local_34 [28];
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x4c8bfc;
  FUN_0047dafe();
  local_8 = 0;
  puVar4 = local_34;
  FUN_004c0d8f(local_4c);
  puVar3 = local_64;
  local_18 = -*(int *)(unaff_EBX + 0x70);
  FUN_00477188((float)local_18,(float)-*(int *)(unaff_EBX + 0x74),puVar3,puVar4);
  FUN_00477099(puVar3);
  uVar2 = FUN_00477099(puVar4);
  FUN_0047cd79(uVar2);
  cVar1 = FUN_0047ccf5();
  if (cVar1 == '\0') {
    if (1.0 <= param_1) {
      FUN_004c19f3(in_ECX,1);
    }
    else {
      FUN_0047cd87(param_1);
      FUN_004c19f3(in_ECX,1);
      FUN_0047cda0();
    }
  }
  local_8 = 0xffffffff;
  FUN_0047db0c();
  return;
}

