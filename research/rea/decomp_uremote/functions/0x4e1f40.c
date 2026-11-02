// rea decompile_all
// name: FUN_004e1f40
// address: 0x4e1f40
// body: available
// range: 0x4e1f40-0x4e201e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 FUN_004e1f40(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int unaff_ESI;
  undefined1 local_54 [32];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4e1f4c;
  if (*(int *)(*(int *)(unaff_ESI + 0x14) + 0xd4) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_004c0848();
    local_18 = (float)local_34;
    local_20 = *(int *)(unaff_ESI + 0x20);
    if (*(int *)(*(int *)(unaff_ESI + 0x14) + 0x10) < local_34) {
      local_24 = *(int *)(unaff_ESI + 0x1c) + -2;
    }
    else {
      local_24 = *(int *)(unaff_ESI + 0x1c) + 2;
      local_18 = (float)local_2c + local_18;
    }
    FUN_0047888f();
    local_8 = 0;
    local_1c = (float)(local_28 + local_30);
    FUN_00479368(local_54,(float)local_24,(float)local_20,local_18,(float)local_30);
    local_1c = (float)param_2;
    uVar1 = FUN_0047a9bb(0x3f800000);
    FUN_004f7994();
  }
  return uVar1;
}

