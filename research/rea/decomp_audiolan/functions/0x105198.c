// rea decompile_all
// name: FUN_00105198
// address: 0x105198
// body: available
// range: 0x105198-0x105397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00105198(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined1 auStack_54 [60];
  
  if (*(char *)((int)param_1 + 0xb1) != '\0') {
    return false;
  }
  bVar4 = false;
  if (param_2 == 0) {
    FUN_001a0700(param_1 + 0x13);
    uVar1 = param_1[0x28];
    if ((uVar1 & param_3) != 0) {
      bVar4 = uVar1 == param_3;
      if (bVar4) {
        param_1[0x28] = 0;
      }
      else {
        param_1[0x28] = uVar1 & ~param_3;
      }
    }
    FUN_001a0d18(param_1 + 0x13);
    if (bVar4 == false) {
      return false;
    }
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_64 = 0;
    uStack_5e = 0;
    uStack_5c = 0;
    uStack_56 = 0;
    iVar2 = FUN_0010f718(auStack_54);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x35) = 1;
    FUN_000ee880(iVar2 + -0x1c);
    FUN_000ed650(&uStack_70,0);
    iVar2 = FUN_000ee95c(&uStack_70);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 8))(param_1,iVar2);
      FUN_000efbd8(iVar2);
      param_1[0x22] = param_1[0x22] + 1;
    }
  }
  else {
    FUN_001a0700(param_1 + 0x13);
    uVar1 = param_1[0x28];
    if ((uVar1 & param_3) == 0) {
      if (uVar1 == 0) {
        bVar4 = true;
        param_1[0x2b] = param_1[0x2b] + 1;
        param_1[0x28] = param_3;
      }
      else {
        param_1[0x28] = uVar1 | param_3;
      }
    }
    FUN_001a0d18(param_1 + 0x13);
    if (bVar4 == false) {
      return false;
    }
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_64 = 0;
    uStack_5e = 0;
    uStack_5c = 0;
    uStack_56 = 0;
    iVar2 = FUN_0010f718(auStack_54);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x35) = 1;
    FUN_000ee880(iVar2 + -0x1c);
    FUN_000ed650(&uStack_70,0xff);
    iVar2 = FUN_000ee95c(&uStack_70);
    if (iVar2 != 0) {
      iVar3 = FUN_0017bfc0();
      param_1[0x29] = iVar3;
      (**(code **)(*param_1 + 8))(param_1,iVar2);
      FUN_000efbd8(iVar2);
      param_1[0x20] = param_1[0x20] + 1;
    }
  }
  FUN_000ee880(&uStack_70);
  FUN_000e9f98(&uStack_5c);
  FUN_000e9f98(&uStack_64);
  return bVar4;
}

