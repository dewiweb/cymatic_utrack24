// rea decompile_all
// name: FUN_0009a2f4
// address: 0x9a2f4
// body: available
// range: 0x9a2f4-0x9a527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009a2f4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  uVar1 = FUN_00085518();
  FUN_00085148(uVar1,param_1 + 0x3e,param_1 + 0x43);
  iVar2 = FUN_00099340(param_1,param_1 + 0x7f);
  if (iVar2 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x120))(param_1,param_1 + 0x7f);
  iVar2 = FUN_00099104(param_1,param_1 + 0x6b);
  if (iVar2 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x118))(param_1,param_1 + 0x6b);
  if ((int *)param_1[0x59] != param_1 + 0x91) {
    piVar4 = (int *)param_1[0x59];
    iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4);
    while (iVar2 == 0) {
      FUN_0017b9f8(10);
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4);
    }
    param_1[0x59] = (int)(param_1 + 0x91);
    FUN_0017b9f8(10);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
  }
  if ((*(char *)((int)param_1 + 0x102) != '\x01') && (*(char *)((int)param_1 + 0x102) == '\x02')) {
    iVar2 = FUN_001a0808(0xa0,1);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_000e0314(iVar2,param_1 + 0x51);
    }
    uVar1 = _DAT_0009a52c;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_48 = _DAT_0009a52c;
    uVar3 = FUN_00157498(param_1 + 0x43,param_1[0x41]);
    iVar2 = FUN_00041c14(s_____cfg_AppSettings_RavennaConfi_0009a52d + 3,&uStack_28);
    if (iVar2 == 0) {
      FUN_000028a4(DAT_0009a560,s_____cfg_AppSettings_RavennaConfi_0009a52d + 3);
    }
    else {
      iVar2 = FUN_00048ef8(uStack_28,DAT_0009a558,auStack_24);
      if (iVar2 == 0) {
        FUN_000028a4(DAT_0009a564);
        FUN_00041dd4(uStack_28);
      }
      else {
        FUN_00041dd4(uStack_28);
        uStack_2c = auStack_24[0];
        uStack_38 = uVar1;
        uStack_34 = 1;
        uStack_30 = uVar3;
        if (&uStack_48 != &uStack_38) {
          uStack_44 = 1;
          uStack_3c = auStack_24[0];
          uStack_40 = uVar3;
        }
      }
    }
    iVar2 = (**(code **)(*piVar4 + 8))(piVar4,&uStack_48);
    if (iVar2 != 0) {
      param_1[0x59] = (int)piVar4;
      return 1;
    }
    FUN_000028a4(DAT_0009a55c);
    return 0;
  }
  FUN_000028a4(DAT_0009a528);
  return 0;
}

