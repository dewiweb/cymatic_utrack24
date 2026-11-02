// rea decompile_all
// name: FUN_000f7a14
// address: 0xf7a14
// body: available
// range: 0xf7a14-0xf7b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000f7a14(int *param_1,undefined2 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_3c [28];
  
  *(undefined2 *)(DAT_000f7b2c + (int)param_1) = param_2;
  *(undefined1 *)(param_1 + 0x12a) = param_3;
  uVar1 = (uint)*(byte *)(param_1 + 0x46);
  if (uVar1 == 2) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,1);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_0004cf1c(*(undefined4 *)(iVar2 + 4),0);
      uVar1 = 0;
      if (iVar2 != 0) {
        FUN_001470e8(auStack_3c);
        uVar3 = FUN_0022f0d0(param_1 + 0x123);
        if ((char)param_1[0x12a] == '\0') {
          uVar4 = 1;
        }
        else {
          uVar4 = 3;
        }
        FUN_000c8c14(uVar3,auStack_3c,s__cfg_AppSettings_USBDecoder_000f7b30,uVar4,
                     (int)*(short *)(DAT_000f7b2c + (int)param_1));
        FUN_0022f0d0(param_1 + 0x123);
        piVar5 = (int *)FUN_000c90cc();
        if ((piVar5 != (int *)0x0) &&
           (iVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,auStack_3c,iVar2), iVar2 == 0)) {
          FUN_00002898(DAT_000f7b4c);
        }
        uVar1 = FUN_00147148(auStack_3c);
      }
    }
  }
  return uVar1;
}

