// rea decompile_all
// name: FUN_004f30ef
// address: 0x4f30ef
// body: available
// range: 0x4f30ef-0x4f3389 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f30ef(int *param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int *extraout_ECX_06;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  float local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  piVar4 = param_1 + 0x1f;
  iVar3 = param_1[0x21];
  piVar2 = (int *)*piVar4;
  local_10 = piVar2 + iVar3;
  local_5 = '\0';
  for (; piVar2 != local_10; piVar2 = piVar2 + 1) {
    if (in_EAX[3] == *piVar2) {
      local_c = (int)piVar2 - *piVar4 >> 2;
      goto LAB_004f312a;
    }
  }
  local_c = -1;
LAB_004f312a:
  if (local_c < 0) {
    local_c = 0;
    if (0 < iVar3) {
      piVar2 = (int *)*piVar4;
      do {
        if (*piVar2 == 0) break;
        local_c = local_c + 1;
        piVar2 = piVar2 + 1;
      } while (local_c < iVar3);
    }
    FUN_004f7a81();
  }
  local_1c = FUN_004f0c50();
  local_14 = (float)(in_EAX[1] / 100);
  local_10 = (int *)(float)(*in_EAX / 100);
  (**(code **)(*param_1 + 0x2c))(&local_24,local_10,local_14);
  FUN_004d076d();
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      FUN_004c751a();
      uVar6 = extraout_ECX_05;
      FUN_004c751a(extraout_ECX_05);
      FUN_00476147(uVar6);
      piVar2 = extraout_ECX_06;
    }
    else {
      uVar6 = extraout_ECX;
      FUN_004c751a(extraout_ECX);
      FUN_00476147(uVar6);
      FUN_004f7a81();
      iVar3 = param_1[0x21] + -1;
      piVar2 = extraout_ECX_03;
      if (-1 < iVar3) {
        piVar2 = (int *)(*piVar4 + iVar3 * 4);
        do {
          if (*piVar2 != 0) goto LAB_004f32c8;
          iVar3 = iVar3 + -1;
          piVar2 = piVar2 + -1;
        } while (-1 < iVar3);
      }
      local_5 = '\x01';
      if (param_1[0x20] != 0) {
        piVar2 = (int *)*piVar4;
        _free(piVar2);
        *piVar4 = 0;
        param_1[0x20] = 0;
      }
      param_1[0x21] = 0;
      FUN_004c751a(piVar2);
      FUN_00476147(piVar2);
      piVar2 = extraout_ECX_04;
    }
LAB_004f32c8:
    if (param_2 == '\0') {
LAB_004f32ce:
      uVar5 = local_1c;
      FUN_004d076d(piVar2,local_1c,local_24,local_20);
      FUN_004ed59b(param_1,piVar2,uVar5,local_24,local_20);
      piVar2 = param_1;
      cVar1 = FUN_004ed52d(param_1);
      if (cVar1 == '\0') goto LAB_004f323a;
    }
LAB_004f330c:
    if (((param_4 != '\0') || (local_5 != '\0')) && (param_2 == '\0')) {
      uVar6 = 0xc1200000;
      uVar7 = 0xc1200000;
      uVar5 = local_1c;
      FUN_004d076d(piVar2,local_1c,0xc1200000,0xc1200000);
      FUN_004ed59b(param_1,piVar2,uVar5,uVar6,uVar7);
      cVar1 = FUN_004ed52d(param_1);
      if (cVar1 == '\0') goto LAB_004f323a;
    }
    uVar6 = 1;
  }
  else {
    FUN_004c751a();
    uVar6 = extraout_ECX_00;
    FUN_004c751a(extraout_ECX_00);
    FUN_00476147(uVar6);
    uVar6 = extraout_ECX_01;
    FUN_004d076d(extraout_ECX_01);
    FUN_00476147(uVar6);
    piVar2 = extraout_ECX_02;
    if (param_2 != '\0') goto LAB_004f330c;
    piVar4 = extraout_ECX_02;
    uVar6 = local_24;
    uVar7 = local_20;
    uVar5 = local_1c;
    FUN_004c751a(extraout_ECX_02,local_1c,local_24,local_20);
    FUN_004ed59b(param_1,piVar4,uVar5,uVar6,uVar7);
    piVar2 = param_1;
    cVar1 = FUN_004ed52d(param_1);
    if (cVar1 != '\0') goto LAB_004f32ce;
LAB_004f323a:
    uVar6 = 0;
  }
  return uVar6;
}

