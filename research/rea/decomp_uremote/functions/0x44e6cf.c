// rea decompile_all
// name: FUN_0044e6cf
// address: 0x44e6cf
// body: available
// range: 0x44e6cf-0x44e966 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044e6cf(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  undefined1 *puStack_c8;
  uint uStack_c4;
  int **ppiStack_c0;
  uint uStack_bc;
  int *local_a4;
  int *local_a0;
  int local_9c;
  undefined1 local_98 [4];
  undefined1 *local_94;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e2536;
  local_14 = ExceptionList;
  uStack_bc = DAT_00955fd4 ^ (uint)&stack0xffffff48;
  ExceptionList = &local_14;
  iVar2 = *(int *)(*(int *)(in_ECX + 0xd4) + 0x80);
  if (iVar2 == 0) {
    local_a4 = (int *)0x0;
  }
  else {
    local_a4 = *(int **)(iVar2 + 8);
  }
  if (param_2 == 0) {
    *(int *)(in_ECX + 0x4e8) = param_1;
    ppiStack_c0 = (int **)0x44e74a;
    FUN_0044ea80();
    local_c = 0;
    ppiStack_c0 = (int **)0x44e759;
    FUN_0044bfc5();
    ppiStack_c0 = (int **)0x44e75e;
    FUN_0044cf53();
    local_c = 0xffffffff;
    ppiStack_c0 = (int **)0x44e76f;
    FUN_004652d6();
    ppiStack_c0 = (int **)0x44e778;
    FUN_004652d6();
    ppiStack_c0 = (int **)0x44e77d;
    iVar2 = FUN_0044bfc5();
    ppiStack_c0 = &local_a0;
    uStack_c4 = 0x44e78e;
    ppiStack_c0 = (int **)FUN_0044dd92();
    uStack_c4 = 0x44e799;
    cVar1 = FUN_0046595f();
    ppiStack_c0 = (int **)0x44e7a6;
    FUN_004652d6();
    ppiStack_c0 = (int **)0x0;
    if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar2 + 0x40);
      local_a4[0x1c] = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
    }
    else {
      local_a4[0x1c] = 0;
    }
    uStack_c4 = (uint)(cVar1 != '\0');
    puStack_c8 = (undefined1 *)0x44e7d2;
    FUN_004ef162();
    local_a0 = *(int **)(in_ECX + 0xd4);
    ppiStack_c0 = (int **)&local_9c;
    uStack_c4 = 0x44e7eb;
    ppiStack_c0 = (int **)FUN_0046537e();
    local_94 = (undefined1 *)&puStack_c8;
    local_c = 1;
    FUN_0046537e(&puStack_c8);
    FUN_00465c6b(&uStack_c4);
    puStack_c8 = local_98;
    ppiStack_c0 = (int **)FUN_00465c30();
    local_c = CONCAT31(local_c._1_3_,2);
    uStack_c4 = 0x44e837;
    (**(code **)(*local_a0 + 0x24))();
    ppiStack_c0 = (int **)0x44e840;
    FUN_004652d6();
    local_c = 0xffffffff;
    ppiStack_c0 = (int **)0x44e851;
    FUN_004652d6();
    ppiStack_c0 = (int **)(*(int *)(iVar2 + 0x44) + local_a4[0x1c] * 2);
    uStack_c4 = *(int *)(iVar2 + 0x40) + local_a4[0x1c] * 2;
  }
  else {
    if (param_2 != 1) {
      if (param_1 == 0x65) {
        ppiStack_c0 = (int **)0x44e8ff;
        (**(code **)(*(int *)(in_ECX + -0x18) + 0x20))();
      }
      else {
        ppiStack_c0 = (int **)0x44e904;
        (**(code **)(*(int *)(in_ECX + -0x18) + 0x24))();
      }
      goto LAB_0044e904;
    }
    ppiStack_c0 = (int **)0x44e887;
    FUN_0044ea80();
    local_c = 3;
    ppiStack_c0 = (int **)0x44e899;
    FUN_0044bfc5();
    ppiStack_c0 = (int **)0x44e89e;
    FUN_0044cf53();
    local_c = 0xffffffff;
    ppiStack_c0 = (int **)0x44e8b2;
    FUN_004652d6();
    ppiStack_c0 = (int **)0x44e8bb;
    FUN_004652d6();
    ppiStack_c0 = (int **)0x44e8c0;
    iVar2 = FUN_0044bfc5();
    if (param_1 == 1) {
      iVar4 = *(int *)(iVar2 + 0x44);
      iVar2 = *(int *)(iVar2 + 0x40);
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x40);
      iVar2 = *(int *)(iVar2 + 0x44);
    }
    ppiStack_c0 = (int **)(iVar4 + local_a4[0x1c] * 2);
    uStack_c4 = iVar2 + local_a4[0x1c] * 2;
  }
  puStack_c8 = (undefined1 *)0x44e8eb;
  FUN_004eeeda();
LAB_0044e904:
  ppiStack_c0 = (int **)0x44e909;
  FUN_004c4e62();
  ppiStack_c0 = (int **)0x44e911;
  piVar3 = (int *)FUN_004761f9();
  local_9c = *(int *)(*(int *)(in_ECX + 0xd4) + 0x18) / 2;
  uStack_c4 = (piVar3[2] / 2 - local_9c) + *piVar3;
  if ((int)uStack_c4 < 0) {
    uStack_c4 = 0;
  }
  ppiStack_c0 = (int **)0x1e;
  puStack_c8 = (undefined1 *)0x44e945;
  FUN_004c0bf7();
  ppiStack_c0 = (int **)0x44e94f;
  (**(code **)(*local_a4 + 0x84))();
  ExceptionList = local_14;
  return;
}

