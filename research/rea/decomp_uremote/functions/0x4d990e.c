// rea decompile_all
// name: FUN_004d990e
// address: 0x4d990e
// body: available
// range: 0x4d990e-0x4d9c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d990e(undefined1 **param_1,undefined4 param_2,char param_3,char param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 **ppuStack_e8;
  undefined1 **local_e4;
  undefined4 **ppuStack_e0;
  undefined1 **local_dc;
  undefined1 **local_d8;
  uint uStack_d4;
  undefined1 **local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  float local_b4;
  undefined1 *local_b0;
  float local_ac;
  undefined1 **local_a8;
  undefined1 **local_a4;
  float local_a0;
  float local_9c;
  undefined1 auStack_94 [28];
  undefined1 local_78 [24];
  undefined4 *local_60 [6];
  undefined1 local_48 [24];
  undefined1 local_30 [20];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e18e2;
  local_14 = ExceptionList;
  uStack_d4 = DAT_00955fd4 ^ (uint)&stack0xffffff30;
  ExceptionList = &local_14;
  local_d8 = param_1;
  local_dc = (undefined1 **)0x4d9951;
  FUN_004d1ead();
  local_d8 = (undefined1 **)0x4d995c;
  FUN_0043bc2d();
  local_ac = local_a0;
  local_b4 = local_9c;
  local_d8 = (undefined1 **)0x4d9977;
  cVar2 = FUN_004bf468();
  if (cVar2 != '\0') {
    local_ac = local_9c;
    local_b4 = local_a0;
  }
  local_d8 = (undefined1 **)(local_b4 * 0.6);
  local_dc = (undefined1 **)0x4d99ac;
  local_c0 = local_d8;
  FUN_0049f51e();
  local_c = 0;
  local_d8 = (undefined1 **)0x0;
  local_dc = param_1;
  ppuStack_e0 = (undefined4 **)0x4d99ba;
  uVar3 = FUN_004c30fb();
  local_d8 = (undefined1 **)(uVar3 & 0xff);
  local_dc = (undefined1 **)0x4d99c5;
  FUN_0049f9e7();
  local_d8 = (undefined1 **)0x4d99ce;
  FUN_00476f80();
  iVar1 = *(int *)(param_1[0x37] + 0x8c);
  if (-1 < iVar1) {
    if (iVar1 < 2) {
      local_d8 = local_a4;
      ppuStack_e0 = (undefined4 **)local_30;
      local_dc = local_a8;
    }
    else {
      if (iVar1 == 2) {
        local_d8 = (undefined1 **)((float)local_a4 + local_9c);
        ppuStack_e0 = (undefined4 **)local_48;
        local_dc = local_a8;
        local_e4 = (undefined1 **)0xbfc90fdb;
        ppuStack_e8 = local_60;
        local_c0 = local_d8;
      }
      else {
        if (iVar1 != 3) goto LAB_004d9a92;
        local_dc = (undefined1 **)(local_a0 + (float)local_a8);
        ppuStack_e0 = (undefined4 **)local_78;
        local_d8 = local_a4;
        local_e4 = (undefined1 **)0x3fc90fdb;
        ppuStack_e8 = &local_a8;
        local_c0 = local_dc;
      }
      FUN_004771b4();
    }
    local_e4 = (undefined1 **)0x4d9a87;
    FUN_0047713c();
    local_d8 = (undefined1 **)0x4d9a92;
    FUN_00476f96();
  }
LAB_004d9a92:
  local_d8 = (undefined1 **)0x4d9a9b;
  FUN_00476041();
  local_d8 = param_1;
  local_dc = (undefined1 **)0x4d9aa1;
  cVar2 = thunk_FUN_004bf38c();
  if (cVar2 == '\0') {
LAB_004d9b07:
    local_d8 = (undefined1 **)0x1005813;
    local_dc = param_1;
    ppuStack_e0 = (undefined4 **)0x4d9b13;
    cVar2 = FUN_004c1ebf();
    if (cVar2 == '\0') {
      local_d8 = (undefined1 **)(local_bc + -0x3c);
      local_dc = (undefined1 **)0x4d9b22;
      cVar2 = FUN_004d30c9();
      if (cVar2 == '\0') {
        local_d8 = (undefined1 **)0x3f800000;
        local_dc = &local_b8;
        ppuStack_e0 = (undefined4 **)&local_bc;
        local_e4 = (undefined1 **)0x4d9b3d;
        FUN_004d1cdb();
        ppuStack_e0 = (undefined4 **)0x4d9b42;
        FUN_004765bf();
        local_d8 = (undefined1 **)0x4d9b4d;
        FUN_004d076d();
        goto LAB_004d9ae4;
      }
    }
  }
  else {
    local_d8 = (undefined1 **)0x1005815;
    local_dc = param_1;
    ppuStack_e0 = (undefined4 **)0x4d9ab1;
    cVar2 = FUN_004c1ebf();
    if (cVar2 == '\0') {
      local_d8 = (undefined1 **)(local_bc + -0x3c);
      local_dc = (undefined1 **)0x4d9ac4;
      cVar2 = FUN_004d30c9();
      if (cVar2 == '\0') goto LAB_004d9b07;
    }
  }
  local_d8 = (undefined1 **)0x4d9ad6;
  FUN_004d3044();
  local_d8 = (undefined1 **)0x4d9ae1;
  FUN_004d076d();
LAB_004d9ae4:
  local_d8 = (undefined1 **)0x4d9aeb;
  cVar2 = FUN_004c3153();
  if (cVar2 == '\0') {
    local_dc = (undefined1 **)0x3e99999a;
  }
  else if ((param_3 == '\0') && (param_4 == '\0')) {
    local_dc = (undefined1 **)0x3f4ccccd;
  }
  else {
    local_dc = (undefined1 **)0x3f800000;
  }
  local_b8 = (undefined1 *)&local_d8;
  ppuStack_e0 = &local_d8;
  local_e4 = (undefined1 **)0x4d9b76;
  local_bc = (undefined1 *)local_dc;
  FUN_00476237();
  local_dc = (undefined1 **)0x4d9b80;
  FUN_0047cda7();
  local_d8 = &local_b0;
  local_dc = (undefined1 **)0x4d9b8a;
  FUN_0047ceaa();
  local_dc = (undefined1 **)auStack_94;
  ppuStack_e0 = (undefined4 **)0x4d9b94;
  FUN_0047cd79();
  ppuStack_e0 = &local_c0;
  local_e4 = param_1 + 0x22;
  ppuStack_e8 = (undefined4 **)0x4d9ba5;
  FUN_00466678();
  local_14 = (void *)CONCAT31(local_14._1_3_,1);
  ppuStack_e0 = (undefined4 **)0x0;
  local_e4 = (undefined1 **)0x4d9bbe;
  uVar4 = FUN_005b3fb0();
  local_e4 = (undefined1 **)0x1;
  ppuStack_e8 = (undefined4 **)0x4d9bcd;
  local_e4 = (undefined1 **)FUN_00439b5a();
  local_bc = (undefined1 *)&ppuStack_e8;
  ppuStack_e8 = (undefined4 **)0x24;
  uVar5 = FUN_005b3fb0(uVar4);
  FUN_0047d12a(0,0,uVar5,uVar4);
  ppuStack_e0 = (undefined4 **)0x4d9bfb;
  FUN_004652d6();
  ppuStack_e0 = (undefined4 **)0x4d9c04;
  FUN_004c4d7a();
  ExceptionList = pvStack_1c;
  return;
}

