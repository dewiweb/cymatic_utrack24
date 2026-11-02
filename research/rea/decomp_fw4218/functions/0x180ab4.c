// rea decompile_all
// name: FUN_00180ab4
// address: 0x180ab4
// body: available
// range: 0x180ab4-0x180d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00180ab4(int *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined1 auStack_6c [12];
  undefined2 uStack_60;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 auStack_30 [16];
  
  if (param_1[7] == 0) {
    return;
  }
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_7c = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_6e = 0;
  iVar3 = FUN_001727f0(auStack_6c);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined1 *)(iVar3 + 0x35) = 1;
  FUN_0015111c(iVar3 + -0x1c);
  uVar2 = DAT_00180d84;
  iVar3 = param_1[8];
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x1c);
    iVar4 = iVar3;
    iVar9 = iVar7;
    while (iVar9 != 0) {
      iVar4 = *(int *)(iVar4 + 0x1c);
      iVar9 = *(int *)(iVar4 + 0x1c);
    }
    while (iVar4 != 0) {
      uVar8 = *(ushort *)(iVar4 + 0x18);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        uVar8 = (ushort)*(byte *)(iVar4 + 0x1a);
      }
      if (!bVar11 || uVar8 != 0) {
        uVar10 = (uint)(param_1[2] != 0);
        if ((param_1[2] == 0) && (param_1[1] != 0)) {
          uVar10 = param_1[1];
        }
        if (iVar3 != 0) goto joined_r0x00180bfc;
        break;
      }
      if (iVar4 == 0) {
        iVar4 = iVar3;
        iVar9 = iVar7;
        if (iVar3 == 0) break;
        while (iVar9 != 0) {
          piVar6 = (int *)(iVar4 + 0x1c);
          iVar4 = *piVar6;
          iVar9 = *(int *)(*piVar6 + 0x1c);
        }
      }
      else {
        pbVar1 = (byte *)(iVar4 + 0x24);
        iVar4 = *(int *)(iVar4 + 0x20);
        iVar9 = iVar4;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar4 = iVar9;
            if (iVar4 == 0) goto LAB_00180d5c;
            iVar9 = *(int *)(iVar4 + 0x1c);
          } while (*(int *)(iVar4 + 0x1c) != 0);
        }
      }
    }
  }
  goto LAB_00180d5c;
joined_r0x00180bfc:
  while (iVar7 != 0) {
    iVar3 = *(int *)(iVar3 + 0x1c);
    iVar7 = *(int *)(iVar3 + 0x1c);
  }
  while (iVar3 != 0) {
    uVar8 = *(ushort *)(iVar3 + 0x18);
    bVar11 = uVar8 == 0;
    if (bVar11) {
      uVar8 = (ushort)*(byte *)(iVar3 + 0x1a);
    }
    if (!bVar11 || uVar8 != 0) {
      FUN_0015111c(&uStack_88);
      uStack_40 = 0;
      uStack_3c = (undefined2)uVar2;
      FUN_00172728(auStack_6c,iVar3 + 0xc);
      uStack_60 = 0;
      iVar4 = FUN_0014d51c(&uStack_88,1);
      if (iVar4 == 0) {
        uVar5 = FUN_0017274c(auStack_30,iVar3,0);
        FUN_0014d48c(&uStack_88,uVar5);
      }
      piVar6 = (int *)FUN_00195a68(*param_1,*(undefined2 *)(iVar3 + 0x18),uVar10);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x80))(piVar6,&uStack_88,auStack_30,1);
        iVar4 = FUN_001a2410(*param_1 + 0x4a0,&uStack_88,0);
        (**(code **)(*piVar6 + 0x3c))(piVar6);
        if (iVar4 == 0) break;
        *(undefined2 *)(iVar3 + 0x18) = 0;
        *(undefined1 *)(iVar3 + 0x1a) = 0;
      }
    }
    if (iVar3 == 0) {
      iVar3 = param_1[8];
      if (iVar3 == 0) break;
      for (iVar4 = *(int *)(iVar3 + 0x1c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
        iVar3 = iVar4;
      }
    }
    else {
      pbVar1 = (byte *)(iVar3 + 0x24);
      iVar3 = *(int *)(iVar3 + 0x20);
      iVar4 = iVar3;
      if ((*pbVar1 & 0x80) == 0) {
        do {
          iVar3 = iVar4;
          if (iVar3 == 0) goto LAB_00180d5c;
          iVar4 = *(int *)(iVar3 + 0x1c);
        } while (*(int *)(iVar3 + 0x1c) != 0);
      }
    }
  }
LAB_00180d5c:
  FUN_0015111c(&uStack_88);
  FUN_0014ca10(&uStack_74);
  FUN_0014ca10(&uStack_7c);
  return;
}

