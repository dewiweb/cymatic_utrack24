// rea decompile_all
// name: FUN_0006f860
// address: 0x6f860
// body: available
// range: 0x6f860-0x6fafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0006f860(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int3 iStack_2c;
  undefined1 uStack_29;
  int iStack_28;
  
  iVar1 = FUN_0016deb0(param_2,DAT_0006fb00,DAT_0006fafc,0xffffffff);
  if (iVar1 == 0) {
    return -5;
  }
  puVar2 = (undefined4 *)FUN_00155254(param_1,param_2);
  iVar3 = FUN_000760f8(0x24);
  if ((iVar3 != 0) && (iVar3 = FUN_000dc450(iVar3,*(undefined4 *)(param_3 + 0x14)), iVar3 != 0)) {
    puVar2[7] = iVar3;
    FUN_000dccd4(*puVar2,iVar3);
    iVar4 = FUN_000dc134(iVar3);
    if (iVar4 != 0) {
      FUN_000dc460(iVar3);
      FUN_000760e0();
      return iVar4;
    }
    FUN_000467b0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0,1);
    iStack_28 = (uint)*(byte *)(*(int *)(iVar1 + 4) + 0xb0) << 0x10;
    _iStack_2c = CONCAT13(0x90,(uint3)(byte)*(undefined4 *)(*(int *)(param_2 + 4) + 0x60) << 0x10);
    FUN_000dc2c0(iVar3);
    FUN_000dc2e0(iVar3,iStack_28);
    FUN_000dc2e8(iVar3,_iStack_2c);
    FUN_000dc2d8(iVar3,*(undefined1 *)(*(int *)(iVar1 + 4) + 0xb0));
    uVar5 = FUN_00046630(*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0);
    FUN_000dc2c8(iVar3,uVar5);
    FUN_000467b0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0,1);
    FUN_000dc2d0(iVar3);
    if (param_4 == (int *)0x0) {
      iVar4 = *(int *)(param_3 + 0x14);
      iVar1 = 0;
      if (0 < iVar4) {
        do {
          FUN_000dc298(iVar3,iVar1,iVar1,0);
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar4);
      }
    }
    else {
      iVar1 = (int)((ulonglong)((longlong)DAT_0006fb04 * (longlong)(param_4[1] - *param_4)) >> 0x20)
      ;
      if ((uint)((iVar1 >> 1) - (iVar1 >> 0x1f)) < *(uint *)(param_3 + 0x14)) {
        return -0x7c;
      }
      iVar1 = 0;
      uVar7 = 0;
      if (*(uint *)(param_3 + 0x14) != 0) {
        do {
          puVar6 = (undefined2 *)(*param_4 + uVar7 * 0xc);
          FUN_000dc298(iVar3,iVar1,*puVar6,*(undefined4 *)(puVar6 + 2));
          uVar7 = uVar7 + 1;
          iVar1 = iVar1 + 1;
        } while (uVar7 < *(uint *)(param_3 + 0x14));
      }
    }
    return 0;
  }
  return -0x6d;
}

