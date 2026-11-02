// rea decompile_all
// name: FUN_00447525
// address: 0x447525
// body: available
// range: 0x447525-0x447a1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447525(void)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int *in_ECX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  ushort extraout_var;
  int unaff_EBX;
  char *pcVar7;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  undefined4 **ppuStack_bc;
  uint **ppuStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint *puStack_ac;
  int iStack_a8;
  undefined1 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *puStack_98;
  undefined1 *puStack_94;
  uint uStack_90;
  void *pvStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined4 uStack_80;
  uint auStack_7c [3];
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined1 *local_48;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 uStack_34;
  undefined4 uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dbb03;
  local_14 = ExceptionList;
  uStack_64 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  local_54 = 0;
  *(int **)(unaff_EBX + 0x1b8) = in_ECX;
  local_68 = 0x447565;
  FUN_0045ef8e();
  local_48 = (undefined1 *)&local_68;
  local_68 = extraout_ECX & 0xffff0000;
  uStack_6c = 0x44757d;
  puVar2 = (undefined4 *)FUN_004d076d();
  uStack_6c = *puVar2;
  local_3e = 0;
  local_40 = 4;
  local_3c = 0xf000;
  local_3a = 0;
  iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
  puStack_70 = &local_40;
  auStack_7c[2] = 0x4475b7;
  auStack_7c[2] = FUN_00503bc0();
  auStack_7c[1] = 0;
  auStack_7c[0] = 0x4475c2;
  (**(code **)(iVar4 + 0x20))();
  auStack_7c[0] = in_ECX[2];
  uStack_80 = 0x4475ce;
  auStack_7c[0] = FUN_00465858();
  uStack_20 = 0;
  auStack_7c[0] = auStack_7c[0] & 0xffff0000;
  uStack_80 = 0x4475ea;
  puVar2 = (undefined4 *)FUN_004d076d();
  uStack_80 = *puVar2;
  local_54 = 4;
  uStack_50 = 0xf002;
  uStack_4e = 0;
  iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
  puStack_84 = &local_54;
  uStack_88 = 0x447624;
  uStack_88 = FUN_00503bc0();
  pvStack_8c = (void *)0x0;
  uStack_90 = 0x44762f;
  (**(code **)(iVar4 + 0x20))();
  uStack_34 = 0xffffffff;
  uStack_90 = 0x44763d;
  FUN_004652d6();
  puStack_70 = (undefined2 *)&uStack_90;
  uStack_90 = extraout_ECX_00 & 0xffff0000;
  puStack_94 = (undefined1 *)in_ECX[3];
  local_68 = 4;
  uStack_64 = 0xf003;
  iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
  puStack_98 = (uint *)0x44767f;
  puStack_94 = (undefined1 *)thunk_FUN_00445c93();
  puStack_98 = &local_68;
  uStack_9c = 0x44768e;
  uStack_9c = FUN_00503bc0();
  uStack_a0 = 0;
  puStack_a4 = (undefined1 *)0x447699;
  (**(code **)(iVar4 + 0x20))();
  puStack_84 = &puStack_a4;
  puStack_a4 = (undefined1 *)(extraout_ECX_01 & 0xffff0000);
  iStack_a8 = in_ECX[4];
  auStack_7c[0] = 4;
  auStack_7c[1] = 0xf004;
  iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
  puStack_ac = (uint *)0x4476db;
  iStack_a8 = thunk_FUN_00445c93();
  puStack_ac = auStack_7c;
  uStack_b0 = 0x4476ea;
  uStack_b0 = FUN_00503bc0();
  uStack_b4 = 0;
  ppuStack_b8 = (uint **)0x4476f5;
  (**(code **)(iVar4 + 0x20))();
  ppuStack_bc = (undefined4 **)in_ECX[7];
  if (ppuStack_bc == (uint **)0x2) {
    ppuStack_b8 = &puStack_98;
    ppuStack_bc = (undefined4 **)0x44770e;
    ppuStack_b8 = (uint **)FUN_0046537e();
    puStack_a4 = (undefined1 *)0x1;
  }
  else {
    puStack_94 = (undefined1 *)&ppuStack_b8;
    puStack_c0 = (undefined4 *)0x447725;
    ppuStack_b8 = ppuStack_bc;
    FUN_00465858();
    ppuStack_bc = (undefined4 **)&uStack_9c;
    puStack_c0 = (undefined4 *)0x447734;
    ppuStack_b8 = (uint **)FUN_00465c6b();
    puStack_a4 = (undefined1 *)0x2;
  }
  ppuStack_bc = (undefined4 **)0x447742;
  uVar3 = FUN_004652e4();
  puStack_94 = (undefined1 *)&ppuStack_b8;
  ppuStack_b8 = (uint **)(uVar3 & 0xffff0000);
  ppuStack_bc = (undefined4 **)0x447761;
  puVar2 = (undefined4 *)FUN_004d076d();
  ppuStack_bc = (undefined4 **)*puVar2;
  uStack_88 = 4;
  puStack_84 = (undefined4 *)0xf005;
  iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
  puStack_c0 = &uStack_88;
  uStack_c4 = 0x44779b;
  uStack_c4 = FUN_00503bc0();
  uStack_c8 = 0;
  uStack_cc = 0x4477a6;
  (**(code **)(iVar4 + 0x20))();
  uStack_cc = 0x4477af;
  FUN_004652d6();
  if (((uint)ppuStack_b8 & 2) != 0) {
    ppuStack_b8 = (uint **)((uint)ppuStack_b8 & 0xfffffffd);
    uStack_cc = 0x4477c4;
    FUN_004652d6();
  }
  puStack_70 = (undefined2 *)0xffffffff;
  if (((uint)ppuStack_b8 & 1) != 0) {
    ppuStack_b8 = (uint **)((uint)ppuStack_b8 & 0xfffffffe);
    uStack_cc = 0x4477de;
    FUN_004652d6();
  }
  uStack_cc = 0;
  FUN_00446754();
  uStack_cc = 0;
  FUN_0044684f();
  uStack_cc = 0;
  FUN_004468d0();
  uStack_cc = 0x4477fa;
  iVar4 = FUN_004480dc();
  puStack_a4 = (undefined1 *)&uStack_cc;
  if (iVar4 == 0) {
    uStack_cc = (uint)extraout_var << 0x10;
    iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
    pcVar7 = "--------";
    puStack_a4 = (undefined1 *)&uStack_cc;
  }
  else {
    uStack_cc = (uint)extraout_var << 0x10;
    puVar2 = (undefined4 *)FUN_004d076d();
    pcVar7 = (char *)*puVar2;
    iVar4 = *(int *)(*(int *)(unaff_EBX + 0x14) + 0x14);
  }
  uStack_9c = 4;
  puStack_98 = (uint *)0xf001;
  uVar5 = FUN_00503bc0(&uStack_9c,pcVar7);
  (**(code **)(iVar4 + 0x20))(0,uVar5);
  FUN_0043f3c8();
  uStack_c8 = 0;
  if (0 < in_ECX[10]) {
    do {
      if (uStack_c8 < (uint)in_ECX[10]) {
        puStack_c0 = *(undefined4 **)(in_ECX[8] + uStack_c8 * 4);
      }
      else {
        puStack_c0 = (undefined4 *)0x0;
      }
      FUN_0043e86a(&puStack_c0);
      uStack_c8 = uStack_c8 + 1;
    } while ((int)uStack_c8 < in_ECX[10]);
  }
  FUN_0043f3c8();
  uStack_c8 = 0;
  if (0 < in_ECX[7]) {
    do {
      if (uStack_c8 < (uint)in_ECX[7]) {
        puStack_c0 = *(undefined4 **)(in_ECX[5] + uStack_c8 * 4);
      }
      else {
        puStack_c0 = (undefined4 *)0x0;
      }
      FUN_0043e86a(&puStack_c0);
      uStack_c8 = uStack_c8 + 1;
    } while ((int)uStack_c8 < in_ECX[7]);
  }
  if (*in_ECX == 0x2000) {
    bVar1 = -(*(char *)(unaff_EBX + 0x1c8) != '\0') & 2;
  }
  else {
    if (*in_ECX != 0x3000) goto LAB_00447994;
    bVar1 = (*(char *)(unaff_EBX + 0x1c8) != '\0') * '\x02' + 1;
  }
  FUN_00447b7d(bVar1);
  if (*(char *)(unaff_EBX + 0x1c8) == '\0') {
    uVar5 = 3;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(unaff_EBX + 0x1b8) + 0x2c);
  }
  FUN_00447c01(uVar5,*(undefined4 *)(*(int *)(unaff_EBX + 0x1b8) + 0x30));
LAB_00447994:
  FUN_00447a77(*(char *)(unaff_EBX + 0x1c8) != '\0');
  if (*(char *)(unaff_EBX + 0x1c8) == '\0') {
    puVar6 = &DAT_0095d718;
  }
  else {
    puVar6 = (undefined *)FUN_0046537e(&ppuStack_bc);
    puStack_84 = (undefined4 *)0x4;
    uStack_cc = uStack_cc | 4;
  }
  FUN_00447a1b(puVar6);
  puStack_84 = (undefined4 *)0xffffffff;
  if ((uStack_cc & 4) != 0) {
    FUN_004652d6();
  }
  FUN_0045efa9();
  *(undefined1 *)(*(int *)(unaff_EBX + 0x14) + 0xa9) = 1;
  FUN_0047433f();
  ExceptionList = pvStack_8c;
  return;
}

