// rea decompile_all
// name: FUN_004192f3
// address: 0x4192f3
// body: available
// range: 0x4192f3-0x4193d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004192f3(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_1b4 [96];
  undefined4 local_34 [4];
  int local_24;
  byte local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar5 = param_2;
  local_8 = 0;
  iVar1 = param_2[2];
  puVar3 = param_2;
  puVar4 = local_34;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_34[2] = 2;
  if ((iVar1 == 9) || (iVar1 == 7)) {
    local_34[2] = 3;
  }
  FUN_00418e52(param_1,local_1b4,0x20,&param_2);
  if ((int)param_2 < 0) {
    local_8 = 0xa2;
  }
  else {
    if ((undefined4 *)puVar5[6] < param_2) {
      param_2 = (undefined4 *)puVar5[6];
    }
    local_10 = *param_1;
    local_c = param_1[2];
    if ((puVar5[2] != 7) && (puVar5[7] != 0)) {
      *(undefined1 *)(puVar5[7] + *param_3) = param_2._0_1_;
    }
    puVar5 = local_1b4;
    if (0 < (int)param_2) {
      do {
        *param_1 = *puVar5;
        param_1[2] = puVar5[1];
        FUN_004190c4(param_1,local_34,param_3,param_4,0);
        local_24 = local_24 + (uint)local_20;
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar5 = puVar5 + 3;
      } while (0 < (int)param_2);
    }
    *param_1 = local_10;
    param_1[2] = local_c;
  }
  return local_8;
}

