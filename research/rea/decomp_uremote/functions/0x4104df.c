// rea decompile_all
// name: FUN_004104df
// address: 0x4104df
// body: available
// range: 0x4104df-0x410590 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004104df(int param_1,undefined2 param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  
  if ((param_4 == (undefined4 *)0x0) || (param_1 == 0)) {
    local_8 = 6;
  }
  else {
    puVar3 = &DAT_008faecc;
    puVar4 = param_4;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar1 = FUN_00411976(8,0,&local_8);
    param_4[1] = uVar1;
    if (local_8 == 0) {
      uVar1 = FUN_00411976(1,0,&local_8);
      param_4[2] = uVar1;
      if (local_8 == 0) {
        uVar1 = FUN_00411976(2,0,&local_8);
        param_4[3] = uVar1;
        if (local_8 == 0) {
          param_4[4] = param_4[4] | 1;
          *(undefined2 *)param_4 = param_3;
          *(undefined2 *)((int)param_4 + 2) = param_2;
          return 0;
        }
      }
    }
    param_4[4] = param_4[4] | 1;
    FUN_0041066a();
  }
  return local_8;
}

