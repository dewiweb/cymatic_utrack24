// rea decompile_all
// name: FUN_000926d4
// address: 0x926d4
// body: available
// range: 0x926d4-0x928f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000926d4(int param_1,int param_2,int param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined4 uStack_2c;
  
  iVar2 = FUN_001c7218(param_2,DAT_000928fc,DAT_000928f8,0xffffffff);
  if (iVar2 == 0) {
    return -5;
  }
  puVar3 = (undefined4 *)FUN_001b2cd0(param_1,param_2);
  iVar4 = FUN_000789f4(0x50);
  if ((iVar4 != 0) && (iVar4 = FUN_0013e088(iVar4,*(undefined4 *)(param_1 + 0x20)), iVar4 != 0)) {
    puVar3[7] = iVar4;
    FUN_00136804(*puVar3,iVar4);
    iVar5 = FUN_0013ddb0(iVar4);
    if (iVar5 != 0) {
      FUN_0013e0a8(iVar4);
      FUN_000789dc();
      return iVar5;
    }
    uVar6 = FUN_0004ceb0(*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0);
    FUN_0013df40(iVar4,uVar6);
    FUN_0013df50(iVar4,*(undefined1 *)(*(int *)(iVar2 + 4) + 0xb0));
    uStack_2c = 0x26000000;
    iVar2 = *(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18) >> 2;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar7 = FUN_000ef8fc(param_3,iVar5);
        sVar1 = FUN_0004d030(*(undefined4 *)(iVar7 + 0x18),
                             *(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0,2);
        uStack_2c = CONCAT22(uStack_2c._2_2_,sVar1 * 4 + 4);
        FUN_0013df48(iVar4,iVar5,uStack_2c);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    if (param_4 == (int *)0x0) {
      iVar5 = *(int *)(param_3 + 0x14);
      iVar2 = 0;
      if (0 < iVar5) {
        do {
          FUN_0013df18(iVar4,iVar2,iVar2,0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar5);
      }
    }
    else {
      iVar2 = (int)((ulonglong)((longlong)DAT_00092900 * (longlong)(param_4[1] - *param_4)) >> 0x20)
      ;
      if ((uint)((iVar2 >> 1) - (iVar2 >> 0x1f)) < *(uint *)(param_3 + 0x14)) {
        return -0x7c;
      }
      iVar2 = 0;
      uVar9 = 0;
      if (*(uint *)(param_3 + 0x14) != 0) {
        do {
          puVar8 = (undefined2 *)(*param_4 + uVar9 * 0xc);
          FUN_0013df18(iVar4,iVar2,*puVar8,*(undefined4 *)(puVar8 + 2));
          uVar9 = uVar9 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar9 < *(uint *)(param_3 + 0x14));
      }
    }
    return 0;
  }
  return -0x76;
}

