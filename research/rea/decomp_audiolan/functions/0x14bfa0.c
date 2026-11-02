// rea decompile_all
// name: FUN_0014bfa0
// address: 0x14bfa0
// body: available
// range: 0x14bfa0-0x14c1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0014bfa0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_34 [40];
  
  FUN_0014aea4(auStack_34,_DAT_0014c1e0);
  iVar2 = FUN_00080a38(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x20),param_2);
  if ((iVar2 != 0) && (iVar2 = FUN_0005a930(*(undefined4 *)(param_1 + 0x20)), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (*(char *)(param_1 + 0x168) == '\0') {
      iVar2 = FUN_00080798(*(undefined4 *)(param_1 + 0x120),0);
      if ((iVar2 == 0) || (iVar2 = FUN_000807d0(*(undefined4 *)(param_1 + 0x120),0), iVar2 == 0))
      goto LAB_0014c0cc;
      iVar2 = FUN_000808d8(*(undefined4 *)(param_1 + 0x120),1);
    }
    else {
      if (*(char *)(param_1 + 0x168) != '\x01') goto LAB_0014c0f4;
      iVar2 = FUN_000808d8(*(undefined4 *)(param_1 + 0x120),1);
      if ((((iVar2 == 0) ||
           (iVar2 = FUN_00080860(*(undefined4 *)(param_1 + 0x120),0xffffffff), iVar2 == 0)) ||
          (iVar2 = FUN_000808d8(*(undefined4 *)(param_1 + 0x120),0), iVar2 == 0)) ||
         (iVar2 = FUN_00080798(*(undefined4 *)(param_1 + 0x120),1), iVar2 == 0)) goto LAB_0014c0cc;
      iVar2 = FUN_000807d0(*(undefined4 *)(param_1 + 0x120),1);
    }
    if (iVar2 == 0) {
LAB_0014c0cc:
      FUN_0014b250(auStack_34);
      return 0xffffff86;
    }
    iVar2 = FUN_0014b49c(param_1,auStack_34);
    if ((iVar2 == 0) && (iVar2 = FUN_0014b650(param_1,auStack_34), iVar2 == 0)) {
      iVar2 = FUN_0005a9c8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x158),
                           *(int *)(param_1 + 4) + 0x800,1,s____StreamMemBuffer_0014c1e1 + 3);
      *(int *)(param_1 + 0x150) = iVar2;
      uVar1 = DAT_0014c1f4;
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x158);
        FUN_00003850(iVar2,*(undefined4 *)(param_1 + 0x158),uVar1);
        iVar2 = FUN_0005a9c8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x164),
                             *(int *)(param_1 + 4) + 0x1800,1,s_StreamBIGmemBuffer_0014c1f8);
        *(int *)(param_1 + 0x15c) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x164);
          FUN_00003850(iVar2,*(undefined4 *)(param_1 + 0x164),uVar1);
          if ((*(char *)(param_1 + 0x124) == '\x01') &&
             (iVar2 = FUN_00080b34(*(undefined4 *)(param_1 + 0x120)), iVar2 == 0)) {
            FUN_0014b250(auStack_34);
            return 0xffffff89;
          }
          FUN_0014b250(auStack_34);
          return 0;
        }
      }
      FUN_0014b250(auStack_34);
      return 0xffffff99;
    }
  }
LAB_0014c0f4:
  FUN_0014b250(auStack_34);
  return 0xffffff8e;
}

