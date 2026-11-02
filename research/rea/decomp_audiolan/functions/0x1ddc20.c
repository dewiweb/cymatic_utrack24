// rea decompile_all
// name: FUN_001ddc20
// address: 0x1ddc20
// body: available
// range: 0x1ddc20-0x1ddf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ddc74 to 0xe84a4 FUN_000e84a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1ddd24 to 0xe84a4 FUN_000e84a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001ddc20(int *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  
  iVar8 = DAT_001ddf44;
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    uVar6 = param_1[2] - *param_1;
    iVar7 = (int)((longlong)(int)uVar6 * (longlong)DAT_001ddf48 + ((ulonglong)uVar6 << 0x20) >> 0x20
                 );
    uVar6 = (int)puVar2 - *param_1;
    iVar9 = (int)((longlong)(int)uVar6 * (longlong)DAT_001ddf48 + ((ulonglong)uVar6 << 0x20) >> 0x20
                 );
    if ((uint)((iVar9 >> 4) - (iVar9 >> 0x1f)) < (uint)((iVar7 >> 4) - (iVar7 >> 0x1f))) {
      param_1[1] = (int)(puVar2 + 7);
      puVar12 = puVar2;
      puVar10 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 0xff;
        puVar2[5] = 0;
        puVar2[4] = iVar8;
        *(undefined1 *)(puVar2 + 6) = 0xff;
        FUN_000e84a4(puVar2,puVar2 + -7);
      }
      while (puVar2 != puVar10 + -7) {
        FUN_000e84a4(puVar12 + -7);
        puVar12 = puVar12 + -7;
        puVar10 = puVar10 + -7;
      }
      FUN_000e84a4(puVar2,param_2);
      return;
    }
    iVar7 = (int)((longlong)(int)uVar6 * (longlong)DAT_001ddf48 + ((ulonglong)uVar6 << 0x20) >> 0x20
                 );
    uVar3 = (iVar7 >> 4) - (iVar7 >> 0x1f);
    uVar5 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    uVar6 = uVar3 + 1;
    if (uVar3 + 1 <= uVar5) {
      uVar6 = uVar5;
    }
    puVar4 = (undefined4 *)FUN_0010f82c(uVar6 * 0x1c,0);
    puVar10 = puVar4;
    for (puVar12 = (undefined4 *)*param_1; puVar12 != puVar2; puVar12 = puVar12 + 7) {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0xff;
        puVar10[5] = 0;
        puVar10[4] = iVar8;
        *(undefined1 *)(puVar10 + 6) = 0xff;
        FUN_000e84a4(puVar10,puVar12);
      }
      puVar10 = puVar10 + 7;
    }
    lVar1 = (longlong)((int)puVar2 - *param_1) * (longlong)DAT_001ddf48 +
            ((ulonglong)(uint)((int)puVar2 - *param_1) << 0x20);
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    puVar12 = puVar4 + ((iVar7 >> 4) - (iVar7 >> 0x1f)) * 7;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0xff;
      puVar12[5] = 0;
      puVar12[4] = iVar8;
      *(undefined1 *)(puVar12 + 6) = 0xff;
      FUN_000e84a4(puVar12,param_2,(int)lVar1);
    }
    puVar10 = (undefined4 *)param_1[1];
    iVar7 = (int)((longlong)((int)puVar2 - *param_1) * (longlong)DAT_001ddf48 +
                  ((ulonglong)(uint)((int)puVar2 - *param_1) << 0x20) >> 0x20);
    puVar12 = puVar4 + ((iVar7 >> 4) - (iVar7 >> 0x1f)) * 7;
    for (; puVar2 != puVar10; puVar2 = puVar2 + 7) {
      puVar13 = puVar12 + 7;
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        *(undefined1 *)(puVar12 + 10) = 0xff;
        puVar12[0xc] = 0;
        puVar12[0xb] = iVar8;
        *(undefined1 *)(puVar12 + 0xd) = 0xff;
        FUN_000e84a4(puVar13,puVar2);
      }
      puVar12 = puVar13;
    }
    piVar11 = (int *)*param_1;
    piVar14 = (int *)param_1[1];
    uVar3 = (int)piVar14 - (int)piVar11;
    iVar7 = (int)((longlong)(int)uVar3 * (longlong)DAT_001ddf48 + ((ulonglong)uVar3 << 0x20) >> 0x20
                 );
    for (; piVar11 != piVar14; piVar11 = piVar11 + 7) {
      piVar11[4] = iVar8;
      FUN_0019f30c(piVar11[5]);
      puVar12 = (undefined4 *)piVar11[1];
      for (puVar2 = (undefined4 *)*piVar11; puVar2 != puVar12; puVar2 = puVar2 + 4) {
        (**(code **)*puVar2)(puVar2);
      }
      FUN_0010fa20(*piVar11,piVar11[2] - *piVar11 >> 4,0);
    }
    uVar3 = param_1[2] - *param_1;
    iVar8 = (int)((longlong)(int)uVar3 * (longlong)DAT_001ddf48 + ((ulonglong)uVar3 << 0x20) >> 0x20
                 );
    FUN_0010fa20(*param_1,(iVar8 >> 4) - (iVar8 >> 0x1f),0);
    *param_1 = (int)puVar4;
    param_1[1] = (int)(puVar4 + ((iVar7 >> 4) - (iVar7 >> 0x1f)) * 7 + 7);
    param_1[2] = (int)(puVar4 + uVar6 * 7);
    return;
  }
  param_1[1] = (int)(puVar2 + 7);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0xff;
  puVar2[5] = 0;
  puVar2[4] = iVar8;
  *(undefined1 *)(puVar2 + 6) = 0xff;
  FUN_000e84a4();
  return;
}

