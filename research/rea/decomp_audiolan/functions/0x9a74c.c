// rea decompile_all
// name: FUN_0009a74c
// address: 0x9a74c
// body: available
// range: 0x50864-0x509a3 inclusive
// range: 0x71f20-0x7204f inclusive
// range: 0x9a74c-0x9a963 inclusive
// range: 0xa5e90-0xa5ecf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0009a74c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *unaff_r4;
  uint uVar6;
  int *piVar7;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  *param_1 = DAT_0009a964;
  if ((undefined4 *)param_1[0x59] != param_1 + 0x91) {
    piVar7 = (int *)param_1[0x59];
    iVar3 = (**(code **)(*piVar7 + 0x24))(piVar7);
    while (iVar3 == 0) {
      FUN_0017b9f8(10);
      iVar3 = (**(code **)(*piVar7 + 0x24))(piVar7);
    }
    param_1[0x59] = param_1 + 0x91;
    FUN_0017b9f8(10);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
  }
  iVar3 = FUN_000d7e14(param_1 + 0x91);
  FUN_0010fa20(*(int *)(iVar3 + -0xc),*(int *)(iVar3 + -4) - *(int *)(iVar3 + -0xc) >> 4,0);
  FUN_0010fa20(*(int *)(iVar3 + -0x18),*(int *)(iVar3 + -0x10) - *(int *)(iVar3 + -0x18) >> 2,0);
  *(undefined4 *)(iVar3 + -0x48) = DAT_0009a968;
  FUN_0010fa20(*(int *)(iVar3 + -0x2c),*(int *)(iVar3 + -0x24) - *(int *)(iVar3 + -0x2c) >> 2,0);
  FUN_0010fa20(*(int *)(iVar3 + -0x54),*(int *)(iVar3 + -0x4c) - *(int *)(iVar3 + -0x54) >> 4,0);
  FUN_0010fa20(*(int *)(iVar3 + -0x60),*(int *)(iVar3 + -0x58) - *(int *)(iVar3 + -0x60) >> 2,0);
  *(undefined4 *)(iVar3 + -0x98) = DAT_0009a96c;
  FUN_0010fa20(*(int *)(iVar3 + -0x70),*(int *)(iVar3 + -0x68) - *(int *)(iVar3 + -0x70) >> 2,0);
  *(undefined4 *)(iVar3 + -0xc0) = DAT_0009a970;
  FUN_0010fa20(*(int *)(iVar3 + -0xac),*(int *)(iVar3 + -0xa4) - *(int *)(iVar3 + -0xac),0);
  FUN_0010fa20(*(int *)(iVar3 + -0xb8),*(int *)(iVar3 + -0xb0) - *(int *)(iVar3 + -0xb8) >> 2,0);
  piVar7 = (int *)(iVar3 + -0xdc);
  iVar4 = *(int *)(iVar3 + -0xcc);
  if (iVar4 != 0) {
    local_20 = *(undefined4 *)(iVar4 + 8);
    local_1c = iVar4;
    FUN_001cb77c(auStack_18,piVar7,&local_20,&local_1c);
    iVar4 = *(int *)(iVar3 + -0xcc);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + -0xd8);
    *(int *)(iVar3 + -0xd8) = iVar4;
    piVar5 = (int *)*piVar7;
    while (piVar5 != (int *)0x0) {
      *piVar7 = *piVar5;
      FUN_0010fa20(piVar5[2],piVar5[1],0);
      FUN_0010fa20(piVar5,1,0);
      piVar5 = (int *)*piVar7;
    }
  }
  iVar3 = FUN_000cb0a8(iVar3 + -0x100);
  iVar3 = FUN_00085a08(iVar3 + -0x50);
  *(undefined4 *)(iVar3 + -0xf4) = DAT_000509a4;
  if (*(int **)(iVar3 + -8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + -8) + 4))();
    *(undefined4 *)(iVar3 + -8) = 0;
  }
  if ((*(int *)(iVar3 + -0x18) != 0) &&
     (uVar6 = 0, *(int *)(iVar3 + -0x20) - *(int *)(iVar3 + -0x24) >> 2 != 0)) {
    do {
      if (*(int *)(*(int *)(*(int *)(iVar3 + -0x18) + 4) + uVar6 * 4) == 0) break;
      (**(code **)(**(int **)(*(int *)(iVar3 + -0x24) + uVar6 * 4) + 0x6c))();
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(iVar3 + -0x20) - *(int *)(iVar3 + -0x24) >> 2));
  }
  iVar4 = *(int *)(iVar3 + -0x20);
  if (*(int *)(iVar3 + -0x24) != iVar4) {
    *(uint *)(iVar3 + -0x20) = iVar4 - (iVar4 - *(int *)(iVar3 + -0x24) & 0xfffffffcU);
  }
  if (*(int *)(iVar3 + -0x18) != 0) {
    if ((*(int **)(iVar3 + -0x2c) == (int *)0x0) ||
       ((**(code **)(**(int **)(iVar3 + -0x2c) + 0x184))(), *(int *)(iVar3 + -0x18) != 0)) {
      FUN_0000e354(*(undefined4 *)(iVar3 + -0x18));
      FUN_0019f30c();
    }
    *(undefined4 *)(iVar3 + -0x18) = 0;
  }
  if (*(int *)(iVar3 + -0xc) != 0) {
    FUN_0018a2b4();
    *(undefined4 *)(iVar3 + -0xc) = 0;
  }
  FUN_0010fa20(*(int *)(iVar3 + -0x24),*(int *)(iVar3 + -0x1c) - *(int *)(iVar3 + -0x24) >> 2,0);
  iVar3 = FUN_001bb8d4(iVar3 + -0x30);
  iVar3 = FUN_001bb864(iVar3 + -8);
  *(undefined4 *)(iVar3 + -0xbc) = DAT_000a5ed0;
  iVar3 = FUN_0008b818(iVar3 + -0x20);
  iVar3 = FUN_0008b818(iVar3 + -0xc);
  iVar3 = FUN_0008b818(iVar3 + -0xc);
  iVar4 = FUN_0008b818(iVar3 + -0xc);
  FUN_001a07f0(iVar4 + -0x24);
  *(undefined4 *)(iVar4 + -0x78) = DAT_00072050;
  uVar1 = FUN_0008cf78();
  FUN_0008cf08(uVar1,(undefined4 *)(iVar4 + -0x78));
  puVar2 = (undefined4 *)FUN_0008b800(auStack_18);
  *puVar2 = DAT_00072054;
  uVar1 = FUN_0008cf78();
  iVar3 = FUN_0008ce54(uVar1,DAT_00072058,auStack_18);
  if (iVar3 != 0) {
    (**(code **)(*unaff_r4 + 0x2c))(unaff_r4,*(undefined4 *)(iVar4 + -100));
  }
  iVar3 = FUN_00157fbc(auStack_18);
  if (iVar3 != 0) {
    (**(code **)(*unaff_r4 + 0x34))(unaff_r4,*(undefined4 *)(iVar4 + -0x74));
    (**(code **)(*unaff_r4 + 0x34))(unaff_r4,*(undefined4 *)(iVar4 + -0x70));
  }
  if (*(int **)(iVar4 + -0x74) != (int *)0x0) {
    (**(code **)(**(int **)(iVar4 + -0x74) + 4))();
  }
  *(undefined4 *)(iVar4 + -0x74) = 0;
  if (*(int **)(iVar4 + -0x70) != (int *)0x0) {
    (**(code **)(**(int **)(iVar4 + -0x70) + 4))();
  }
  *(undefined4 *)(iVar4 + -0x70) = 0;
  FUN_0008b818(auStack_18);
  FUN_0010fa20(*(int *)(iVar4 + -0x30),*(int *)(iVar4 + -0x28) - *(int *)(iVar4 + -0x30) >> 2,0);
  FUN_0010fa20(*(int *)(iVar4 + -0x3c),*(int *)(iVar4 + -0x34) - *(int *)(iVar4 + -0x3c) >> 2,0);
  FUN_001a07f0(iVar4 + -0x60);
  *(undefined4 *)(iVar4 + -0x6c) = DAT_0007205c;
  FUN_0019f30c(*(undefined4 *)(iVar4 + -0x68));
  return iVar4 + -0x78;
}

