// rea decompile_all
// name: FUN_004c5f97
// address: 0x4c5f97
// body: available
// range: 0x4c5f97-0x4c61a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004c5f97(char param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *extraout_ECX;
  int *piStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *local_70;
  undefined4 *local_6c;
  undefined4 local_4c [3];
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34 [11];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x4c5fa3;
  local_6c = (undefined4 *)0x4c5fb6;
  local_3c = in_ECX;
  FUN_004c661d();
  local_8 = 0;
  local_6c = (undefined4 *)((int)param_3 - in_ECX[0x2f]);
  local_70 = (int *)((int)param_2 - in_ECX[0x2e]);
  if (in_ECX[3] != 0) {
    piStack_74 = (int *)0x0;
    piStack_7c = (int *)0x4c5fea;
    piStack_78 = (int *)in_ECX[3];
    piVar2 = (int *)FUN_004c08d2();
    local_70 = (int *)*piVar2;
    local_6c = (undefined4 *)piVar2[1];
  }
  piStack_74 = (int *)0x4c5fff;
  FUN_004c0bf7();
  local_38 = (int *)&local_70;
  local_70 = param_2;
  local_6c = param_3;
  piStack_74 = &local_40;
  piStack_78 = (int *)0x4c601f;
  local_38 = (int *)FUN_004c62d4();
  if (local_38 != (int *)0x0) {
    local_6c = (undefined4 *)0x4c602d;
    local_6c = (undefined4 *)(**(code **)(*local_38 + 0x18))();
    if ((char)local_6c == '\0') goto LAB_004c6034;
  }
  local_6c = (undefined4 *)0x1;
LAB_004c6034:
  local_70 = (int *)0x4c603c;
  (**(code **)(*in_ECX + 0x28))();
  if (in_ECX[0x2d] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX[0x2d] + 8);
  }
  if (local_40 != iVar3) {
    local_70 = (int *)0x4c605d;
    piVar2 = (int *)FUN_004c625c();
    if (piVar2 != (int *)0x0) {
      local_70 = (int *)0x0;
      piStack_74 = (int *)0x4c606d;
      cVar1 = FUN_004f5fe9();
      if (cVar1 != '\0') {
        local_70 = local_34;
        piStack_74 = (int *)0x4c607c;
        cVar1 = (**(code **)(*piVar2 + 4))();
        if (cVar1 != '\0') {
          local_70 = local_34;
          piStack_74 = (int *)0x4c608b;
          (**(code **)(*piVar2 + 0x10))();
        }
      }
    }
    local_70 = (int *)0x4c6090;
    FUN_004f77e9();
    local_70 = (int *)0x4c6097;
    FUN_004a4d78();
    piVar2 = local_38;
    in_ECX = local_3c;
    if (local_38 != (int *)0x0) {
      local_70 = local_34;
      piStack_74 = (int *)0x4c60a9;
      cVar1 = (**(code **)(*local_38 + 4))();
      in_ECX = local_3c;
      if (cVar1 != '\0') {
        local_70 = local_34;
        piStack_74 = (int *)0x4c60b8;
        (**(code **)(*piVar2 + 8))();
        in_ECX = local_3c;
      }
    }
  }
  local_70 = (int *)0x4c60c2;
  piVar2 = (int *)FUN_004c625c();
  if (piVar2 != (int *)0x0) {
    local_70 = local_34;
    piStack_74 = (int *)0x4c60d3;
    cVar1 = (**(code **)(*piVar2 + 4))();
    if (cVar1 != '\0') {
      local_70 = local_34;
      piStack_74 = (int *)0x4c60e2;
      (**(code **)(*piVar2 + 0xc))();
    }
  }
  if (param_1 != '\0') {
    local_70 = local_4c;
    piStack_74 = (int *)0x4c60f5;
    FUN_00467eb1();
    local_70 = (int *)0x4c60fc;
    iVar3 = FUN_004c625c();
    if (iVar3 == 0) {
      local_38 = (int *)&piStack_7c;
      uStack_80 = 700;
      piStack_84 = (int *)0x4c6128;
      piStack_7c = extraout_ECX;
      piStack_78 = extraout_ECX;
      piStack_74 = extraout_ECX;
      FUN_00467a99();
      piStack_84 = in_ECX + 0x32;
      local_38 = (int *)&piStack_84;
      FUN_00467e6f();
      FUN_00467ff2(&piStack_74);
      local_38 = (int *)&piStack_7c;
      uStack_80 = 0x4c614f;
      FUN_00467e6f();
      uStack_80 = 0x4c6154;
      cVar1 = FUN_00468061();
      if (cVar1 != '\0') {
        local_38 = (int *)&piStack_74;
        piStack_74 = param_2;
        local_70 = param_3;
        piStack_78 = local_34;
        piStack_7c = (int *)0x4c6178;
        FUN_004c63d4();
      }
    }
    else {
      local_70 = (int *)0x4c610e;
      FUN_00467e6f();
    }
  }
  local_70 = (int *)0x4c617d;
  FUN_004c4e62();
  local_70 = (int *)0x4c6187;
  FUN_004c50cf();
  local_70 = (int *)0x4c618c;
  FUN_004c49bc();
  local_70 = (int *)0x4c6194;
  FUN_00474d0f();
  local_70 = (int *)0x4c619c;
  FUN_004615f7();
  local_70 = (int *)0x4c61a1;
  FUN_005b9f18();
  return;
}

