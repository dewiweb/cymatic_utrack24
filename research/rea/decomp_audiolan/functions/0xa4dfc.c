// rea decompile_all
// name: FUN_000a4dfc
// address: 0xa4dfc
// body: available
// range: 0xa4dfc-0xa4e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000a4dfc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int aiStack_3c [3];
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int *piStack_20;
  int aiStack_1c [3];
  
  piStack_20 = (int *)(**(code **)(*param_1 + 0x28))();
  iVar1 = DAT_000a4e2c;
  iVar2 = DAT_000a4e28;
  if (piStack_20 == (int *)0x0) {
    return 0;
  }
  aiStack_1c[0] = *(int *)(*piStack_20 + -8) + (int)piStack_20;
  iVar3 = *(int *)(*piStack_20 + -4);
  iVar4 = aiStack_1c[0];
  if (DAT_000a4e28 != 0) {
    iStack_40 = 0;
    aiStack_3c[0] = 0;
    aiStack_3c[1] = 0;
    uStack_28 = 0;
    iStack_24 = 0;
    piStack_48 = DAT_0016df48;
    iStack_30 = DAT_000a4e2c;
    uStack_44 = DAT_0016df4c;
    aiStack_3c[2] = DAT_000a4e28;
    piStack_2c = piStack_20;
    FUN_00047ba4(aiStack_1c[0],iVar3,&piStack_48,0);
    iVar4 = iStack_24;
  }
  iVar5 = iVar4;
  if (iVar4 == 0) {
    iStack_40 = 1;
    if (iVar3 != iVar1) {
      iStack_40 = 0;
      piStack_48 = &iStack_40;
      FUN_000480c8(aiStack_1c[0],piStack_20,iVar3,iVar1);
      if (iStack_40 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_00160e98(iVar3,iVar2);
    iVar5 = aiStack_1c[0];
    if (iVar1 == 0) {
      aiStack_3c[0] = 0;
      piStack_48 = (int *)0x0;
      uStack_44 = 0;
      iVar2 = FUN_0016de38(aiStack_1c,aiStack_3c,iVar3,iVar2);
      iVar5 = iVar4;
      if (iVar2 != 0) {
        iVar5 = aiStack_3c[0];
      }
    }
  }
  return iVar5;
}

