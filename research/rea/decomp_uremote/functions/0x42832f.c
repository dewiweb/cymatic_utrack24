// rea decompile_all
// name: FUN_0042832f
// address: 0x42832f
// body: available
// range: 0x42832f-0x4284ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042832f(int *param_1,int param_2,int param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint local_18;
  uint local_10;
  
  local_18 = CONCAT31(local_18._1_3_,(byte)param_4) & 0xffffff80;
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(iVar1 + 0x68);
  _memset(param_1,0,0xd0);
  if (((param_4 & 2) == 0) && (param_5 == '\0')) {
    if ((*(char *)(param_2 + 0x12d) == '\0') && (iVar3 = FUN_00429083(local_18), iVar3 != 0)) {
      return iVar3;
    }
    if (*(char *)(param_2 + 0x124) == '\0') {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x1c);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x128);
    }
    if (iVar3 == 0) {
      return 0x99;
    }
    bVar8 = (param_4 & 0xf0000) != 0x20000;
    FUN_0042948b(iVar1);
    if (bVar8 != (bool)*(char *)(iVar3 + 0x25c)) {
      local_10 = 0;
      *(char *)(iVar3 + 0x25c) = bVar8;
      if (*(int *)(param_2 + 0xf0) != 0) {
        do {
          uVar4 = thunk_FUN_00401000((int)*(short *)(*(int *)(iVar1 + 0x2a0) + local_10 * 2),
                                     *(undefined4 *)(param_2 + 0x58));
          *(undefined4 *)(*(int *)(param_2 + 0xf4) + local_10 * 4) = uVar4;
          local_10 = local_10 + 1;
        } while (local_10 < *(uint *)(param_2 + 0xf0));
      }
      FUN_00428d81(param_2,local_18);
    }
    if ((*(byte *)(iVar3 + 0x150) & 1) != 0) {
      param_4 = param_4 | 2;
    }
    if ((*(byte *)(iVar3 + 0x150) & 2) != 0) {
      puVar6 = &DAT_0090bce8;
      puVar7 = (undefined4 *)(iVar3 + 0x11c);
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(byte *)(iVar3 + 0x231) = (byte)param_4 & 0x80;
    param_1[0x28] = iVar3;
    param_1[0x29] = *(int *)(iVar3 + 0x188);
  }
  iVar3 = 0;
  if (*(int *)(*(int *)(iVar1 + 0x80) + 0x34) == 0) {
    iVar3 = (**(code **)(iVar1 + 0x1fc))(iVar1,0x676c7966,iVar2,0);
    if (iVar3 == 0x8e) {
      param_1[0x15] = 0;
      goto LAB_004284b7;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_004d021d();
  }
  param_1[0x15] = iVar3;
LAB_004284b7:
  if (param_5 == '\0') {
    iVar3 = FUN_0040d5dd();
    param_1[3] = iVar3;
  }
  param_1[4] = param_4;
  param_1[2] = param_3;
  param_1[6] = iVar2;
  *param_1 = iVar1;
  param_1[1] = param_2;
  return 0;
}

