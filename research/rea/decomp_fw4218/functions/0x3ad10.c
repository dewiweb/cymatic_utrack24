// rea decompile_all
// name: FUN_0003ad10
// address: 0x3ad10
// body: available
// range: 0x3ad10-0x3adc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ad10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_30 [12];
  undefined4 local_24 [4];
  
  iVar5 = *(int *)(param_1 + 0x27c);
  iVar6 = param_1 + 0x284;
  FUN_0002f734(iVar6,auStack_30);
  FUN_0002f734(iVar6,local_24);
  iVar2 = FUN_0002f836(iVar6,local_24[0]);
  if (iVar2 != 0) {
    return;
  }
  do {
    iVar2 = FUN_0002f778(iVar6,local_24[0]);
    uVar1 = _DAT_0003adcc;
    if (iVar2 != 0) {
      uVar3 = 0;
      bVar4 = true;
      do {
        if (*(char *)(iVar2 + uVar3 + 0x1c) != *(char *)(iVar5 + uVar3)) {
          bVar4 = false;
          break;
        }
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < 8);
      if ((CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)) ==
           CONCAT11(*(undefined1 *)(iVar5 + 8),*(undefined1 *)(iVar5 + 9))) && (bVar4)) {
        iVar5 = FUN_000366e0(_DAT_0003adcc);
        if (iVar5 != 0) {
          FUN_0002f9bc(uVar1);
          FUN_0002f9fc(6,s__Port__d__Delete_current_master_f_0003adcf + 1,
                       *(undefined2 *)(param_1 + 2));
        }
        FUN_0002f89e(iVar6,iVar2);
        FUN_0002ce42(iVar2);
        return;
      }
    }
    FUN_0002f888(iVar6,local_24);
    iVar2 = FUN_0002f836(iVar6,local_24[0]);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}

