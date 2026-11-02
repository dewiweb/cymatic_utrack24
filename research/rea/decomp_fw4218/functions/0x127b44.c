// rea decompile_all
// name: FUN_00127b44
// address: 0x127b44
// body: available
// range: 0x127b44-0x127d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00127b44(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [28];
  
  local_64 = 0;
  local_60 = 0xffffffff;
  FUN_000ed2b8(auStack_38,0xffffffff,0,0,0);
  piVar1 = (int *)FUN_0022bc6c(*_DAT_00127d24 + 0x20);
  local_64 = 1;
  iVar2 = (**(code **)(*piVar1 + 0x2c))
                    (piVar1,0x20,auStack_38,*(undefined4 *)(param_1 + 0x54),0xffffffff);
  if (iVar2 == 0) {
    uVar3 = FUN_00002898(s_B__ERROR__LCDLoopTextJobExecutor_00127d25 + 3);
  }
  else {
    iVar2 = FUN_001ba360(auStack_38);
    iVar4 = FUN_001b9a50(param_1 + 0x34);
    iVar4 = FUN_00003e14(iVar4 + -1,iVar2);
    iVar4 = iVar4 + 1;
    FUN_00064a34(auStack_4c);
    (**(code **)(*(int *)*_DAT_00127d24 + 0x48))
              (*_DAT_00127d24,param_1 + 0x20,auStack_4c,*(undefined4 *)(param_1 + 0x54),0xffffffff);
    uVar3 = FUN_001b237c(auStack_4c);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    iVar5 = FUN_001b8a44(param_1 + 0x30);
    if (iVar5 == 0) {
      uVar3 = FUN_00201f28(auStack_54,0);
      FUN_001aaf10(&local_64,&DAT_00127d68,uVar3);
      FUN_00201f54(auStack_54);
      for (iVar5 = 1; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        FUN_001ab23c(&local_64,&DAT_00127d68);
      }
      FUN_001ab2d2(&local_64,param_1 + 0x20);
      FUN_001ab1a2(param_1 + 0x20,&local_64);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar2 * iVar4;
      FUN_001aafac(&local_64);
    }
    else {
      for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
        FUN_001ab23c(param_1 + 0x20,&DAT_00127d68);
      }
    }
    iVar2 = FUN_001b9a38(param_1 + 0x34);
    iVar4 = FUN_001b237c(param_1 + 4);
    *(int *)(param_1 + 0x4c) = iVar4 + iVar2 + *(int *)(param_1 + 0x4c);
    uVar3 = FUN_00064a58(auStack_4c);
  }
  return uVar3;
}

