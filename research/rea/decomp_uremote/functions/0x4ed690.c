// rea decompile_all
// name: FUN_004ed690
// address: 0x4ed690
// body: available
// range: 0x4ed690-0x4ed753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ed690(void)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  undefined1 local_48 [24];
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined1 local_20 [12];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4ed69c;
  FUN_004f4b4e();
  FUN_0047cc98();
  local_8 = 0;
  cVar1 = FUN_004c0d86();
  if (cVar1 != '\0') {
    uVar2 = FUN_004c0d8f(local_48);
    FUN_0047cd79(uVar2);
  }
  (**(code **)(*unaff_EDI + 0x1c))(local_30);
  if ((local_28 != *(int *)(unaff_EDI[1] + 0x18)) || (local_24 != *(int *)(unaff_EDI[1] + 0x1c))) {
    local_14 = *(int *)(unaff_EDI[1] + 0x18);
    uVar2 = FUN_00477435((float)local_28 / (float)local_14,
                         (float)local_24 / (float)*(int *)(unaff_EDI[1] + 0x1c));
    FUN_0047cd79(uVar2);
  }
  FUN_004c19f3(local_20,1);
  local_8 = 0xffffffff;
  FUN_0047cca3();
  return;
}

