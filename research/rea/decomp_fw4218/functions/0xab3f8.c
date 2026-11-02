// rea decompile_all
// name: FUN_000ab3f8
// address: 0xab3f8
// body: available
// range: 0xab3f8-0xab653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ab3f8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = param_3;
  uStack_2c = param_4;
  FUN_000f4e84();
  uVar3 = FUN_000f4fc0();
  *(undefined1 *)(param_1 + 0x66a) = 0;
  *(undefined2 *)(DAT_000ab654 + param_1) = 0;
  uVar9 = param_2 & 0xffff0fff;
  if ((param_2 & 0xf000) == 0) {
    if (param_2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
      pcVar4 = (char *)FUN_001be9f0(param_1 + 0x808);
      if (pcVar4 != (char *)0x0) {
        pcVar10 = (char *)0x0;
        for (pcVar8 = pcVar4; (*pcVar8 != '\0' && ((int)pcVar8 - (int)pcVar4 < 0x100));
            pcVar8 = pcVar8 + 1) {
          if (*pcVar8 == '/') {
            pcVar10 = pcVar8;
          }
        }
        FUN_00171e90(&uStack_30);
        if (pcVar4 < pcVar10) {
          FUN_0017185c(&uStack_30,pcVar4,(int)pcVar10 - (int)pcVar4 & 0xffff);
        }
        else {
          FUN_00171828(&uStack_30,&DAT_000ab658);
        }
        uVar3 = FUN_001beccc(&uStack_30);
        FUN_0013eab8(param_1 + 0x848,uVar3);
        FUN_00171ea4(&uStack_30);
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
    }
    else if (param_2 == 1) {
      uVar3 = FUN_0013eab8(param_1 + 0x848,&DAT_000ab658);
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
    uVar5 = FUN_0022e20c(param_1 + 0x810);
    if (uVar9 < uVar5) {
      bVar2 = false;
      bVar1 = false;
      iVar6 = FUN_0023b208(param_1 + 0x810,uVar9);
      if (*(char *)(iVar6 + 4) == '\x01') {
        bVar2 = true;
      }
      else if (*(char *)(iVar6 + 4) == '\b') {
        bVar1 = true;
      }
      if (!bVar1) {
        if (bVar2) {
          uVar3 = FUN_0023b208(param_1 + 0x810,uVar9);
          FUN_0013e0e0(param_1 + 0x848,uVar3);
        }
        else if ((*(char *)(param_1 + 0x666) == '\x03') || (*(char *)(param_1 + 0x666) == '\x04')) {
          *(short *)(DAT_000ab654 + param_1) = (short)param_2;
          *(undefined1 *)(param_1 + 0x66a) = 1;
        }
        else {
          uVar7 = FUN_0023b208(param_1 + 0x810,uVar9);
          FUN_00093628(uVar3,uVar7);
        }
      }
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
  }
  return uVar3;
}

