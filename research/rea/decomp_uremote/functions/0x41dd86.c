// rea decompile_all
// name: FUN_0041dd86
// address: 0x41dd86
// body: available
// range: 0x41dd86-0x41dee0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041dd86(undefined4 param_1,uint param_2,uint param_3,code *param_4,code *param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 local_5c [10];
  int local_34 [11];
  int local_8;
  
  iVar2 = param_2;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  local_34[9] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar3 = (undefined4 *)FUN_00411976(8,0,&local_8);
  *(undefined4 **)(param_2 + 0x14) = puVar3;
  if (local_8 == 0) {
    param_2 = 0;
    if (param_3 != 0) {
      do {
        local_34[10] = (*param_4)(param_6,param_2);
        if (local_34[10] != 0) {
          FUN_0041dd1a(local_34[10],param_2,local_5c,local_34);
          uVar4 = FUN_0041dc12(local_34[10]);
          if ((uVar4 & 0x7fffffff) != 0) {
            FUN_0041dd64(uVar4,local_34);
            *puVar3 = extraout_EDX;
            puVar3[1] = param_2;
            puVar3 = puVar3 + 2;
          }
          if (param_5 != (code *)0x0) {
            (*param_5)(param_6,local_34[10]);
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 < param_3);
    }
    uVar4 = 0;
    do {
      if (*(int *)((int)local_34 + uVar4) == 1) {
        *puVar3 = *(undefined4 *)((int)&DAT_0090b3e8 + uVar4);
        puVar3[1] = *(undefined4 *)((int)local_5c + uVar4);
        puVar3 = puVar3 + 2;
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x28);
    iVar1 = *(int *)(iVar2 + 0x14);
    uVar4 = (int)puVar3 - iVar1 >> 3;
    if (uVar4 == 0) {
      FUN_00411a5c(iVar1);
      *(undefined4 *)(iVar2 + 0x14) = 0;
      local_8 = 0xa3;
    }
    else {
      if (uVar4 < param_3 >> 1) {
        uVar5 = FUN_00411976(8,iVar1,&local_8);
        *(undefined4 *)(iVar2 + 0x14) = uVar5;
        local_8 = 0;
      }
      _qsort(*(void **)(iVar2 + 0x14),uVar4,8,(_PtFuncCompare *)&LAB_0041dce9);
    }
    *(uint *)(iVar2 + 0x10) = uVar4;
  }
  return local_8;
}

