// rea decompile_all
// name: FUN_001a7ffc
// address: 0x1a7ffc
// body: available
// range: 0x1a7ffc-0x1a8167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001a7ffc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_00203e2c(&uStack_20);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s_AudioHWService_001a8168,&uStack_20);
  if (iVar2 == 0) {
    FUN_00002898(s_ERROR__UIRotary__initialize__Aud_001a8178);
    FUN_000d04f8(&uStack_20);
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_0022bc60(&uStack_20);
    uVar1 = FUN_001dbf34();
    uVar1 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,*(undefined1 *)(param_1 + 0x1e));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    if (*(int *)(param_1 + 0x20) == 0) {
      FUN_00002898(s_ERROR__UIRotary__initialize__GPI_001a81b0,*(undefined1 *)(param_1 + 0x1e));
      FUN_000d04f8(&uStack_20);
      uVar1 = 0;
    }
    else {
      piVar3 = (int *)FUN_0022bc60(&uStack_20);
      uVar1 = FUN_001dbf34();
      uVar1 = (**(code **)(*piVar3 + 0x80))(piVar3,uVar1,*(undefined1 *)(param_1 + 0x1f));
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      if (*(int *)(param_1 + 0x24) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        FUN_00002898(s_ERROR__UIRotary__initialize__GPI_001a81b0,*(undefined1 *)(param_1 + 0x1f));
        FUN_000d04f8(&uStack_20);
        uVar1 = 0;
      }
      else {
        iVar2 = FUN_000966e8(*(undefined4 *)(param_1 + 0x20),2,DAT_001a81ec,param_1);
        if (iVar2 == 0) {
          FUN_00002898(_DAT_001a81f0,*(undefined2 *)(param_1 + 0x1c));
          FUN_000d04f8(&uStack_20);
          uVar1 = 0;
        }
        else {
          iVar2 = FUN_00096628(*(undefined4 *)(param_1 + 0x20));
          if (iVar2 == 0) {
            FUN_00002898(s___ERROR__UIRotary__initialize__e_001a81f1 + 3);
          }
          FUN_00096734(*(undefined4 *)(param_1 + 0x20));
          FUN_00096734(*(undefined4 *)(param_1 + 0x24));
          FUN_000d04f8(&uStack_20);
          uVar1 = 1;
        }
      }
    }
  }
  return CONCAT44(uStack_20,uVar1);
}

