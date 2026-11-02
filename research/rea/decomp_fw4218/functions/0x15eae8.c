// rea decompile_all
// name: FUN_0015eae8
// address: 0x15eae8
// body: available
// range: 0x15eae8-0x15ec07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0015eae8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_18;
  
  uVar7 = 0;
  uVar2 = DAT_0015ec08;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar6 = *(uint *)(param_1 + 8);
    bVar1 = false;
    uVar2 = uVar7;
    if (uVar6 != 0) {
      for (uVar4 = *(uint *)(uVar6 + 4); uVar4 != 0; uVar4 = *(uint *)(uVar4 + 4)) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        do {
          if (uVar6 == 0) {
            uVar5 = *(uint *)(param_1 + 8);
            if (uVar5 != 0) {
              uVar4 = *(uint *)(uVar5 + 4);
            }
            if (uVar5 != 0 && uVar4 != 0) {
              do {
                uVar5 = uVar4;
                uVar4 = *(uint *)(uVar5 + 4);
              } while (*(uint *)(uVar5 + 4) != 0);
            }
          }
          else {
            uVar4 = (uint)*(byte *)(uVar6 + 0xc);
            uVar5 = *(uint *)(uVar6 + 8);
            uVar3 = uVar5;
            if ((*(byte *)(uVar6 + 0xc) & 0x80) == 0) {
              do {
                uVar5 = uVar3;
                if (uVar5 != 0) {
                  uVar4 = *(uint *)(uVar5 + 4);
                }
                uVar3 = uVar4;
              } while (uVar5 != 0 && uVar4 != 0);
            }
          }
          uVar4 = 0;
          if (*(char *)(uVar6 + 0xb1) != '\0') {
            local_18 = *(undefined4 *)(uVar6 + 0x9c);
            uVar8 = FUN_00207d04(param_1 + 4,&local_18);
            uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
            if ((int *)uVar8 != (int *)0x0) {
              (**(code **)(*(int *)uVar8 + 4))();
              uVar4 = extraout_r1;
            }
            bVar1 = true;
          }
          uVar6 = uVar5;
        } while (uVar5 != 0);
        if (bVar1) {
          uVar6 = *(uint *)(param_1 + 8);
          if (uVar6 != 0) {
            uVar4 = *(uint *)(uVar6 + 4);
          }
          if (uVar6 != 0 && uVar4 != 0) {
            do {
              uVar6 = uVar4;
              uVar4 = *(uint *)(uVar6 + 4);
            } while (*(uint *)(uVar6 + 4) != 0);
          }
          *(uint *)(param_1 + 0xc) = uVar6;
        }
      }
    }
  }
  return uVar2;
}

