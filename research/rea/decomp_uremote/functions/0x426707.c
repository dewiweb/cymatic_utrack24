// rea decompile_all
// name: FUN_00426707
// address: 0x426707
// body: available
// range: 0x426707-0x4267d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00426707(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint local_c;
  int local_8;
  
  local_8 = (**(code **)(param_1 + 0x1fc))(param_1,0x63767420);
  if (local_8 == 0) {
    *(uint *)(param_1 + 0x29c) = local_c >> 1;
    uVar3 = FUN_00411976(2,0,&local_8);
    *(undefined4 *)(param_1 + 0x2a0) = uVar3;
    if ((local_8 == 0) && (local_8 = FUN_004111b5(), local_8 == 0)) {
      puVar4 = *(undefined2 **)(param_1 + 0x2a0);
      puVar1 = puVar4 + *(int *)(param_1 + 0x29c);
      for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
        uVar2 = FUN_00411277();
        *puVar4 = uVar2;
      }
      FUN_00411249();
      if (*(char *)(param_1 + 0x2c4) != '\0') {
        local_8 = FUN_0042dcc6(param_1);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    local_8 = 0;
  }
  return local_8;
}

