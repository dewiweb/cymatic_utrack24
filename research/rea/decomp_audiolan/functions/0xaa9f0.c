// rea decompile_all
// name: FUN_000aa9f0
// address: 0xaa9f0
// body: available
// range: 0xaa9f0-0xaac9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000aa9f0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_5c [3];
  undefined1 auStack_50 [32];
  undefined4 local_30 [3];
  
  uVar11 = *(uint *)(*(int *)(param_1 + 4) + 0xf44);
  if ((uVar11 & 0x300) != 0) {
    if ((uVar11 & 0x100) != 0) {
      *(uint *)(*(int *)(param_1 + 4) + 0xf44) = uVar11;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    cVar1 = *(char *)(param_1 + 0x34);
    iVar10 = *(int *)(*(int *)(param_1 + 4) + 0xf18);
    while (iVar10 != 0) {
      iVar10 = iVar10 + -1;
      iVar4 = FUN_0015542c(param_1);
      puVar3 = DAT_000aaca0;
      if (cVar1 == '\x01') {
        if (iVar4 == 0x10) {
          iVar4 = *(int *)(param_1 + 0x38);
          if (iVar4 != 0) {
            local_5c[0] = iVar4;
            FUN_0017b580(*DAT_000aaca0,iVar4,param_1 + 0x38);
            FUN_0017b4a8(*puVar3,local_5c[0],local_5c);
            uVar6 = DAT_000aaca4;
            goto LAB_000aab04;
          }
          FUN_000151c4(DAT_000aaca8);
          FUN_0017b580(*DAT_000aaca0,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38);
        }
        else {
          if (iVar4 != 0x13) goto LAB_000aaa70;
          FUN_00015210(DAT_000aacac,*(undefined4 *)(param_1 + 0x30));
          FUN_00002904(auStack_50,0x32,DAT_000aacb0,*(undefined4 *)(param_1 + 0x30));
          iVar4 = FUN_001ac500(auStack_50);
          if ((((iVar4 == 0) && (iVar4 = FUN_001ac5a0(auStack_50), iVar4 == 0)) &&
              (iVar4 = FUN_001ac444(auStack_50), iVar4 == 0)) &&
             (iVar4 = FUN_001ac364(auStack_50), uVar6 = DAT_000aacb4, iVar4 == 0)) {
LAB_000aab04:
            FUN_000151c4(uVar6);
          }
        }
      }
      else {
LAB_000aaa70:
        iVar9 = *(int *)(param_1 + 0x18);
        FUN_001b714c(local_30);
        if (*(char *)(iVar9 + 0x3c) != '\0') {
          *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar9 + 0x34);
          *(undefined1 *)(iVar9 + 0x3c) = 0;
          *(undefined1 *)(iVar9 + 0x3d) = 1;
        }
        puVar5 = *(undefined1 **)(iVar9 + 0x38) + 1;
        if (*(undefined1 **)(iVar9 + 0x30) <= puVar5) {
          puVar5 = *(undefined1 **)(iVar9 + 0x2c);
        }
        if (*(undefined1 **)(iVar9 + 0x34) == puVar5) {
          FUN_001b7160(local_30[0]);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        }
        else {
          **(undefined1 **)(iVar9 + 0x38) = (char)iVar4;
          *(undefined1 **)(iVar9 + 0x38) = puVar5;
          FUN_001b7160(local_30[0]);
          FUN_0017b0f0(iVar9 + 0xc);
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      }
    }
  }
  if ((uVar11 & 0x400) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0xf1c);
    iVar10 = iVar4;
    while ((iVar10 != 0 &&
           (puVar5 = *(undefined1 **)(param_1 + 0x10), *(undefined1 **)(param_1 + 0x14) != puVar5)))
    {
      puVar7 = puVar5 + 1;
      uVar2 = *puVar5;
      if (*(undefined1 **)(param_1 + 0xc) <= puVar7) {
        puVar7 = *(undefined1 **)(param_1 + 8);
      }
      *(undefined1 **)(param_1 + 0x10) = puVar7;
      FUN_0007596c(param_1,uVar2);
      iVar10 = iVar10 + -1;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    if (iVar10 == iVar4) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xf54) = 0x400;
    }
    uVar11 = *(uint *)(param_1 + 0x14);
    uVar8 = *(uint *)(param_1 + 0x10);
    if (uVar11 < uVar8) {
      iVar10 = (uVar11 - *(int *)(param_1 + 8)) + (*(int *)(param_1 + 0xc) - uVar8);
    }
    else {
      iVar10 = uVar11 - uVar8;
    }
    if (iVar10 == 0) {
      thunk_EXT_FUN_0040010c(param_1 + 0x44);
    }
  }
  uVar11 = *(uint *)(*(int *)(param_1 + 4) + 0x24);
  if (uVar11 != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | uVar11;
    *(uint *)(*(int *)(param_1 + 4) + 0x24) = uVar11;
    return;
  }
  return;
}

