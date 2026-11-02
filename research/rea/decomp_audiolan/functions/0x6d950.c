// rea decompile_all
// name: FUN_0006d950
// address: 0x6d950
// body: available
// range: 0x6d950-0x6daeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006d950(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_30;
  uint local_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  local_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  uStack_24 = param_4;
  FUN_0014a300(&iStack_28,param_1 + 4);
  if (param_3 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_0016deb0(param_3,DAT_0006daf0,DAT_0006daec,0xffffffff);
  }
  if (local_2c == 0) {
    local_30 = FUN_0006daf8(param_1,param_2);
    if (local_30 == 0) {
      iVar4 = FUN_0016d7a4(0x18,DAT_0006daf4);
      if (iVar4 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_000fc5b0(iVar4,param_2 & 0xffff);
      }
      FUN_001df874(param_1 + 0x28,&local_30);
    }
    uVar5 = FUN_000fc46c(local_30,param_3);
    FUN_0014a318(&iStack_28);
  }
  else {
    bVar1 = false;
    for (piVar2 = (int *)FUN_001df350(param_1 + 0x34); piVar3 = (int *)FUN_001df338(param_1 + 0x34),
        piVar3 != piVar2; piVar2 = piVar2 + 1) {
      if (*piVar2 == param_3) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      FUN_001df368(param_1 + 0x34,&local_2c);
    }
    iVar4 = FUN_0006daf8(param_1,param_2 & 0xffff);
    if (iVar4 == 0) {
      iVar4 = FUN_0016d7a4(0x18,DAT_0006daf4);
      if (iVar4 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_000fc5b0(iVar4,param_2 & 0xffff);
      }
      FUN_001df874(param_1 + 0x28,&local_30);
      FUN_0014a318(&iStack_28);
      uVar5 = 1;
    }
    else {
      FUN_0014a318(&iStack_28);
      uVar5 = 1;
    }
  }
  return uVar5;
}

