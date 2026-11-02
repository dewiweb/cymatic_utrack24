// rea decompile_all
// name: FUN_00107ca4
// address: 0x107ca4
// body: available
// range: 0x107ca4-0x107eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00107ca4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*(int *)param_1[0x24] + 0x28))((int *)param_1[0x24],4);
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  if (param_2 == DAT_00107f00) {
    if (*(char *)((int)param_1 + 0xa9) == '\0') {
      iVar2 = FUN_000bd6fc(param_1 + 4);
      if (iVar2 == param_1[0x29]) {
        if (param_1[0x27] == 0) {
          param_1[0x27] = 5;
        }
        else {
          param_1[0x27] = 0;
        }
      }
      else {
        param_1[0x27] = param_1[0x27] + 1;
        if (4 < param_1[0x27]) {
          param_1[0x27] = 0;
        }
      }
      uVar1 = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xa9) = 0;
      if (*(char *)((int)param_1 + 0xaa) != '\0') {
        FUN_00094420(uVar1);
        *(undefined1 *)((int)param_1 + 0xab) = 0;
      }
      if ((char)param_1[0x2b] == '\0') {
        FUN_001a48f0(param_1,0xc,0);
      }
      else {
        *(undefined1 *)(param_1 + 0x2b) = 0;
      }
      (**(code **)(*param_1 + 0x50))(param_1);
      uVar1 = 1;
    }
  }
  else if (param_2 == 0x192) {
    if (*(char *)((int)param_1 + 0xa9) == '\0') {
      if ((*(char *)((int)param_1 + 0xab) == '\0') ||
         ((iVar2 = FUN_001b5ac4(uVar1), iVar2 != 1 && (iVar2 = FUN_001b5940(uVar1), iVar2 == 0)))) {
        FUN_001a48f0(param_1,0xc,0);
        uVar1 = 1;
      }
      else {
        FUN_001a48f0(param_1,3,0);
        uVar1 = 1;
      }
    }
    else {
      if ((char)param_1[0x2b] == '\0') {
        FUN_001a48f0(param_1,0xc,0);
      }
      else {
        *(undefined1 *)(param_1 + 0x2b) = 0;
        *(undefined1 *)((int)param_1 + 0xa9) = 0;
        (**(code **)(*param_1 + 0x50))(param_1);
      }
      uVar1 = 1;
    }
  }
  else if ((param_2 == DAT_00107f04) &&
          ((iVar2 = FUN_001b5ac4(uVar1), iVar2 == 1 || (iVar2 = FUN_001b5940(uVar1), iVar2 != 0))))
  {
    *(undefined1 *)(param_1 + 0x2b) = 1;
    FUN_001a48f0(param_1,3,0);
    uVar1 = 1;
  }
  else {
    if ((param_2 == 0x194) ||
       ((((param_2 == DAT_00107f08 || (param_2 == 0x196)) || (param_2 == 0x197)) ||
        (param_2 == 0x198)))) {
      FUN_001a48f0(param_1,0xc,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

