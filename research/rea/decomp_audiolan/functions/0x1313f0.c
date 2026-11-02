// rea decompile_all
// name: FUN_001313f0
// address: 0x1313f0
// body: available
// range: 0x1313f0-0x131567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001313f0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined1 auStack_5c [60];
  undefined1 auStack_20 [16];
  
  if ((char)param_1[1] == '\0') {
    return 0;
  }
  cVar1 = (char)param_1[3];
  if (cVar1 == '\0') {
    if ((uint)(param_2 - param_1[2]) < 0x3e9) {
      return 0;
    }
    iVar2 = FUN_00121b60(*param_1 + 0x58c);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (*(short *)(*param_1 + 0x160) != 0) {
      *(undefined1 *)(param_1 + 3) = 3;
      return 0;
    }
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_6c = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_5e = 0;
    iVar2 = FUN_0010f718(auStack_5c);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x35) = 1;
    FUN_000ee880(iVar2 + -0x1c);
    FUN_00116ec0(auStack_20,*param_1 + 0x1e0);
    FUN_000ecaa0(&uStack_78,0,auStack_20);
    FUN_00149df0(*param_1 + 0x4a0,&uStack_78,0);
    *(undefined1 *)(param_1 + 3) = 2;
    FUN_000ee880(&uStack_78);
    FUN_000e9f98(&uStack_64);
    FUN_000e9f98(&uStack_6c);
  }
  else {
    if (cVar1 == '\x02') {
      return 0;
    }
    if (cVar1 == '\x03') {
      *(undefined1 *)(param_1 + 3) = 4;
      *(undefined1 *)(param_1 + 1) = 0;
      return 1;
    }
  }
  if ((char)param_1[3] != '\x04') {
    return 0;
  }
  return 1;
}

