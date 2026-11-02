// rea decompile_all
// name: FUN_00120b60
// address: 0x120b60
// body: available
// range: 0x120b60-0x120d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00120b60(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 auStack_4c [60];
  
  cVar1 = *(char *)(*param_1 + 0x214);
  if (cVar1 == '\0') {
    *(undefined1 *)(*param_1 + 0x214) = 1;
    uVar3 = FUN_0017bfc0();
    *(undefined4 *)(*param_1 + 0x218) = uVar3;
    local_64 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_5c = 0;
    local_56 = 0;
    local_54 = 0;
    local_4e = 0;
    iVar5 = FUN_0010f718(auStack_4c);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    *(undefined1 *)(iVar5 + 0x35) = 1;
    FUN_000ee880(iVar5 + -0x1c);
    FUN_000ecd68(&local_68,*param_1 + 0x40);
    FUN_00149df0(*param_1 + 0x4a0,&local_68,0);
    FUN_000ee880(&local_68);
    FUN_000e9f98(&local_54);
    FUN_000e9f98(&local_5c);
    return 0;
  }
  if (cVar1 != '\x01') {
    piVar6 = (int *)param_1[2];
    if (piVar6 != (int *)0x0) {
      for (piVar4 = (int *)piVar6[0x57]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x57]) {
        piVar6 = piVar4;
      }
      while (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x38))(piVar6);
        if (piVar6[0x42] == 0) {
          FUN_00128da8(piVar6);
          FUN_00129f10(piVar6);
          FUN_0017b9f8(3);
        }
        piVar4 = (int *)FUN_001d79fc(param_1 + 1,piVar6);
        (**(code **)(*piVar6 + 0x3c))(piVar6);
        piVar6 = piVar4;
      }
    }
    iVar5 = param_1[2];
    if (iVar5 != 0) {
      for (iVar2 = *(int *)(iVar5 + 0x15c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x15c)) {
        iVar5 = iVar2;
      }
      for (; iVar5 != 0; iVar5 = FUN_001d79fc(param_1 + 1,iVar5)) {
        if (*(char *)(iVar5 + 0x4d) == '\x01') {
          return 1;
        }
      }
    }
    FUN_00146e48(*param_1);
    return 1;
  }
  iVar5 = FUN_0017bfc0();
  if (DAT_00120d50 < (uint)(iVar5 - *(int *)(*param_1 + 0x218))) {
    *(undefined1 *)(*param_1 + 0x214) = 0;
  }
  return 0;
}

