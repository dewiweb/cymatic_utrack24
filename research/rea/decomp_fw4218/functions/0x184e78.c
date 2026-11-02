// rea decompile_all
// name: FUN_00184e78
// address: 0x184e78
// body: available
// range: 0x184e78-0x1850af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00184e78(int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  uVar3 = FUN_001726d4(auStack_28);
  FUN_00184234(param_1,uVar3);
  if (*(char *)(param_3 + 0x10) == -0x7f) {
    if (*(short *)(param_3 + 0x16) == 0x2203) {
      iVar5 = FUN_001917d4(*param_1 + 0x67c,param_2,*(undefined2 *)(param_3 + 0x18));
      if (iVar5 == 0) {
        return;
      }
      iVar5 = param_1[2];
      if (iVar5 == 0) {
        return;
      }
      for (iVar2 = *(int *)(iVar5 + 0x15c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x15c)) {
        iVar5 = iVar2;
      }
      if (iVar5 == 0) {
        return;
      }
      do {
        FUN_0018aaac(iVar5);
        iVar5 = FUN_0022c0cc(param_1 + 1,iVar5);
      } while (iVar5 != 0);
      return;
    }
    if (*(short *)(param_3 + 0x16) == 0x3030) {
      sVar1 = *(short *)(param_3 + 0x18);
      uVar3 = FUN_0017277c(auStack_38,param_3 + 0x28);
      if (sVar1 != 0) {
        param_1[0xb] = 0;
        if ((param_1[0xe] == 0) || (iVar5 = FUN_001bef5c(param_1 + 7,uVar3), iVar5 != 0)) {
          FUN_00172810(param_1 + 7,uVar3);
          FUN_0019f6b0(*param_1,10,param_1 + 7);
        }
        iVar5 = FUN_001d06b8();
        param_1[0xe] = iVar5 + 2000;
        return;
      }
      iVar5 = FUN_001beecc(param_1 + 7);
      if (iVar5 == 0) {
        FUN_0019f6b0(*param_1,0xb,param_1 + 7);
        uVar3 = DAT_001850b0;
        param_1[0xe] = 0;
        FUN_00172810(param_1 + 7,uVar3);
      }
      param_1[0xb] = 0;
      return;
    }
  }
  piVar6 = (int *)param_1[2];
  if (piVar6 == (int *)0x0) {
    return;
  }
  for (piVar4 = (int *)piVar6[0x57]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x57]) {
    piVar6 = piVar4;
  }
  if (piVar6 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar6 + 0x38))(piVar6);
  do {
    FUN_00188834(piVar6,DAT_001850b0,param_2,param_3);
    piVar4 = (int *)FUN_0022c0cc(param_1 + 1,piVar6);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x38))(piVar4);
    }
    (**(code **)(*piVar6 + 0x3c))(piVar6);
    piVar6 = piVar4;
  } while (piVar4 != (int *)0x0);
  return;
}

