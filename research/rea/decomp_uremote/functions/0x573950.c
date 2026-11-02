// rea decompile_all
// name: FUN_00573950
// address: 0x573950
// body: available
// range: 0x573950-0x573b32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573950(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  undefined8 uVar4;
  undefined1 local_20 [16];
  undefined4 local_10;
  ushort local_c [2];
  int local_8;
  
  local_8 = 0;
  FUN_0054f6b0();
  sVar1 = FUN_00558f30(0);
  if (sVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x24))(local_20);
    local_8 = FUN_00571930(uVar2);
    if ((local_8 == 0) || (local_8 == 0xd)) {
      (**(code **)(*param_1 + 0x18))(local_c);
      uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0xd8);
      *(ushort *)(in_ECX + 0xe4) = *(ushort *)(in_ECX + 0xe4) | -(ushort)(local_c[0] != 0) & 0x20;
      *(undefined4 *)(in_ECX + 0xe0) = uVar2;
      if ((local_c[0] & 0x8000) != 0) {
        FUN_0052f620(1);
      }
      if ((local_c[0] & 1) != 0) {
        uVar2 = (**(code **)(*param_1 + 0x1c))();
        FUN_0052f560(uVar2);
      }
      if ((local_c[0] & 2) != 0) {
        uVar4 = (**(code **)(*param_1 + 0x20))();
        FUN_0052f5c0(uVar4);
      }
      local_10 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[1] + 4) + 4) + 0x24))();
      uVar3 = FUN_00521c70(in_ECX + 0x98,local_10);
      if ((uVar3 & 0x80) == 0) {
        local_8 = FUN_005724a0();
        if (local_8 == 0) {
          uVar3 = FUN_00521c70(in_ECX + 0x98,local_10);
          if ((uVar3 & 0x80) == 0) {
            local_8 = 1;
          }
        }
      }
      if (local_8 == 0) {
        local_8 = FUN_005724a0();
      }
    }
  }
  FUN_0054f6f0();
  return;
}

