// rea decompile_all
// name: FUN_0013e4a4
// address: 0x13e4a4
// body: available
// range: 0x13e4a4-0x13e96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013e4a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  uStack_30 = param_3;
  local_2c = param_4;
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  iVar3 = *(int *)(param_1 + 0x8c);
  if ((*(uint *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(iVar3 + 0x62c) = 1;
    FUN_000aaf5c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x10));
    FUN_00095094(uVar2,*(undefined4 *)(param_1 + 0x10));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  if (((*(uint *)(param_1 + 4) & 8) != 0) && (1 < *(int *)(iVar3 + 0x60c))) {
    if (*(int *)(param_1 + 0x14) < 0) {
      uVar4 = *(uint *)(iVar3 + 0x630);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x18) < 0) {
      uVar5 = *(uint *)(iVar3 + 0x63c);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x18);
    }
    if ((uVar4 != 0) || (uVar5 != 0)) {
      if (*(uint *)(iVar3 + 0x60c) == uVar4) {
        uVar4 = *(int *)(iVar3 + 0x60c) - 1;
      }
      if (uVar5 <= uVar4) {
        uVar5 = uVar4 + 1;
      }
    }
    FUN_00236674(&uStack_30,*(int *)(param_1 + 0x8c) + 0x8e0);
    while( true ) {
      FUN_00236654(&local_2c,*(int *)(param_1 + 0x8c) + 0x8e0);
      iVar7 = FUN_0022d878(&uStack_30,&local_2c);
      if (iVar7 == 0) break;
      puVar6 = (undefined4 *)FUN_0022d844(&uStack_30);
      (**(code **)(*(int *)*puVar6 + 8))((int *)*puVar6,DAT_0013e96c);
      FUN_00232c10(&uStack_30);
    }
    if ((uVar4 != 0) || (uVar5 != 0)) {
      FUN_00093574(uVar2,uVar4,uVar5);
    }
    FUN_000ab180(*(undefined4 *)(param_1 + 0x8c),uVar4);
    FUN_000aadb8(*(undefined4 *)(param_1 + 0x8c),uVar5);
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
  }
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
    local_2c = FUN_00249f54(*(undefined2 *)(param_1 + 0x28));
    uVar8 = FUN_0024a000(local_2c,DAT_0013e970);
    uVar8 = FUN_00249c78(uVar8,DAT_0013e974);
    FUN_00249b8c(uVar8,DAT_0013e978);
    uVar8 = FUN_00249e8c();
    FUN_000f4e84();
    uVar9 = FUN_000f5144();
    FUN_000b69c0(uVar9,uVar8);
  }
  if ((*(uint *)(param_1 + 4) & 4) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
    *(undefined2 *)(iVar3 + 0x5a0) = *(undefined2 *)(param_1 + 0x2a);
    iVar7 = FUN_00003e14((uint)*(ushort *)(param_1 + 0x2a) * 2000,DAT_0013e97c);
    *(int *)(iVar3 + 0x59c) = iVar7 + -1000;
    FUN_000f4e84();
    uVar8 = FUN_000f5144();
    FUN_000b6504(uVar8,*(undefined4 *)(iVar3 + 0x59c));
    FUN_000aa66c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(iVar3 + 0x59c));
  }
  if ((*(uint *)(param_1 + 4) & 0x10) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 0x130) + 0x28))();
    FUN_00171a80(iVar3 + 0x808,param_1 + 0x1c);
    uVar8 = FUN_00230e4c(&local_2c);
    FUN_00232050(&uStack_30,uVar8);
    iVar7 = FUN_000acc60(*(undefined4 *)(param_1 + 0x8c),iVar3 + 0x808,&uStack_30);
    if (iVar7 != 0) {
      uVar8 = FUN_000f4e84();
      uVar8 = FUN_000f4fcc(uVar8,&uStack_30);
      FUN_0023afd0(iVar3 + 0x810,uVar8);
      piVar10 = *(int **)(*(int *)(param_1 + 0x8c) + 0x18c);
      sVar1 = FUN_0022e20c(iVar3 + 0x810);
      (**(code **)(*piVar10 + 0x40))(piVar10,sVar1 + 2);
      piVar10 = *(int **)(*(int *)(param_1 + 0x8c) + 400);
      sVar1 = FUN_0022e20c(iVar3 + 0x810);
      (**(code **)(*piVar10 + 0x40))(piVar10,sVar1 + 2);
    }
    piVar10 = *(int **)(*(int *)(param_1 + 0x8c) + 0x4d0);
    (**(code **)(*piVar10 + 0x58))(piVar10,0);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 0x130) + 0x2c))();
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    FUN_00232190(&uStack_30);
  }
  if ((*(uint *)(param_1 + 4) & 0x20) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 0x130) + 0x28))();
    FUN_000acd2c(*(undefined4 *)(param_1 + 0x8c),param_1 + 0x24,iVar3 + 0x808);
    uVar8 = FUN_000f4e84();
    uVar8 = FUN_000f4fcc(uVar8,param_1 + 0x24);
    FUN_0023afd0(iVar3 + 0x810,uVar8);
    piVar10 = *(int **)(*(int *)(param_1 + 0x8c) + 0x18c);
    sVar1 = FUN_0022e20c(iVar3 + 0x810);
    (**(code **)(*piVar10 + 0x40))(piVar10,sVar1 + 2);
    piVar10 = *(int **)(*(int *)(param_1 + 0x8c) + 400);
    sVar1 = FUN_0022e20c(iVar3 + 0x810);
    (**(code **)(*piVar10 + 0x40))(piVar10,sVar1 + 2);
    piVar10 = *(int **)(*(int *)(param_1 + 0x8c) + 0x4d0);
    (**(code **)(*piVar10 + 0x58))(piVar10,0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 0x130) + 0x2c))();
  }
  if ((*(uint *)(param_1 + 4) & 0x40) != 0) {
    FUN_000ab3f8(*(undefined4 *)(param_1 + 0x8c),*(undefined2 *)(iVar3 + 0x668));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffbf;
  }
  if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
    *(undefined1 *)(iVar3 + 0x846) = 0;
    FUN_000946e4(uVar2,*(undefined2 *)(iVar3 + 0x844));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
  }
  return;
}

