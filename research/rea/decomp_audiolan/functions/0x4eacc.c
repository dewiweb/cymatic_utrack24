// rea decompile_all
// name: FUN_0004eacc
// address: 0x4eacc
// body: available
// range: 0x4eacc-0x4ec6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004eacc(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  piVar1 = (int *)FUN_0008b5d4();
  iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,*(undefined4 *)(param_1[1] + 0x3c));
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(iVar2 + 4);
  if (uVar3 != param_2) {
    return 0;
  }
  bVar4 = param_3 == 0;
  if (bVar4) {
    uVar3 = (uint)*(byte *)(param_1 + 0x2e);
  }
  bVar5 = bVar4 && uVar3 == 0;
  if (bVar4 && uVar3 == 0) {
    bVar5 = param_1[0x39] == param_2;
  }
  if (!bVar5) {
    (**(code **)(*(int *)param_1[0x3b] + 0x28))();
    param_1[0x39] = param_2;
    if (param_5 != 0) {
      *(char *)((int)param_1 + 0xe3) = (char)param_5;
    }
    iVar2 = (**(code **)(*param_1 + 0xdc))(param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if ((char)param_1[0x2e] == '\0') {
      iVar2 = (**(code **)(*param_1 + 0x11c))(param_1);
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_0008b5d4();
        iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,*(undefined4 *)(iVar2 + 8));
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (**(code **)(*(int *)param_1[0x30] + 0x28))
                          ((int *)param_1[0x30],*(undefined4 *)(iVar2 + 4));
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = (**(code **)(*param_1 + 0xec))(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x2e) = 0;
    }
    iVar2 = (**(code **)(*param_1 + 0xe0))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0xe4))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_00071d0c(param_1);
    if (param_4 != 0) {
      (**(code **)(*(int *)param_1[0x3b] + 0x24))();
    }
  }
  return 1;
}

