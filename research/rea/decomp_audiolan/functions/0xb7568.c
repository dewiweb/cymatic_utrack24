// rea decompile_all
// name: FUN_000b7568
// address: 0xb7568
// body: available
// range: 0xb7568-0xb76a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b7568(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [80];
  undefined1 auStack_20 [16];
  
  if (param_1[0x74] == 0) {
    iVar2 = FUN_001a0808(0x254,1);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0009a568(iVar2,param_1 + 0x61);
    }
    piVar4 = (int *)param_1[0x74];
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      param_1[0x74] = (int)piVar3;
    }
    if (param_1[0x74] == 0) {
      FUN_000028a4(DAT_000b76a8);
    }
    else {
      iVar5 = param_1[100];
      iVar2 = (**(code **)(*param_1 + 0x60))(param_1,1,iVar5);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_000d9c50(auStack_20);
      FUN_0008b520(param_1,auStack_20,6,iVar5);
      FUN_000cae8c(auStack_80,param_1 + 0x60,auStack_20,0);
      iVar2 = FUN_0008ab80(param_1,param_1[0x74],auStack_80);
      uVar1 = DAT_000b76a4;
      if (iVar2 != 0) {
        auStack_80[0] = DAT_000b76a4;
        FUN_00085a08(auStack_70);
        FUN_000d9c80(auStack_20);
        return 1;
      }
      FUN_000028a4(DAT_000b76ac);
      auStack_80[0] = uVar1;
      FUN_00085a08(auStack_70);
      FUN_000d9c80(auStack_20);
    }
  }
  return 0;
}

