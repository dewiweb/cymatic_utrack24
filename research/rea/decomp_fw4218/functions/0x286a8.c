// rea decompile_all
// name: FUN_000286a8
// address: 0x286a8
// body: available
// range: 0x286a8-0x287b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000286a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint local_20;
  int local_1c;
  int iStack_18;
  
  iVar6 = *(int *)(param_2 + 0x114);
  iVar1 = param_2 + 0x130;
  puVar7 = (undefined *)0x0;
  local_1c = param_1;
  iStack_18 = param_2;
  if ((iVar6 == *DAT_000287b8) || (iVar6 == *DAT_000287bc)) {
    iVar6 = 0;
  }
  else if (iVar6 != 0) {
    puVar7 = (undefined *)FUN_00029840(param_1,iVar6);
  }
  iVar4 = param_2 + 0x220;
  if (*(int *)(param_2 + 0xcc) != 0 || *(int *)(param_2 + 0xd0) != 0) {
    iVar2 = FUN_00027530(local_1c,iVar1,iVar6,*(int *)(param_2 + 0xcc),*(int *)(param_2 + 0xd0),
                         &local_20,0);
    if (local_20 != 0xffffffff) {
      iVar5 = (local_20 >> 5) * 4 + param_2;
      *(uint *)(iVar5 + 0xcc) = *(uint *)(iVar5 + 0xcc) & ~(1 << (local_20 & 0x1f));
    }
    if (iVar2 != 0) {
      if (*DAT_000287c0 == 0) {
        return iVar2;
      }
      uVar3 = FUN_00025930(*(undefined2 *)(iVar4 + 0x10));
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &DAT_000287c4;
      }
      iVar4 = *(int *)(iVar2 + 300);
      if (iVar4 != 0) {
        iVar4 = iVar4 - *(int *)(local_1c + 0xdc);
      }
      FUN_0002a1c6(3,DAT_000287cc,param_2,iVar2 + 8,
                   (*(uint *)(iVar2 + 0x1c) & 0xff) << 8 | (*(uint *)(iVar2 + 0x1c) & 0xffff) >> 8,
                   iVar4,puVar7,iVar6,iVar1,uVar3);
      return iVar2;
    }
  }
  if (*DAT_000287c0 != 0) {
    uVar3 = FUN_00025930(*(undefined2 *)(iVar4 + 0x10));
    if (puVar7 == (undefined *)0x0) {
      puVar7 = &DAT_000287c4;
    }
    FUN_0002a1c6(3,DAT_000287d0,param_2,puVar7,iVar6,iVar1,uVar3);
  }
  return 0;
}

