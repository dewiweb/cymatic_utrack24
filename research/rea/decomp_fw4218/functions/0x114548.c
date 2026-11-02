// rea decompile_all
// name: FUN_00114548
// address: 0x114548
// body: available
// range: 0x114548-0x11473f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00114548(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_78 [88];
  
  FUN_000f8ee0();
  uVar1 = FUN_001b9a28();
  FUN_00122480(auStack_78,uVar1);
  FUN_00122460(auStack_78);
  iVar2 = FUN_001b4f2c();
  uVar6 = 0;
  while( true ) {
    if (iVar2 / 2 <= (int)uVar6) {
      piVar3 = (int *)FUN_0022bc78(param_1 + 0x54);
      iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,param_1 + 0x14c);
      if (iVar4 == 0) {
        FUN_00002898(DAT_00114748);
        FUN_00122588(auStack_78);
        uVar1 = 0;
      }
      else {
        for (iVar4 = 0; iVar4 < iVar2 / 2; iVar4 = iVar4 + 1) {
          piVar3 = (int *)FUN_0022bc78(param_1 + 0x54);
          iVar5 = (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(param_1 + 0x114 + iVar4 * 4))
          ;
          if (iVar5 == 0) {
            FUN_00002898(DAT_0011474c,iVar4);
            FUN_00122588(auStack_78);
            return 0;
          }
        }
        piVar3 = (int *)FUN_0022bc78(param_1 + 0x54);
        iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,param_1 + 0x98);
        if (iVar2 == 0) {
          FUN_00122588(auStack_78);
          uVar1 = 0;
        }
        else {
          piVar3 = (int *)FUN_0022bc78(param_1 + 0x54);
          iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,param_1 + 0x160);
          if (iVar2 == 0) {
            FUN_00122588(auStack_78);
            uVar1 = 0;
          }
          else {
            FUN_00122588(auStack_78);
            uVar1 = 1;
          }
        }
      }
      return uVar1;
    }
    iVar4 = FUN_001c6b14(0x20,DAT_00114740);
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0014407c(iVar4,uVar6 + 0xb5 & 0xff,*(undefined4 *)(param_1 + 0xd8),
                           (uVar6 & 0x7f) << 1,uVar6 * 2 + 1 & 0xff);
    }
    *(undefined4 *)(param_1 + 0x114 + uVar6 * 4) = uVar1;
    if (*(int *)(param_1 + 0x114 + uVar6 * 4) == 0) break;
    uVar6 = uVar6 + 1;
  }
  FUN_00002898(DAT_00114744,uVar6 + 0xb5);
  FUN_00122588(auStack_78);
  return 0;
}

