// rea decompile_all
// name: FUN_001072ec
// address: 0x1072ec
// body: available
// range: 0x1072ec-0x10746f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001072ec(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  FUN_00106474(param_1,*(undefined4 *)(param_2 + 0xc),param_2,0x22);
  FUN_0010f650(param_2 + 0x14,param_2);
  iVar2 = FUN_001bd338(param_1,param_2);
  *(int *)(iVar2 + 4) = param_3;
  FUN_001bd0f0(param_1,iVar2);
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x20;
  uVar3 = FUN_0017bfc0();
  FUN_000fe42c(param_2,uVar3);
  uVar6 = *(uint *)(param_1 + 4);
  uVar7 = uVar6;
  for (uVar4 = uVar6; (uVar4 != 0 && (uVar7 = uVar4, (*(byte *)(uVar4 + 100) & 0x80) == 0));
      uVar4 = *(uint *)(uVar4 + 0x60)) {
  }
  if (uVar6 != 0) {
    for (uVar4 = *(uint *)(uVar6 + 0x5c); uVar4 != 0; uVar4 = *(uint *)(uVar4 + 0x5c)) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        if (uVar6 == 0) {
          uVar5 = *(uint *)(param_1 + 4);
          if (uVar5 != 0) {
            uVar4 = *(uint *)(uVar5 + 0x5c);
          }
          if (uVar5 != 0 && uVar4 != 0) {
            do {
              uVar5 = uVar4;
              uVar4 = *(uint *)(uVar5 + 0x5c);
            } while (*(uint *)(uVar5 + 0x5c) != 0);
          }
        }
        else {
          uVar4 = (uint)*(byte *)(uVar6 + 100);
          uVar5 = *(uint *)(uVar6 + 0x60);
          uVar1 = uVar5;
          if ((*(byte *)(uVar6 + 100) & 0x80) == 0) {
            do {
              uVar5 = uVar1;
              if (uVar5 != 0) {
                uVar4 = *(uint *)(uVar5 + 0x5c);
              }
              uVar1 = uVar4;
            } while (uVar5 != 0 && uVar4 != 0);
          }
        }
        uVar4 = *(uint *)(uVar6 + 0x10);
        if (uVar4 == param_2) {
          FUN_0010f650(uVar6 + 0x14,param_2);
          if (*(int *)(uVar6 + 4) != param_3) {
            iVar2 = FUN_001bd338(param_1,uVar6);
            *(int *)(iVar2 + 4) = param_3;
            FUN_001bd0f0(param_1,iVar2);
          }
          *(ushort *)(uVar6 + 0x58) = *(ushort *)(uVar6 + 0x58) | 0x20;
          uVar3 = FUN_0017bfc0();
          uVar4 = FUN_000fe42c(uVar6,uVar3);
        }
        bVar8 = uVar6 != uVar7;
        if (bVar8) {
          uVar6 = uVar5;
        }
      } while (bVar8 && uVar5 != 0);
    }
  }
  return 0;
}

