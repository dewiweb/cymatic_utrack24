// rea decompile_all
// name: FUN_00452ec7
// address: 0x452ec7
// body: available
// range: 0x452ec7-0x453222 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00452ec7(undefined4 *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined *puVar2;
  uint *apuStack_34 [5];
  undefined1 *local_20;
  uint local_1c;
  undefined1 local_18 [4];
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x452ed3;
  local_14[0] = 0;
  apuStack_34[0] = (uint *)0x452ee2;
  cVar1 = FUN_00448866();
  if (cVar1 == '\0') {
    apuStack_34[0] = &local_1c;
    puVar2 = (undefined *)FUN_0046537e();
    local_8 = 0;
    local_14[0] = 1;
  }
  else {
    puVar2 = &DAT_0095d718;
  }
  local_20 = (undefined1 *)apuStack_34;
  FUN_004652e4(puVar2);
  apuStack_34[0] = (uint *)FUN_00465c6b(local_18);
  local_8 = 1;
  FUN_004518b2(param_1);
  apuStack_34[0] = (uint *)0x452f3e;
  FUN_004652d6();
  local_8._0_1_ = 4;
  if ((local_14[0] & 1) != 0) {
    apuStack_34[0] = (uint *)0x452f4f;
    FUN_004652d6();
  }
  param_1[0x52] = param_2;
  *(char *)(param_1 + 0x53) = param_3;
  apuStack_34[0] = local_14;
  *param_1 = StereoOutputsChoice::vftable;
  param_1[0x1f] = StereoOutputsChoice::vftable;
  FUN_0046537e();
  apuStack_34[0] = (uint *)0x1;
  local_8._0_1_ = 5;
  FUN_004e4a38(local_14);
  local_8._0_1_ = 4;
  apuStack_34[0] = (uint *)0x452f9c;
  FUN_004652d6();
  apuStack_34[0] = local_14;
  FUN_0046537e();
  apuStack_34[0] = (uint *)0x3;
  local_8._0_1_ = 6;
  FUN_004e4a38(local_14);
  local_8._0_1_ = 4;
  apuStack_34[0] = (uint *)0x452fc5;
  FUN_004652d6();
  apuStack_34[0] = local_14;
  FUN_0046537e();
  apuStack_34[0] = (uint *)0x5;
  local_8._0_1_ = 7;
  FUN_004e4a38(local_14);
  local_8._0_1_ = 4;
  apuStack_34[0] = (uint *)0x452fee;
  FUN_004652d6();
  apuStack_34[0] = local_14;
  FUN_0046537e();
  apuStack_34[0] = (uint *)0x7;
  local_8._0_1_ = 8;
  FUN_004e4a38(local_14);
  local_8._0_1_ = 4;
  apuStack_34[0] = (uint *)0x453017;
  FUN_004652d6();
  if (param_3 == '\0') {
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0x9;
    local_8._0_1_ = 9;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x45304a;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0xb;
    local_8._0_1_ = 10;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x453073;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0xd;
    local_8._0_1_ = 0xb;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x45309c;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0xf;
    local_8._0_1_ = 0xc;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x4530c5;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0x11;
    local_8._0_1_ = 0xd;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x4530ee;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0x13;
    local_8._0_1_ = 0xe;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x453117;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0x15;
    local_8._0_1_ = 0xf;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x453140;
    FUN_004652d6();
    apuStack_34[0] = (uint *)&param_3;
    FUN_0046537e();
    apuStack_34[0] = (uint *)0x17;
    local_8._0_1_ = 0x10;
    FUN_004e4a38(&param_3);
    local_8._0_1_ = 4;
    apuStack_34[0] = (uint *)0x453169;
    FUN_004652d6();
    apuStack_34[0] = (uint *)0x453171;
    cVar1 = FUN_00448866();
    if (cVar1 != '\0') {
      apuStack_34[0] = (uint *)&param_3;
      FUN_0046537e();
      apuStack_34[0] = (uint *)0x19;
      local_8._0_1_ = 0x11;
      FUN_004e4a38(&param_3);
      local_8._0_1_ = 4;
      apuStack_34[0] = (uint *)0x4531a2;
      FUN_004652d6();
      apuStack_34[0] = (uint *)&param_3;
      FUN_0046537e();
      apuStack_34[0] = (uint *)0x1b;
      local_8._0_1_ = 0x12;
      FUN_004e4a38(&param_3);
      local_8._0_1_ = 4;
      apuStack_34[0] = (uint *)0x4531cb;
      FUN_004652d6();
      apuStack_34[0] = (uint *)&param_3;
      FUN_0046537e();
      apuStack_34[0] = (uint *)0x1d;
      local_8._0_1_ = 0x13;
      FUN_004e4a38(&param_3);
      local_8._0_1_ = 4;
      apuStack_34[0] = (uint *)0x4531f4;
      FUN_004652d6();
      apuStack_34[0] = (uint *)&param_3;
      FUN_0046537e();
      apuStack_34[0] = (uint *)0x1f;
      local_8 = CONCAT31(local_8._1_3_,0x14);
      FUN_004e4a38(&param_3);
      apuStack_34[0] = (uint *)0x453219;
      FUN_004652d6();
    }
  }
  return param_1;
}

