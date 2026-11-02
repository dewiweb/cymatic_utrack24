// rea decompile_all
// name: FUN_00169140
// address: 0x169140
// body: available
// range: 0x169140-0x16925b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00169140(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_001683e4(param_1,*(undefined4 *)(param_2 + 0xc),param_2,0x22);
  FUN_00172728(param_2 + 0x14,param_2);
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x20;
  uVar3 = FUN_001d06b8();
  FUN_0016039c(param_2,uVar3);
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    for (iVar2 = *(int *)(iVar4 + 0x5c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x5c)) {
      iVar4 = iVar2;
    }
    while (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x10) == param_2) {
        FUN_00172728(iVar4 + 0x14,iVar4);
        *(ushort *)(iVar4 + 0x58) = *(ushort *)(iVar4 + 0x58) | 0x20;
        uVar3 = FUN_001d06b8();
        FUN_0016039c(iVar4,uVar3);
      }
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 4);
        if (iVar4 == 0) {
          return 0;
        }
        for (iVar2 = *(int *)(iVar4 + 0x5c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x5c)) {
          iVar4 = iVar2;
        }
      }
      else {
        pbVar1 = (byte *)(iVar4 + 100);
        iVar4 = *(int *)(iVar4 + 0x60);
        iVar2 = iVar4;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            iVar4 = iVar2;
            if (iVar4 == 0) {
              return 0;
            }
            iVar2 = *(int *)(iVar4 + 0x5c);
          } while (*(int *)(iVar4 + 0x5c) != 0);
        }
      }
    }
  }
  return 0;
}

