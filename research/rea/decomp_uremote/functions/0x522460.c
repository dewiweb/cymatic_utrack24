// rea decompile_all
// name: FUN_00522460
// address: 0x522460
// body: available
// range: 0x522460-0x52252a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00522460(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_2c [16];
  uint local_1c;
  uint local_18;
  undefined1 local_14 [12];
  int local_8;
  
  puVar2 = local_2c;
  (**(code **)(*(int *)(param_1 + 0x28 + *(int *)(*(int *)(param_1 + 0x28) + 0xc)) + 0x24))
            (puVar2,local_14);
  FUN_00503b30(puVar2);
  local_8 = FUN_00522bb0(local_14);
  if (local_8 != 0) {
    local_1c = (uint)*(ushort *)(local_8 + 0xc);
    local_18 = *(uint *)(local_8 + 0x10);
    *(undefined2 *)(local_8 + 0xc) = *(undefined2 *)(param_1 + 0x80);
    *(undefined4 *)(local_8 + 0x10) = *(undefined4 *)(param_1 + 0x7c);
    if ((local_1c < local_18) || (*(uint *)(local_8 + 0x10) < (uint)*(ushort *)(local_8 + 0xc))) {
      uVar1 = FUN_0052e6e0();
      *(undefined4 *)(local_8 + 0x14) = uVar1;
    }
    else {
      FUN_00526e90();
      *(undefined4 *)(local_8 + 0x14) = 0;
    }
  }
  return;
}

