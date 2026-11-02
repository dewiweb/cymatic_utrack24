// rea decompile_all
// name: FUN_004335f5
// address: 0x4335f5
// body: available
// range: 0x4335f5-0x4338e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004335f5(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_34 [3];
  int local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  void *local_14;
  int local_10;
  size_t local_c;
  int local_8;
  
  local_14 = (void *)0x0;
  local_c = 0;
  iVar9 = *(int *)(param_1 + 4);
  local_1c = *(undefined4 *)(iVar9 + 100);
  iVar8 = *(int *)(iVar9 + 0x148);
  iVar2 = *(int *)(iVar9 + 0x88);
  local_24 = *(int **)(*(int *)(iVar9 + 0x80) + 0x34);
  local_28 = iVar9;
  if (local_24 == (int *)0x0) {
    local_20 = *(int *)(iVar9 + 0x124) + *(int *)(iVar9 + 0x120);
    local_8 = FUN_0041106d();
    if (local_8 != 0) {
      return local_8;
    }
    local_8 = FUN_004111b5();
    if (local_8 != 0) {
      return local_8;
    }
    local_10 = *(int *)(iVar8 + 0x20);
    uVar7 = FUN_004327cf(*(undefined1 *)(iVar9 + 0x120));
    local_20 = FUN_004327cf(*(undefined1 *)(iVar9 + 0x124));
    local_10 = local_10 + *(int *)(iVar9 + 0x120);
    iVar8 = FUN_004327cf(*(undefined1 *)(iVar9 + 0x124));
    local_c = iVar8 - local_20;
    FUN_00411249();
    if (*(uint *)(iVar9 + 300) <= uVar7) {
      return 9;
    }
    if (local_c == 0) {
      return local_8;
    }
    local_14 = (void *)FUN_00411912(local_c,&local_8);
    if (local_8 != 0) {
      return local_8;
    }
    iVar9 = FUN_004110cd(local_14,local_c);
    if (iVar9 != 0) {
      return iVar9;
    }
    local_8 = 0;
    iVar9 = local_28;
  }
  else {
    local_8 = (**(code **)*local_24)(local_24[1],param_2,local_34 + 2);
    if (local_8 != 0) {
      return local_8;
    }
    local_10 = local_34[2];
    uVar7 = FUN_004327cf(*(undefined1 *)(iVar9 + 0x120));
    if (local_28 != 0) {
      local_c = local_28 - *(int *)(iVar9 + 0x120);
      local_14 = (void *)FUN_00411912(local_c,&local_8);
      if (local_8 == 0) {
        _memcpy(local_14,(void *)(*(int *)(iVar9 + 0x120) + local_34[2]),local_c);
      }
    }
    (**(code **)(*local_24 + 4))(local_24[1],local_34 + 2);
    if (local_8 != 0) {
      return local_8;
    }
  }
  sVar6 = local_c;
  puVar1 = (undefined4 *)(*(int *)(iVar9 + 0x13c) + uVar7 * 8);
  *(undefined4 *)(param_1 + 0x554) = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x558) = uVar3;
  iVar9 = uVar7 * 0xfc + *(int *)(iVar9 + 0x130);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(iVar9 + 0xd8);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar9 + 0xdc);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(iVar9 + 0xe0);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(iVar9 + 0xe4);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(iVar9 + 0xe8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar9 + 0xec);
  iVar9 = *(int *)(iVar9 + 4);
  *(int *)(param_1 + 0x550) = iVar9;
  iVar8 = iVar9;
  if (iVar9 < 0) {
    iVar8 = 0;
  }
  if (-1 < iVar9) {
    (**(code **)(iVar2 + 0x10))(local_14,local_c,0x10ea);
  }
  pvVar5 = local_14;
  local_8 = (**(code **)(param_1 + 0x5cc))(param_1,iVar8 + (int)local_14,sVar6 - iVar8);
  FUN_00411a5c(pvVar5);
  piVar4 = local_24;
  if (((local_8 == 0) && (local_24 != (int *)0x0)) && (*(int *)(*local_24 + 8) != 0)) {
    local_34[0] = FUN_0040d211();
    local_34[0] = local_34[0] >> 0x10;
    local_34[1] = 0;
    local_34[2] = FUN_0040d211();
    local_34[2] = local_34[2] >> 0x10;
    uVar10 = FUN_0040d211();
    local_28 = (int)uVar10 >> 0x10;
    local_8 = (**(code **)((int)((ulonglong)uVar10 >> 0x20) + 8))(piVar4[1],param_2,0,local_34);
    *(int *)(param_1 + 0x20) = local_34[0] << 0x10;
    *(int *)(param_1 + 0x28) = local_34[2] << 0x10;
    *(int *)(param_1 + 0x2c) = local_28 << 0x10;
  }
  return local_8;
}

