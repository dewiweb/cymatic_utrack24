// rea decompile_all
// name: FUN_00528620
// address: 0x528620
// body: available
// range: 0x528620-0x5286d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00528620(int param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 local_4c [4];
  undefined4 uStack_48;
  char *pcStack_44;
  char *pcStack_40;
  char *local_3c;
  ushort local_32;
  undefined1 *local_30;
  undefined1 local_2c [12];
  int local_20;
  int local_c;
  
  if (param_2 == '\0') {
    local_3c = "Unreachable Destination";
  }
  else {
    local_3c = "Unreachable Recording Destination";
  }
  local_c = (param_2 != '\0') + 0xf102;
  pcStack_40 = (char *)0x52865c;
  local_20 = FUN_005686d0();
  pcStack_40 = "A unreachable destination has been automatically removed after 60 seconds.";
  pcStack_44 = local_3c;
  uStack_48 = 0x2000;
  local_30 = local_4c;
  local_32 = *(ushort *)(param_1 + 0xfa);
  uVar2 = (uint)local_32;
  puVar3 = local_2c;
  uVar1 = (**(code **)(*(int *)(local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 0xc)) + 0x98)
          )(puVar3,uVar2);
  uVar1 = FUN_00503c30(uVar1,puVar3);
  FUN_00528070(uVar1,uVar2);
  return;
}

